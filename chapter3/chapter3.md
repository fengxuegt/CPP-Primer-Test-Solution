# 第三章	字符串、向量和数组

### 练习3.3

对于>>操作符而言，会忽略字符前方的空白，从第一个不是空白的字符开始读取，到空白字符结束，并且在读取结束之后，结束符仍然是在缓冲区中的；

对于getline函数而言，不会忽略空白字符，直到回车符号结束，回车符号被读取进来，但是不会储存在string中；

### 练习3.4

对于string而言，可以使用逻辑对比操作符直接比较；

### 练习3.5

**注意：若是cin之后用getline读取，则会将回车读取进来；解决方法是使用cin.ignore()**

这里要好好记一下cin和getline关于分隔符的不同处理方式，一个是读取，一个是留在缓冲区中；

### 练习3.6

3.6.cpp

### 练习3.7

将&char修改为char，则原来字符串不会发生变化。

### 练习3.8

见cpp

### 练习3.9

```cpp
string s;
cout << s[0] << endl; // illegal, undefined behavior
```

### 练习3.10

**ispunct** 判断是否是标点符号

### 练习3.11

```cpp
const string s = "keep out";
for (auto &c : s) {} // llegal, c is const char
```

### 练习3.12

```cpp
vector<<vector<int>> ivec; // c++ 11 llegal
vector<string> svec = ivec; // illegal, type is not the same
vector<string> svec(10, "null") // llegal, 10 nulls
```

### 练习3.13******

```cpp
vector<int> v1; // 0, nullptr
vector<int> v2(10); // 10 0
vector<int> v3(10, 42); // 10, 42
vector<int> v4{10}; // 1, 10
vector<int> v5{10, 42}; // 2, 10, 42
vector<string> v6{10}; // 10, value:""
vector<string> v7{10, "hi"}; // 10, value:"hi"
```

### 练习3.14

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec;
    int i;
    while (cin >> i) {
        vec.push_back(i);
    }
    return 0;
}
```

### 练习3.15

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> vec;
    string str;
    while (cin >> str) {
        vec.push_back(str);
    }
    return 0;
}
```

### 练习3.16

```cpp
略
```

### 练习3.17

见cpp

### 练习3.18

```c++
vector<int> ivec;
ivec[0] = 42; // wrong
```

### 练习3.19

```cpp
vector<int> vec = {42, 42, 42....};
vector<int> vecc(10, 42);
vector<int> ve;
for (i = 0; i < 10; i++) {
    ve.push_back(42);
}
```

### 练习3.20

见cpp

### 练习3.21

```cpp
void check_and_print(vector<int> &vec) {
    cout << "[";
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << (it == vec.end() - 1 ? ",", ""); 
    }
    cout << "]";
}
```

### 练习3.22

略

### 练习3.23

```cpp
for (auto it = vec.begin(); it != vec.end(); it++) {
    *it *= 2;
}
```

### 练习3.24

```cpp
for (auto it = vec.begin(); it != vec.end(); it++) {
    cout << *it + *(it + 1) << endl;
}
// 见cpp
```

### 练习3.25

见cpp

### 练习3.26

为什么迭代器的代码用的是mid = beg + (end - beg) / 2;而不是mid = (beg + end) / 2？
是因为迭代器不支持加法，只支持减法。和与整数的加法。**不是为了防止溢出**

### 练习3.27

```cpp
unsigned int buf_size = 1024;
int ia[buf_size]; // wrong, 数组维度必须是一个常量表达式
int ia[2 + 3 * 4]; // right
int ia[text_size()]; // wrong, function 的result需要运行时才确定
char st[11] = "fundamental"; // wrong, should be 12
```

### 练习3.28

```cpp
string sa[10]; // ""
int ia[10]; // 0
int main()
{
    string sa2[10]; // ""
    int ia2[10]; // do not know
}
```

### 练习3.29

数组的缺点：大小固定，不灵活；不能随意增加元素；不允许拷贝和赋值；

### 练习3.30

```cpp
constexpr size_t array_size = 10;
int ia[arrar_size]; // constexpr 可以当做array的size
for (size_t ix = 1; ix <= array_size; ix++) {
    ia[ix] = ix;
}
// 当ix = 10，数组越界；
```

### 练习3.31

见下一题

### 练习3.32

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr1[10];
    for (auto i = 0; i < 10; i++) {
        arr1[i] = i;
    }
    int arr2[10];
    for (auto i = 0; i < 10; i++) {
        arr2[i] = arr1[i];
    }
    cout << "---------" << endl;
    vector<int> vec1(10);
    for (auto i = 0; i < 10; i++) {
        vec1[i] = i;
    }
    vector<int> vec2(vec1); // more simple than array
}
```

### 练习3.33

数组中的元素如果不初始化的话就是未定义的（局部变量）

### 练习3.34

```cpp
p1 += p2 - p1;
// 将p1移动到p2的位置
```

### 练习3.35

见cpp









