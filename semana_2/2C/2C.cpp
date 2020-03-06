#include <iostream>
#include <cstdio>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int k, l = 1, hh_1, hh_2, h_aux = 0, h_diff = 0, h_star = 0, mm_1, mm_2, m_aux = 0, m_diff = 0, m_star = 0, diff = 0, bigg = 0;
    char appoint[255], ck;

    while (k != '\n')
    {
        // ck = cin.peek();
        // if (ck == 10)
        //     return 0;
        // ck = 9;
        cin >> k;

        if (k > 100 || k < 1 || cin.fail())
        {
            return 0;
        }
        for (int i = 0; i <= k; i++)
        {
            if (i != k)
            {
                scanf("%d:%d %d:%d %255[^\n]", &hh_1, &mm_1, &hh_2, &mm_2, appoint);

                if (hh_1 < 10 || hh_2 < 10 || hh_1 > 18 || hh_2 > 18 || mm_1 < 0 || mm_1 >= 60 || mm_2 < 0 || mm_2 >= 60)
                {
                    break;
                }
            }

            if (i == k)
            {
                hh_1 = 18;
                mm_1 = 0;
            }

            if (i > 0)
            {
                if (hh_1 == h_aux)
                {
                    h_diff = 0;
                    m_diff = mm_1 - m_aux;
                }
                else if (hh_1 > h_aux && mm_1 == m_aux)
                {
                    h_diff = hh_1 - h_aux;
                    m_diff = 0;
                }
                else if (hh_1 == (h_aux + 1) && mm_1 != m_aux)
                {
                    h_diff = 0;
                    m_diff = 60 - m_aux + mm_1;
                }
                else if ((hh_1 + 1) > h_aux && mm_1 != m_aux)
                {
                    h_diff = hh_1 - h_aux;
                    m_diff = 60 - m_aux + mm_1;
                }
            }
            diff = h_diff*60 + m_diff;

            if (diff > bigg)
            {
                bigg = diff;
                h_star = h_aux;
                m_star = m_aux;
            }
            h_aux = hh_2;
            m_aux = mm_2;

        }

        if(bigg < 60)
            cout << "Day #" << l << ": the longest nap starts at " << h_star << ":" << setw(2) << setfill('0') << m_star << " and will last for " << bigg << " minutes." << endl;
        else
            cout << "Day #" << l << ": the longest nap starts at " << h_star << ":" << setw(2) << setfill('0') << m_star << " and will last for " << (bigg/60) << " hours and " << (bigg%60) << " minutes." << endl;
        l++;
        h_diff = 0;
        m_diff = 0;
        bigg = 0;
    }
    return 0;
}