#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    int m, n;

    do 
    {

        cin >> m >> n;
        string str_line;

        for (int i = 0; i < m; i++)
        {
            getline(cin, str_line);
            vector<char> ch_line(str_line.begin(), str_line.end());
            for (const char &c: ch_line)
                cout << c;
        }
    } while (m != n); 
    return 0;
}