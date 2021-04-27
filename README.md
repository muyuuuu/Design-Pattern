C++ 复现《大话设计模式》，有代码的复现，讲理论的就不复现了。对于不含代码的理论知识，如果你开发过大型程序，一定知道作者在说什么。每个模式中会有一个 `README` 来介绍这种模式适用的场景，但不会细讲，如果企图读懂模式的思想请阅读专业教材。

注意：只关注模式本身，某些细节、异常等没有处理。

| 文件夹                          | 模式名称     | 是否含代码         |
| ------------------------------- | ------------ | ------------------ |
| Factory mode                    | 简单工厂模式 | :heavy_check_mark: |
| Strategy mode                   | 策略模式     | :heavy_check_mark: |
| Single responsibility principle | 单一职责原则 | :x:                |
| Open-Closed Principle           | 开闭原则     | :x:                |
| Dependency inversion principle  | 依赖倒转原则 | :x:                |
| Decoration mode                 | 装饰模式     | :heavy_check_mark: |
| Proxy mode                      | 代理模式     | :heavy_check_mark: |
| Factory Method Pattern          | 工厂方法模式 | :heavy_check_mark: |
| Prototype Pattern               | 原型模式     | :heavy_check_mark: |
| Template Method Pattern         | 模板方法模式 | :heavy_check_mark: |
| Law of Demeter                  | 迪米特法则   | :x:                |
| Facade Pattern                  | 外观模式     | :heavy_check_mark: |
| Builder Pattern                 | 建造者模式   | :heavy_check_mark: |
| Subscribe Pattern               | 观察者模式   | :heavy_check_mark: |
| Abstract Factory Pattern        | 抽象工厂模式 | :heavy_check_mark: |
| State Pattern                   | 状态模式     | :heavy_check_mark: |
| Adapter Pattern                 | 适配器模式   | :heavy_check_mark: |
| Memento Pattern                 | 备忘录模式   | :heavy_check_mark: |
| Composite Pattern               | 组合模式     | :heavy_check_mark: |
| Iterator Pattern                | 迭代器模式   | :heavy_check_mark: |
| Singleton Pattern               | 单例模式     | :heavy_check_mark: |
| Bridge Pattern                  | 桥接模式     | :heavy_check_mark: |
| Command Pattern                 | 命令模式     | :heavy_check_mark: |

# 遗留

- [ ] 抽象工厂模式中反射的 C++ 实现
- [ ] 状态模式中的 bug 修复，与日后的 C++ 整理放到一起