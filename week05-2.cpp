///week05-2
#include <iostream>///���Fcin cout
#include <string>///���F�r�� string
#include <sstream>///�s��string��stream���~��
using namespace std;///���F���g std::cin
int main()
{
    string line;///�ǳƩ�@��檺�r��
    getline(cin, line );///�@��Ū�J�@���
    cout << line << endl;///�L�X�ӡA�[����

    stringstream ss(line);///�s����string�ܦ�stream
    string word;
    while( ss >> word ){
        cout << "ssŪ��@�Ӧr: " << word <<endl;
}


}
