/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description :                                                             *
*****************************************************************************/

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(50);
    //{10,20,10,20,30,50}  -----> {10,10,20,20,30,50} ����ʱ�����Զ�����
    cout << "����20��λ����" << *ms.find(20) << endl;   //�������Ҳ�������Ӵ

    int i = 0;
    for (multiset<int>::iterator it = ms.begin(); it != ms.find(20); it++, i++) {}
    cout << "����20��λ����" << i << endl;    //�����Ǵ�0��ʼ�������˴���2

    return 0;
}