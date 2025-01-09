/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description : Priority_queue(���ȶ���)                                                             *
*****************************************************************************/

#include <queue>
#include <iostream>
using namespace std;

struct cmp
{ //����Ƚ�Ҫ�ýṹ���ʾ
    bool operator()(int& a, int& b) const
    {
        return a > b;
    }
};
int main()
{
    priority_queue<int, vector<int>, cmp> q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i * 10);
        cout << "push element " << i*10 << endl;
    }
    q.push(15);
    q.push(4);
    int i = 1;
    while (!q.empty())
    {
        int temp = q.top();
        q.pop();
        cout << "No " << i++ << " element is: " << temp << endl;
    }
    return 0;
}