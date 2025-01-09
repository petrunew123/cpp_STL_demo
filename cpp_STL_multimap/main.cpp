/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description :                                                             *
*****************************************************************************/
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    multimap<string, int> m_map;
    string name = "XiaoMing";
    m_map.insert(make_pair(name, 50));
    m_map.insert(make_pair(name, 55));
    m_map.insert(make_pair(name, 60));
    //��ʽ1
    cout << "----------����1-----------" << endl;
    int k;
    multimap<string, int>::iterator m;
    m = m_map.find(name);
    for (k = 0; k != m_map.count(name); k++, m++)
        cout << m->first << "--" << m->second << endl;
    //��ʽ2
    cout << "----------����2-----------" << endl;
    multimap<string, int>::iterator beg, end;
    beg = m_map.lower_bound(name);
    end = m_map.upper_bound(name);
    for (m = beg; m != end; m++)
        cout << m->first << "--" << m->second << endl;
    //��ʽ3
    cout << "----------����3-----------" << endl;
    beg = m_map.equal_range(name).first;
    end = m_map.equal_range(name).second;
    for (m = beg; m != end; m++)
        cout << m->first << "--" << m->second << endl;
    return 0;
}