/*
 * Created 2021-12-25 19:37:45
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    while (cin >> s1 >> s2) {
        if (s1 == s2) {
            cout <<  "The two strings are equal." << endl;
        } else {
            cout << "The larger string is " << (s1 > s2 ? s1 : s2) << endl;
        }
    }
    return 0;
}
// 注：想要比较size的话比较s1.size() and s2.size()