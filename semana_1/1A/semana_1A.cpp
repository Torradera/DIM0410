#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in;
    in.open("in.dat", ios::in);

    for(int i = 1; i <= 3; i++)
    {
        int n;
        in >> n;
        cout << n;
    }

    system("pause");
    return 0;
}