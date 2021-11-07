/* ************************************************************************
> File Name:     3.24.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月07日 星期日 22时00分01秒
> Description:   
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a = 1;
    int c = a + a++;
    cout << c << endl;
    int num;
    vector<int> vec;
    while (cin >> num) {
        vec.push_back(num);
        cout << "current num is " << num << endl;
    }

    cout << "add completed" << endl;
    for (auto it = vec.begin(); it != vec.end() - 1; it++) {
        cout << *it + *(++it) << " ";
    }

    if (vec.size() % 2 != 0) {
        cout << *(vec.end() - 1);
    }
    cout << endl;

    return 0;
}
