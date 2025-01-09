/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description : map����                                                *
*****************************************************************************/

#include <iostream>  
#include <map>  
using namespace std;

int main()
{
    map<int, const char*> Employees;
    // 1) ʹ�������������Ž��и�ֵ
    Employees[101] = "Nikita";
    Employees[105] = "John";
    Employees[103] = "Dolly";
    Employees[104] = "Deep";
    Employees[102] = "Aman";
    cout << "Employees[104]=" << Employees[104] << endl << endl;
    cout << "Map ��С: " << Employees.size() << endl;
    cout << endl << "��Ȼ˳��:" << endl;

    for (map<int, const char*>::iterator ii = Employees.begin(); ii != Employees.end(); ++ii)
    {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
    cout << endl << "�෴˳��:" << endl;
    for (map<int, const char*>::reverse_iterator ii = Employees.rbegin(); ii != Employees.rend(); ++ii)
    {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
}