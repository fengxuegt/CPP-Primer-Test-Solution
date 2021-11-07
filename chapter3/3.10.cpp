/* ************************************************************************
> File Name:     3.10.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月07日 星期日 21时46分59秒
> Description:   
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    cout << "please input your string: " << endl;
    getline(cin, line);
    for (auto ch: line) {
        if (!ispunct(ch)) {
            cout << ch;
        }
    }
    cout << endl;
    return 0;
}
