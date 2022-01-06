/*
 * Created 2022-01-06 21:41:25
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
using namespace std;

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (cin >> ch) {
        if (ch == 'a') {
            aCnt++;
        } else if (ch == 'e') {
            eCnt++;
        } else if (ch == 'i') {
            iCnt++;
        } else if (ch == 'o') {
            oCnt++;
        } else if (ch == 'u') {
            uCnt++;
        }
    }
    cout << "Number of a: " << aCnt << endl;
    cout << "Number of e: " << eCnt << endl;
    cout << "Number of i: " << iCnt << endl;
    cout << "Number of o: " << oCnt << endl;
    cout << "Number of u: " << uCnt << endl;
    return 0;
}