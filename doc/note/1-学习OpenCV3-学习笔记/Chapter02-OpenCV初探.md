# 第2章 OpenCV初探（Chapter 2 Introduction to OpenCV）

## 2.1 头文件

## 2.2 第一个程序：显示图片

**Q**：本节讲了啥？

**A**：

1）本节讲了如何将一张图像并且将其显示在屏幕上，为OpenCV C++ “HelloWorld”代码；

2）不用担心，OpenCV支持对常用的各种图像格式数据进行操作，如BMP、JPEG、TIFF等；

Q：关于`waitKey()`，实际代码中会遇到以下语句，如何理解这条语句呢？

```python
while 1:
	k = cv.waitKey(25) & 0xFF
	if k == 27:
		break
```

A：当键入`Esc`键之后，结束`while`循环。

## 小结

## 参考资料

学习OpenCV 3中文版.pdf

