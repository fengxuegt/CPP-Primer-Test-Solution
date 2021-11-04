/* ************************************************************************
> File Name:     3.5.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月04日 星期四 23时27分51秒
> Description:   
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    string result;
    char choice = 'Y';
    cout << "please input your str" << endl;
    while (getline(cin, line)){
        result += line;
        cout << "continue?" << endl;
        cin >> choice;
        if (choice != 'Y') {
            break;
        }
        cout << "please input your str" << endl;
        cin.ignore();
    }
    cout << result << endl;
}
