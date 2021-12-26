/*
 * Created 2021-12-26 21:59:48
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> vec;
    string word;
    while (cin >> word)
    {
        vec.push_back(word);
    }
    for (auto &w : vec) {
        for (auto &c : w) {
            c = toupper(c);
        }
    }
    for (auto wr : vec) {
        cout << wr << endl;
    }
    
    return 0;
}