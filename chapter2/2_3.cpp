/*
 * Created 2021-12-22 22:24:28
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */
#include<iostream>
using namespace std;

int main()
{
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;     // 32
    cout << u - u2 << endl;     // 很大的数字 4294967264
    int i = 10, i2 = 42; 
    cout << i2 - i << endl;     // 32
    cout << i - i2 << endl;     // -32
    cout << i - u << endl;      // 0
    cout << u - i << endl;      // 0
    cout << 10e-2 << endl;      // 0.1
    cout << 1024.f << endl;
    return 0;
}