///week03-1.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout <<"�п�J�|�ӼƦr";
    vector<int>a;///���Y�ۦp���}�C
    int n;
    for(int i=0;i<4;i++){
        cin >> n;
        a.push_back(n);
    }
    for(int i=0;i<a.size();i++){
        cout <<a[i]<<' ';
    }
    cout<<"�{�b�{���X�̡A�S���J�F99 88��ӼƦr�A���G�O\n";
    ///cin << n;
    a.push_back(99);
    a.push_back(88);
    for(int i=0;i<a.size();i++){
        cout <<a[i]<<' ';
    }

}
