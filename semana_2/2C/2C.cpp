#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int k, l = 1, hh_1, hh_2, h_aux, h_diff = 0, h_star, mm_1, mm_2, m_aux, m_diff = 0, m_star, diff = 0, bigg = 0;
    char appoint[225];

    while (true)
    {
        cin >> k;
        cout << k;

        if (k > 100)
            break;

        for (int i = 0; i < k; i++)
        {
            fflush(stdin);
            scanf("%d:%d %d:%d %s", &hh_1, &mm_1, &hh_2, &mm_2, &appoint);
            cout << hh_1 << endl << mm_1 << endl << hh_2 << endl << mm_2 << endl;

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
                else if ((hh_1 + 1) == h_aux && mm_1 != m_aux)
                {
                    h_diff = 0;
                    m_diff = 60 - h_aux + hh_1;
                }
                else if ((hh_1 + 1) > h_aux && mm_1 != m_aux)
                {
                    h_diff = hh_1 - h_aux;
                    m_diff = 60 - h_aux + hh_1;
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
        }

        if(bigg < 60)
            cout << "Day #" << l << ": the longest nap starts at " << h_star << ":" << m_star << "and will last for " << bigg << " minutes." << endl;
        else
            cout << "Day #" << l << ": the longest nap starts at " << h_star << ":" << m_star << "and will last for " << (bigg/60) << " hours and " << (bigg%60) << " minutes." << endl;
        l++;
    }
    return 0;
}