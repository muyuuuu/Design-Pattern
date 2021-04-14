# 建造者模式

以吃饭为例。肯德基等食品能在中国开办的原因，主要是工作流程比较规范，放多少盐，火候多大。而中国餐馆，很大程度依赖于厨师，从哪里学习的，盐有没有放多，有没有掉头发，一个『鱼香肉丝』就有很多种做法。

虽然工作流程是细节，但可以抽象，具体放的原料等细节依赖于这个抽象。细节不同，只是增加了另外的具体产品而已。

---

画小人的建造者模式，画人的过程是稳定的，人的细节是不同的，高矮胖瘦，如果每次都手动创造，很容易出错。所以要将一个对象的构建和表示分离，同样的构造过程创建不同的表示（不同表象的产品对象），这就是建造者模式，又称生成器模式。

用户使用构造者模式，指定创建类型的对象就可以，具体的构造过程不用管。

---

- `person.h` 画人的基类，实现虚函数。创建一个对象的各个部件指定的对象接口。
- `thin.h` 继承画人，实现一个具体的画瘦子。具体建造者，实现接口。
- `director.h` 指挥官，控制建造过程，隔离用户与创建的过程。根据用户需求创建产品，使用接口的对象。
- `main.cpp` 编译运行

如果此时要添加一个胖子，就创建一个新的类。如果只有特殊的类有自己的细节，那就添加到具体类中；如果是都有的普遍细节，就添加到基类中。

应用场景：用于创建一些复杂的对象，对象的内部构造间的构造顺序稳定，但对象可能大不相同。使得建造代码和表示代码分离，建造者隐藏物品如何被创建与组装。如果改变一个产品的内部表示，只需在定义一个具体的建造者。