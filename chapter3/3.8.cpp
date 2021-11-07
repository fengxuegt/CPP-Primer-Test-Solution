/* ************************************************************************
> File Name:     demo.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月05日 星期五 00时08分46秒
> Description:   
 ************************************************************************/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string line;
    cout << "please input your string" << endl;
    getline(cin, line);
    for (decltype(line.size()) i = 0; i < line.size(); i++) {
        line[i] = 'X';
    }
    cout << line << endl;
    return 0;
}
