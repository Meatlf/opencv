# 第8章 轮廓(Contours)

Q:本章的主要内容是什么?

A:

1)OpenCV中的`cvFindContours()`函数:该函数能够将边缘像素组装成轮廓;

2)内存存储器(memory storage):这是OpenCV在动态创建对象时存取内存的技术;

3)序列(sequence):在处理轮廓的时候通常需要使用序列.

## 8.1 内存存储(Memory Storage)

entity

thereafter

maner

analogous

Q:OpenCV中内存存储的作用是什么?

A:一种分配动态对象(dynamic objects)的存储分配方法.

Q:OpenCV中内存存储是个什么样的机制?

A:内存存储是内存块(memory block)的**链表**(**linked lists**)，可以快速分配和取消分配(de-allocation)连续的块集。

**说明**:在OpenCV中,关于内存存储有4个相关函数,需要从内存存储设计者的角度来思考为什么会设计这4种内存函数,具体看课本吧.

Q:如何比较`cvReleaseMemStorage()`和`cvClearMemStorage()`这两个函数?

## 8.2 序列(Sequences)

deque 双端队列

universe 

topology

**Q**:如何理解序列?

**A**:

1)序列是内存存储中可以存储的一种**对象**.序列是某种结构的**链表**;

2)由于OpenCV可以基于序列生成许多其他的对象,这和面向对象编程中的容器类模板(container class templates)很像;

3)事实上,在OpenCV中序列是由队列(deque)构成的.

### 8.2.1 创建序列(Creating a Sequence)

### 8.2.2 删除序列(Deleting a Sequence)











