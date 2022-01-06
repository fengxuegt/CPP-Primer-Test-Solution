/*
 * Created 2022-01-06 22:10:47
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
using namespace std;

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0,
         tabCnt = 0, newLineCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, preCh = '\0';
    while (cin >> noskipws >> ch)
    {
        switch (ch)
        {
        case 'f':
            if (preCh == 'f') {
                ffCnt++;
            }
            break;
        case 'l':
            if (preCh == 'f') {
                flCnt++;
            }
            break;
        case 'a':
        case 'A':
            aCnt++;
            break;
        case 'e':
        case 'E':
            eCnt++;
            break;
        case 'i':
            iCnt++;
            if (preCh == 'f') {
                fiCnt++;
            }
            break;
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
        preCh = ch;
    }
    cout << "Number of a: " << aCnt << endl;
    cout << "Number of e: " << eCnt << endl;
    cout << "Number of i: " << iCnt << endl;
    cout << "Number of o: " << oCnt << endl;
    cout << "Number of u: " << uCnt << endl;
    cout << "Number of tab: " << tabCnt << endl;
    cout << "Number of space: " << spaceCnt << endl;
    cout << "Number of newLine: " << newLineCnt << endl;
    cout << "Number of ff: " << ffCnt << endl;
    cout << "Number of fi: " << fiCnt << endl;
    cout << "Number of fl: " << flCnt << endl;
    
    return 0;
}