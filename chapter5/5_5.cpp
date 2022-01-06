/*
 * Created 2021-12-29 22:31:18
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
    for (int g; cin >> g;)
    {
        string letter;
        if (g < 60)
        {
            letter = scores[0];
        }
        else
        {
            letter = scores[(g - 50) / 10];
            if (g != 100)
                letter += g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
        }
        cout << letter << endl;
    }

    return 0;
}