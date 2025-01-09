/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description :                                                             *
*****************************************************************************/
#include<iostream>
#include<list>
using namespace std;

int cmp(const int& a, const int& b) {
    //�򵥵��Զ��彵������
    return a > b;
}

int main() {
    list<int> li;           //����һ��������
    for (int i = 10; i >= 6; i--) {
        li.push_back(i);
    }
    li.push_front(3);
    li.push_back(20);
    list<int> li2(li);
    for (list<int>::iterator it = li.begin(); it != li.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;
    //����ǰ3 10 9 8 7 6 20//

    li.sort();
    for (list<int>::iterator it = li.begin(); it != li.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;
    //Ĭ������� 3 6 7 8 9 10 20//


    li2.sort(cmp);
    for (list<int>::iterator it = li2.begin(); it != li2.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;
    //�Զ�������� 20 10 9 8 7 6 3//

    return 0;
}
