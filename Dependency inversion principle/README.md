以修电脑为例，内存坏了换内存，硬盘坏了换硬盘，主板坏了换主板，键盘坏了换键盘。对应到面向对象中，由于面向对象的：可维护、可扩展、可复用和灵活性好，将电脑理解为一个软件，电脑的任何部件理解为程序中的类。

修电脑可以通过易插拔实现，在面向对象中，这应该叫 **『强内聚，低耦合』**。不关心内部如何实现复杂的流程，只把外部接口定义好，到时候就可以即插即用。

- 职责单一原则：内存坏了换内存，不影响外存。
- 开放封闭原则：内存不够就插内存，外存不够就插外存。

---

依赖倒转原则：即针对接口编程，不针对实现编程。如，针对硬盘的接口进行编程，插上就能用。如果针对实现编程，换硬盘也就得找配套的主板，出现了换硬盘也得换主板的尴尬。

1. 高层模块不应该依赖底层模块，都应该依赖抽象
2. **抽象不依赖细节，细节依赖于抽象。**

倒转解释：
1. 之前开发软件时，如需要访问数据库，会把访问数据库的代码剥离出来写成函数，在需要访问数据库的地方调用这个函数。这就叫高层模块依赖底层模块，或者说，高层模块怎么写，获取什么结果，完全取决于底层模块。
2. 当面临新的需求时，业务逻辑和高层模块一样，但希望用其它的格式存储数据。希望复用高层模块，但高层模块和底层数据库模块绑定在一起，没办法复用。换句话说，计算机的CPU、内存、外存（高层模块）不应该依赖于主板（底层模块），主板坏了，其它都不能用；如果高层模块（硬盘）的插入依赖于底层模块（主板），再来一个功能类似的高层模块（另一个硬盘），它将无法复用（插入）。

---

如果不管高层还是底层，都依赖抽象，只要接口稳定，任何一个更改都不用担心其它受到影响。所以方便复用。

里氏替换原则：一个软件使用了一个父类，一定适用子类；察觉不出父类和子类的区别。也就是，将程序中的父类替换为子类，程序行为没有变化，子类型可以替换父类型。举例：面向对象时，一个是鸟类，一个是企鹅类，鸟会飞，企鹅不会飞。子类拥有父类所有的非 private 的行为和属性，因此，企鹅类不能继承鸟类。

根据里氏原则，继承复用成为了可能。只有当子类可以替换掉父类，软件单位的功能不受影响，父类能真正被复用，子类也能在父类上添加新的功能。举例：动物的基类具有：吃、跑、叫三个行为。而落实到具体的动物，猪牛羊也有类似的行为，只需要更改实例化的地方，其它不用修改。使得封闭-开放原则称为可能，即子类型的可替换性，使得父类型模块在无需修改的情况下可以扩展。

高级模块（牛羊猪）和低级模块（动物）都依赖于抽象和接口（吃、跑、叫），接口写好了，就可以替换、复用等。除了约定的接口，其它地方可以自由发挥。

返回刚才数据库的例子：
- 数据库类提供：返回数据接口
- 高级类A结构：读数据结构，自己一个私有方法，将数据写出到 `xlsx`
- 高级类B结构：复用A，读数据结构能复用，自己一个私有方法，将数据写出到 `csv`

---

简单的收音机，高耦合，修起来很困难，面向过程开发，修起来很困难；复杂的电脑，低耦合，修起来很简单，面向对象修起来很简单，只需保证接口一致。

依赖倒转：编写程序考虑的都是针对接口的编程而不是细节，程序依赖抽象类或接口，时面向对象设计的标志。