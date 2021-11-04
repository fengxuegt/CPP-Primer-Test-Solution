/* ************************************************************************
> File Name:     3.1.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月04日 星期四 23时11分14秒
> Description:   
 ************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int i = 50;
    while (i <= 100) {
        sum += i;
        i++;
    }
    cout << "50到100 的和是： " << sum << endl;
    return 0;
}
