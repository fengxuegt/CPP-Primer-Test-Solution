/*
 * Created 2022-01-06 22:24:23
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    string result;
    int maxNum = -1;
    int cur = 1;
    string last = "";
    while (cin >> word) {
        if (word == last) {
            cur++;
        } else {
            if (cur > maxNum) {
                maxNum = cur;
                result = last;
            }
            last = word;
        }
    }
    if (maxNum > 1) {
        cout << result << " occured " << maxNum << " times." << endl;
    } else {
        cout << "No repeated words." << endl;
    }
    return 0;
}