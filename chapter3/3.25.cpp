/* ************************************************************************
> File Name:     3.25.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月07日 星期日 22时25分23秒
> Description:   
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    vector<int> vec(11);
    auto beg = vec.begin();
    while (cin >> num) {
       ++*(beg+num / 10);
    }

    for (; beg!= vec.end(); beg++) {
        cout << *beg << endl;
    }
    return 0;
}
