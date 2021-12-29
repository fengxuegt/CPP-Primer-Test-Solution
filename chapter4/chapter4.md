# 第四章 表达式

### 练习4.1

表达式5 + 10 * 20 / 2的求值结果是：105

### 练习4.2

```cpp
*(vec.begin())
(*(vec.begin())) + 1
```

### 练习4.3

C++语言并没有明确规定大多数二元运算符的求值顺序，给编译器优化留下了余地。
C++的思想是尽可能的相信程序员，将效率最大化。

### 练习4.4

```cpp
12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) = 91
```

### 练习4.5

```cpp 
-30 * 3 + 21 / 5 = -86
-30 + 3 * 21 / 5 = -18
30 / 3 * 21 % 5 = 0
-30 / 3 * 21 % 4 = -2 // % 结果的正负号取决于被取余数
```

### 练习4.6

```cpp
if (i % 2 == 0)
if (i & 0x01)
```

### 练习4.7

溢出是当计算的结果超出该类型所能表示的范围的情况。

```cpp
short svalue = 32767; ++ svalue; // -32768
unsigned uivalue = 0; --uivalue; // 4294967295
unsigned short usvalue = 65535; ++usvalue; // 0 
```

### 练习4.8

逻辑与和逻辑或运算符都是先求左侧表达式结果，再求右侧表达式结果；当且仅当左侧表达式结果无法确定最终表达式的值时才会求右侧表达式的值。这种策略被称为短路求值。

相等性运算符并没有规定运算顺序。

### 练习4.9

```cpp
const char *cp = "hello world";
if (cp && *cp) // 首先判断cp是否为空指针，然后再判断cp的内容是否为0
```

### 练习4.10

```cpp
int i;
while (cin >> i && i != 42)
```

### 练习4.11

```cpp
a > b && b > c && c > d;
```

### 练习4.12********

```cpp
i != j < k;
(i != j) < k; // wrong
i != (j < k); // 
```

### 练习4.13

```cpp
int i;
double d;
d = i = 3.5; // i = 3, d = 3.0
i = d = 3.5; // d = 3.5, i = 3
```

### 练习4.14

```cpp
if (42 = i) // error
if (i = 42) // === 1
```

### 练习4.15

```cpp
double dval;
int ival;
int *pi;
dval = ival = pi = 0; // error
dval = ival = 0; // right
pi = 0; // right
```

### 练习4.16

```cpp
if (p = getPtr() != 0) // if ((p = getPtr()) != 0)
if (i = 1024) // if (i == 1024)
```

### 练习4.17

前置运算符是将对象本身作为左值返回，后置运算符返回原始对象的副本为右值；

### 练习4.18

将会从第二个元素开始取值，并且最后对v.end()也进行取值，结果是未定义的

### 练习4.19********

```cpp
ptr != 0 && *ptr++ // right
ival++ && ival // right
vec[ival++] <= vec[ival] // wrong C++未规定<=两侧的表达式的求值顺序
```

### 练习4.20********

```cpp
*iter++; // *iter, iter++
(*iter)++; // iter指向的值++
*iter.empty(); // 不合法，这里应该加括号
iter->empty(); // 判断迭代器元素是否为空
++*iter; // 不合法，string类型没有++操作
iter++->empty(); // 判断当前迭代器元素是否为空，然后迭代器++
```

