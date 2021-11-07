/* ************************************************************************
> File Name:     3.7.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月07日 星期日 21时39分20秒
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
    for (char &ch : line) {
        ch = 'X';
    }
    cout << line << endl;
    return 0;
}
