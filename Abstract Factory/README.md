# 抽象工厂模式

问题背景：一个公司的产品，需要更换数据库，导致了一个程序员一直改没必要修改的代码。如将一个数据库的语法换为另一个数据库的语法，大多是无用功。之后用新的数据库，又需要改代码；发布新的功能，数据库、业务等都需要改动。菜鸟程序员遇到问题，只会通过时间来摆平。

---

初版代码：

```cpp
// 用户类，只有 ID 和姓名
class user {
    int id;
    string name;
    setInfo();
    getInfo();
};
// sqlUser 类，操作 user 表，插入与查询
class sqlUser {
    SQL.insert(user u);
    SQL.getUser(int id);
};
// 客户端程序
int main(){
    u = User();
    s = sqlUser();

    s.insert(u);
    s.getUser(u.id);
}
```

这就导致了不能更换数据库的原因，在于 `s = sqlUser();`，`s` 只能是 `sql`。如果是灵活的，是多态的。执行具体的语句时，就不在关心是 `sql` 数据库还是 `orcale` 数据库。

## 工厂方法模式

使用工厂方法模式封装产生数据库的变化，让子类决定实例化哪一个类。此时的代码（可以参考工厂方法模式那个模式）：

1. 插入数据库的虚基类 data
2. sqlUser 类，继承 data，用于插入 user 表到 sql 中
3. accessUser 类，继承 data，用于插入 user 表到 access 中
4. 工厂虚基类，IFactory，有创建工厂的接口
5. sqlUser 工厂类，继承 IFactory，实例化 sqlUser 对象
6. accessUser 工厂类，继承 IFactory，实例化 accessUser 对象

这种模式下，如果更换数据库，只需要创建对应的工厂即可。由于多态的关系，实现不知道要使用哪个数据库，在运行时确定。实现了业务逻辑和数据访问的解耦。

此时只有一个 user 表，需要适配到很多数据库是可以的；但是，如果此时增加『部门表』，又要增加好多类。需要用另外的模式来解决问题。

---

工程量优点繁琐，耐心观看。此处代码位于 `version1` 文件夹。

- `user.h`，用户基本信息表，含有用户基本信息，ID 和姓名
- `department.h`，部门基本信息表，含有部门名称
- `IUser.h`，虚基类，实现插入用户和查询用户
- `Idepartment.h`，虚基类，实现插入部门和查询部门
- `factory.h`，虚基类，创建指向 IUser 和 Idepartment 的指针，运行时实例化到具体的 sql 或 oracle
- `sqlfactory.h`，继承 factory，SQL 工厂，用于创建 SQL 工具，SQL 工具可以操作用户表和部门表
- `oraclefactory.h`，继承 factory，oracle 工厂，用于创建 oracle 工具，oracle 工具可以操作用户表和部门表
- `sqldepartment.h`，继承Idepartment，实现具体的 sql 对 department 的操作
- `oracledepartment.h`，继承Idepartment，实现具体的 oracle 对 department 表的操作
- `sqluser.h`，继承IUser，实现具体的 sql 对 user 表的操作
- `oracleuser.h`，继承IUser，实现具体的 oracle 对 user 表的操作
- `main.cpp`，编译运行

## 优缺点分析

1. 由于具体工厂类的存在，易于交换产品系列，在一个应用中只需创建一个基类，而后自由指向其它具体的任意工厂，就可以产出不同的产品，如 SQL 数据库丝滑切换到 oracle 数据库，设计不能防止需求的更改，理想的情况是让需求变动对代码的影响不大。
2. 让具体的创建实例过程和客户端分离，客户端通过抽象接口操作实例，产品的具体类名（sqluser，oracledepartment）等对客户端不可见，这是依赖倒转、封装-开放原则的体现。

---

1. 需要注意的是，每次添加新的表，都需要去`factroy, sqlfactory, oraclefactory` 中去添加新的操作，违背了封装-开放原则。
2. 客户端不止一个，很多地方都在使用 IUser。而上述设计，每个类都会声明一个 sqlfactory 的工厂，100 个用户访问数据库，就有 100 个 sql 操作对象；切换到 oracle 数据库时，需要切换 100 次。

**编程是一门艺术，大批量改动是丑陋的做法，不向丑陋的程序低头。**

## 简单工厂方法

去除 `factory，sqlfactory，oraclefactory` 这三个工厂类，换成一个带 `switch` 的简单工厂。修改代码位于 `version2` 文件夹。

# 抽象工厂与反射