///week05-3b.cpp �T�X�@ part1/part2
///CPE
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;///part 1:Input
    while(getline(cin, line)){///Ū�J1��
        stringstream ss(line);///part3
        string word;
        ss >>word;///part5
        reverse( word.begin(), word.end() );
        cout << word;///port5
    while( ss >> word ){///part3
        reverse( word.begin(), word.end() );
        cout << " " <<word;
    }
        ///port 2:Output
        cout << endl;///���H�K�L�X��
    }
}

