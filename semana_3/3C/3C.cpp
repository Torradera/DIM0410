#include <iostream>
#include <cmath>

using namespace std;

const int MAX = 100000;

bool tprime_check(int x)
{
    int cont = 2;
    if (x == 1 || x == 2)
        return false;
    else if (fmod(x,sqrt(x)) == 0)
    {
        for (int i = 2; i < x; i++)
        {
            if (x%i == 0)
                cont++;
        }
        if (cont == 3)
            return true;
    }
    return false;
}

int main()
{
    bool t[MAX];
    int n, ts[MAX];

    cin >> n;

    if (n < 1 || n > MAX)
        return 0;
    
    for (int i = 0; i < n; i++) //Input
    {
        cin >> ts[i];
        if (ts[i] < 1 || ts[i] > 1000000000000)
            return 0;
    }

    for (int i = 0; i < n; i++) //T-prime check
    {
        t[i] = tprime_check(ts[i]); 
    }
    for (int i = 0; i < n; i++) //Output
    {
        if (t[i] == false)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}