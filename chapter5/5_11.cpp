/*
 * Created 2022-01-06 22:10:38
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
using namespace std;

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0;
    char ch;
    while (cin >> noskipws >> ch)
    {
        switch (ch)
        {
        case 'a':
        case 'A':
            aCnt++;
            break;
        case 'e':
        case 'E':
            eCnt++;
            break;
        case 'i':
        case 'I':
            iCnt++;
            break;
        case 'o':
        case 'O':
            oCnt++;
            break;
        case 'u':
        case 'U':
            uCnt++;
            break;
        case '\n':
            newLineCnt++;
            break;
        case '\t':
            tabCnt++;
            break;
        case ' ':
            spaceCnt++;
            break;
        default:
            break;
        }
    }
    cout << "Number of a: " << aCnt << endl;
    cout << "Number of e: " << eCnt << endl;
    cout << "Number of i: " << iCnt << endl;
    cout << "Number of o: " << oCnt << endl;
    cout << "Number of u: " << uCnt << endl;
    cout << "Number of tab: " << tabCnt << endl;
    cout << "Number of space: " << spaceCnt << endl;
    cout << "Number of newLine: " << newLineCnt << endl;
    
    return 0;
}