/*
 * Created 2022-01-05 19:22:22
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */
#include<iostream>
#include<string>
#include<vector>
int main()
{
    vector<string> vec = {"A++", "A", "B", "C", "D", "F"};
    for (int g; cin >> g;) {
        string letter = "";
        if (g < 60) {
            letter = vec[5];
        } else {
            letter = vec[(g - 50) / 10];
            if (g != 100) {
                letter += g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : ""; 
            }
        }
        cout << letter << endl;
    }
    
    return 0;
}