### 练习4.21

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    for (auto &i : vec) {
        if (i & 0x01) {
            i = 2 * i;
        }
    }
    return 0;
}
```

### 练习4.22

```cpp
#include<iostream>
using namespace std;
int main()
{
    for (unsigned g; cin >> g) {
        auto result = g > 90 ? "high pass" : g < 60 ? "fail" : g < 75 ? "low pass" : "pass";
        cout << result << endl;
        if (g > 90) {
            cout << "high pass" << endl;
        } else if (g < 60) {
            cout << "fail" << endl;
        } else if (g < 75) {
            cout << "low pass" << endl;
        } else {
            cout << "pass" << endl;
        }
    }
    return 0;
}
// 很明显当条件分支过多时if else 更容易理解
```

### 练习4.23

```cpp
string s = "word";
string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
// 以上语句无法通过编译，请修改；
string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
```

### 练习4.24********

**条件运算符的右结合律怎么理解？**

### 练习4.25

如果一台机器上int占32位、char占8位，用的是latin-1字符集，其中字符‘q’的二进制形式是01110001，那么表达式~'q' << 6的值是什么？

首先将char提升为int型，为00000000 00000000 00000000 01110001，然后取反，在左移6位，最后是-7296。

### 练习4.26

略

### 练习4.27

```cpp
unsigned long ul1 = 3, ul2 = 7;
ul1 & ul2; // 0011, 0111, 0011 = 3
ul1 | ul2; // 0011, 0111, 0111 = 7
ul1 && ul2; // true
ul1 || ul2; // true
```

### 练习4.28

```cpp
bool 1 byte;
char 1 byte;
wchar_t 4 byte;
char16_t 2 byte;
char32_t 4 byte;

short 2 byte;
int 4 byte;
long 8 byte;
long long 8 byte;

float 4 byte;
double 8 byte;
long double 16 byte;
```

### 练习4.29

```cpp
int x[10];
int *p = x;
cout << sizeof(x) / sizeof(*x) << endl; // 40 / 4 = 10;
cout << sizeof(p) / sizeof(*p) << endl; // 1
```

### 练习4.30********

```cpp
sizeof x + y; // sizeof(x) + y
sizeof p->mem[i]; // sizeof(p->mem[i])
sizeof a < b; // sizeof(a) < b
sizeof f(); // sizeof(f())
```

### 练习4.31

除非必须，否则不要使用后置版本的递增和递减运算符。

### 练习4.32

```cpp
constexpr int size = 5;
int ia[size] = {1, 2, 3, 4, 5};
for (int *ptr = ia, ix = 0; ix != size && prt != ia + size; ++ix, ++ptr) {/*...*/}
```

上述代码用于遍历数组，ptr和ix都是起到一个计数的作用

### 练习4.33********

```
someValue ? ++x, ++y : --x, --y;
(someValue ? ++x, ++y : --x), --y;
```

如果someValue的值为真，x和y都自增并返回y值，然后丢弃y值，y递减并返回y值。
如果someValue的值为假，x递减并返回x值，然后丢弃x值，y递减并返回y值。

### 练习4.34********

```cpp
if (fval); // fval 转化为bool型
dval = fval + ival; // ival先转化为float型，然后相加最后转化为double型
dval + ival * cval; // cval先转化为int型，相乘之后转化double，再相加
```

### 练习4.35********

```cpp
char cval;
int ival;
unsigned int ui;
float fval;
double dval;
cval = 'a' + 3; // 'a' 转化为int，与3相加之后result转化为char
fval = ui - ival * 1.0; // ival先转化为double，ui转化为double， result转化为float
dval = ui * fval; // ui转化为float， 结果最后转化为double
cval = ival + fval + dval; // ival转为float，再转化为double，再转化为char
```

这个题要再巩固一下unsigned和double以及float的相互转化规则。

### 练习4.36

```cpp
i *= static_cast<int>(d); // i为int，d为double，书写表达式使得执行整数类型的乘法而非浮点类型的乘法
```

### 练习4.37********

```cpp
int i;
double d;
const string *ps;
char *pc;
void *pv;

pv = (void*)ps; // pv = static_cast<void*>(const_cast<string*>(ps));
i = int(*pc); // i = static_cast<int>(*pc);
pv = &d; // pv = static_cast<void*>(&d);
pc = (char*)pv; // pc = static_cast<char*>(pv);
```

### 练习4.38

```cpp
double slope = static_cast<double>(j/i); // 将j/i的结果转化为double，并赋值给slope
```



























