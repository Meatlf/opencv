# 第3章 了解OpenCV的数据类型(Getting to Know OpenCV Data Types)

## 3.1 基础知识(The Basics)

**Q**：接下来的几章讲了啥？

**A**：

1）OpenCV中的几种**基础数据类型**，涵盖最基本的**原语容器**到用于**处理像图像**与**大型矩阵**这样的**数据结构**；

2）介绍许多**有用的函数**，使得我们可以用一系列有效的方式来处理这些数据。

## 3.2 OpenCV的数据类型(OpenCV Data Types)

**Q**：如何**评价**OpenCV的数据类型？

**A**：OpenCV有很多数据类型，它们都基于一些**重要视觉概念的抽象而设计**，以此提供相对**简单、直观的表示和处理**。

**Q**：OpenCV的**基础数据类型**是如何**分类**的？

**A**：从组织结构的角度来看，OpenCV的基础数据类型主要分为3类:

1）直接从C++ 原语中的继承的基础数据类型（如int和float等）；

2）辅助对象，比如垃圾回收集指针类、用于数据切片的范围对象（range objects）以及抽象的终止条件类等；

3）大型数组类型，如`cv::Mat`类。

### 3.2.1 基础类型概述(Overview of the Basic Types)

**Q**:本小节讲了OpenCV中哪些基本模板类?

**A**:`cv::Vec<>`,`cv::Matx<>`,`cv::Point`,`cv::Scalar`,`cv::Size`,`cv::Rect`等.

**Q**:为什么STL类已经有固定长度的vector模板类了,还需要`cv::Vec<>`呢?

**A**:vector模板类适合处理"小"的向量,而`cv::Vec<>`适合处理大型向量.

**Q**:如何评价模板`cv::Matx<>`?

**A**:

1)该目标也是固定(fixed)矩阵类,也不是为了表示大型数组;

2)在编译时(compile time)必须要确定固定矩阵的维度,这和`cv::Mat`不同

### 3.2.2 深入了解基础类型（Basic Types:Getting Down to Details）

encyclopedic

Q：如何理解OPenCV中的基本数据类型？

A：OpenCV中的每种基本数据类型本质上都是一个相对复杂的类（object），支持其自身的函数接口、重载操作等。

**Point类**

**cv::InputArray和cv::OutputArray类**

**Q**：如何理解`cv::InputArray`和`cv::OutputArray`?

**A**：一般在函数接口定义时出现，表示在OpenCV中表示数组的类型都可以。

### 工具函数

## 3.3 小结(Summary)

## 参考资料

学习OpenCV 3中文版.pdf

