///week04-1.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;///�W�g�йL���Y�ۦp���}�C�S����l�Ƥj�p
    cout << "a�����׬O" << a.size() << endl;
    a.push_back(99);
    cout <<"a��������" << a.size() << endl;

    vector<int> b(3);
    b.push_back(99);
    cout << "b�����׬O" << b.size() << endl;
    for(int i=0; i<b.size(); i++) cout << b[i] << ' ' ;
    cout <<"�g�L .push_back(99) �� b�ܪ��F" << endl;

    vector<int> c(3, 88);
    for(int i=0; i<c.size(); i++) cout << c[i] << ' ';///88 88 88
    cout<< "��l�� (3,88)�N�O3��88 " << endl;

}
