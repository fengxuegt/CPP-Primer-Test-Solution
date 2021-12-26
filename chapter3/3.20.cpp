/*
 * Created 2021-12-26 22:16:01
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] + vec[i + 1] << endl;
    }

    int p = 0;
    int q = vec.size();
    while (p < q) {
        cout << vec[p] + vec[q] << endl;
        p++;
        q--;
    }

    return 0;
}