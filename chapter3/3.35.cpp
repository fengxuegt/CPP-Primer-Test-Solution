/* ************************************************************************
> File Name:     3.35.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月07日 星期日 23时13分57秒
> Description:   
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec(10);
    for (auto it = vec.begin(); it != vec.end(); it++) {

        cout << *it << " ";
    }
    cout << endl;
    
    for (auto it = begin(vec); it != end(vec); it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
