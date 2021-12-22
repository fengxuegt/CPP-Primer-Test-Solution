/*
 * Created 2021-12-22 23:51:01
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
using namespace std;
string global_str;
int global_int;
int main()
{
    int local_int;
    string local_str;
    cout << "global_int " << global_int << endl; // 0
    cout << "global_str " << global_str << endl; // ""
    cout << "local_int " << local_int << endl; // 不确定
    cout << "local_str " << local_str << endl; // ""
    return 0;
}
/*
global_int 0
global_str 
local_int 786528
local_str 
*/