# 第二章 变量与基本类型

### 练习2.1

C++ 规定short和int至少16位，long至少32位，带符号类型可以表示正数、负数和0。无符号整数只能表示正数和0。

### 练习2.2

计算按揭贷款时，应该使用double变量。因为精度要求比较高，需要使用浮点计算。

### 练习2.3

见cpp文件

### 练习2.4

我的估计是正确的

### 练习2.5

```cpp
'a', L'a', "a", L"a"; // 字面值，宽字面值，字符串字面值，宽字符串字面值
10, 10u, 10L, 10uL, 012, 0xC // 十进制整形，十进制无符号整型，十进制长整形，十进制无符号长整形，八进制整形，十六进制整形
3.14, 3.14f, 3.14L // double，float， long double
10, 10u, 10.,10e-2 // 十进制整形，十进制无符号整型，double，double
```

### 练习2.6

```cpp
int month = 9, day = 7; // no problem
int month = 09, day = 07; // 八进制不能有9
```

### 练习2.7

```cpp
"who goes" // string
3.14e1L // long double
1024f // 无效且不合法，后缀f只能用于浮点字面量
3.14L // long double
```

### **练习2.9**

```cpp
std::cin >> int input_val; // 需要现定义再使用
int i = {3.14}; // 列表初始化内置类型变量时，如果会发生精度损失，编译器会报错，直接初始化会直接舍去吧
double a = b = 999.9; // b 尚未定义
int i = 3.14; // 如上所述，不报错，但是会直接截断小数
```

### 练习2.10

见cpp

### 练习2.11

```cpp
extern int ix = 1024; // 定义
int iy; // 定义
extern int iz; // 声明
```

### 练习2.12

```cpp
int double = 3.14; // wrong
int _; // right
int catch-22; // wrong - is not _
int 1_or_2; // wrong
double Double = 3.14; // right
```

### 练习2.13

```cpp
int i = 42;
int main() {
  int i = 100;
  int j = i; // j = 100
}
```

### 练习2.14

```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i) {
  sum += i; // sum += i, 0 ~ 9
}
cout << i << " " << sum << endl; // global variable
```

### 练习2.15

```cpp
int ival = 1.01; // right
int &rval1 = 1.01; // wrong, need const
int &rval2 = ival; // right
int &rval3; // wrong, must initialize

```

### 练习2.16

```cpp
int i = 0, &r1 = i;
double d = 0, &r2 = d;
r2 = 3.14; // d = 3.14
r2 = r1; // d = i
i = r2; // i = d
r1 = d; // i = d
```

### 练习2.17

```cpp
int i, &ri = i;
i = 5; ri = 10;
cout << i << " " << ri << endl; // 10 10
```

### 练习2.18

```cpp
int a = 0, b = 1;
int *p1 = &a, *p2 = p1;
p1 = &b; // change the value of a pointer
*p2 = b; // change the value to which the pointer points
```

### 练习2.19

**请说明指针和引用的主要区别**

引用是别名，指针是另一个对象
引用必须初始化，并且定义了之后不能再指向另一个对象
指针无需初始化，并且改变指向

### 练习2.20

```cpp
int i = 42;
int *p = &i;
*p = *p * *p; // i = i * i;
```

### 练习2.21

```cpp
int i = 0;
double *dp = &i; // wrong, type not the same
int *ip = i; // wrong, need &
int *p = &i; // right
```

### 练习2.22

```cpp
if (p) // p != nullptr
if (*p) // *p != 0
```

### 练习2.23

给定指针P， 能够判断它指向合法的对象吗？
解：不能，因为首先要确定指针是不是合法的，才能判断指向的对象是不是合法的

### 练习2.24

```cpp
int i = 42;
void *p = &i; // void * can point to any type
long *ip = &i; // type must be the same
```

### 练习2.25

```cpp
int *ip, i, &r = i; // ip is a pointer, i is a int, r is a reference
int i, *ip = 0; // i is a int, ip is a pointer
int *ip, ip2; // ip is a pointer, ip2 is a int
```

### 练习2.26

```cpp
const int buf; // wrong, must init
int cnt = 0; //right
const int sz = cnt; // right
++cnt; // right
++sz; // wrong
```

### 练习2.27

```cpp
int i = -1, &r = 0; // wrong
int *const p2 = &i2; // right
const int i = -1, &r = 0; // right, const修饰整个语句中的变量
const int *const p3 = &i2; // right
const int *p1 = &i2; // right
const int &const r2; // wrong
const int i2 = i, &r = i; // right
```

### 练习2.28

```cpp
int i, *const cp; // wrong
int *p1, *const p2; // wrong
const int ic, &r = ic; // wrong
const int *const p3; // wrong
const int *p; // right
```

### 练习2.29?????????

```cpp
i = ic; // right
p1 = p3; // wrong
p1 = &ic; // wrong
p3 = &ic; // wrong========================================================
p2 = p1; // wrong========================================================
ic = *p3; // wrong
// 这里暴露了const和非const指针如何指向的问题还不是特别清楚
```

### 练习2.30

```cpp
const int v2 = 0; int v1 = v2; // v2 is top const
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2 is low const, p3 is both, r2 is low
```

### 练习2.31????

```cpp
r1 = v2; // right, top is ignored
p1 = p2; // wrong, not const can not point to const
p2 = p1; // right, but const can point to no const
p1 = p3; // wrong, low can not ignored
p2 = p3; // right ??? 
```

### 练习2.32

```cpp
int null = 0, *p = null; // wrong
int null = 0, *p = &null;
int null = 0, *p = nullptr;
// *p 可以指向常量值0，但是不能指向值为0的变量
```

### 练习2.33

略

### 练习2.34

略

### 练习2.35

```cpp
const int i = 42;
auto j = i; // j is a int
const auto &k = i; // k is a const reference, const int&
auto *p = &i; // const pointer, const int*
const auto j2 = i; // const int, const int
const auto &k2 = i; // const reference, const int &
```

### 练习2.36

```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a; // 加上括号之后推导出来的是引用
++c;
++d;
// c is a int
// d is a reference of a
// all their value is 4
```

### 练习2.37

```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
// c is a int
// d is a reference of int
// a = c = d = 3; b = 4
```

### 练习2.38********

auto 和decltype的区别

```cpp
// decltype会将顶层const和引用保留起来
// same result
int i = 0, &r = i;
auto a = i;
decltype(i) b = i;
// not the same
auto c = r; // c is a int
decltype(r) d = r; // d is a reference
```

### 练习2.39

略

### 练习2.40

```cpp
struct Sale_data {
  string bookNo;
  string booName;
  unsigned units_sold = 0;
  double revenue = 0.0;
  double price = 0.0;
};
```

### 练习2.41

### 练习2.42













