#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <list>
using namespace std;
using std::array;
#include <array>

int main()
{

    double Q_ab, Q_ad, Q_bd, Q_bc, Q_cd;
    double R_ab, R_ad, R_bd, R_bc, R_cd;

    double RQ_L2;
    double RQ_L1;
    double RQQ_L1;
    double RQQ_L2;

    double dq1;
    double dq2;

    int n;

    cout << "enter the value of R_ab" << endl;
    cin >> R_ab;
    cout << "enter the value of R_ad" << endl;
    cin >> R_ad;
    cout << "enter the value of R_bd" << endl;
    cin >> R_bd;
    cout << "enter the value of R_bc" << endl;
    cin >> R_bc;
    cout << "enter the value of R_cd" << endl;
    cin >> R_cd;

    cout << "Enter tha Initialized value of Q_ab " << endl;
    cin >> Q_ab;
    cout << "Enter tha Initialized value of Q_ad " << endl;
    cin >> Q_ad;
    cout << "Enter tha Initialized value of Q_bd " << endl;
    cin >> Q_bd;
    cout << "Enter tha Initialized value of Q_bc " << endl;
    cin >> Q_bc;
    cout << "Enter tha Initialized value of Q_cd " << endl;
    cin >> Q_cd;

    cout << "Enter the number of iteration you want" << endl;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        RQ_L2 = 0;
        RQ_L1 = 0;
        RQQ_L1 = 0;
        RQQ_L2 = 0;

        if (Q_ab > 0)
        {
            RQQ_L1 += R_ab * Q_ab * Q_ab;
        }
        else
        {
            RQQ_L1 += R_ab * Q_ab * Q_ab * (-1);
        }
        RQ_L1 += R_ab * fabs(Q_ab);
        if (Q_bd > 0)
        {
            RQQ_L1 += R_bd * Q_bd * Q_bd;
        }
        else
        {
            RQQ_L1 += R_bd * Q_bd * Q_bd * (-1);
        }
        RQ_L1 += R_bd * fabs(Q_bd);

        if (Q_ad > 0)
        {
            RQQ_L1 += (-1) * R_ad * Q_ad * Q_ad;
        }
        else
        {
            RQQ_L1 += R_ad * Q_ad * Q_ad;
        }
        RQ_L1 += R_ad * fabs(Q_ad);
        if (Q_bc > 0)
        {
            RQQ_L2 += R_bc * Q_bc * Q_bc;
        }

        else
        {
            RQQ_L2 += R_bc * Q_bc * Q_bc * (-1);
        }

        RQ_L2 += R_bc * fabs(Q_bc);
        if (Q_cd > 0)
        {
            RQQ_L2 += (-1) * R_cd * Q_cd * Q_cd;
        }
        else
        {
            RQQ_L2 += R_cd * Q_cd * Q_cd;
        }
        RQ_L2 += R_cd * fabs(Q_cd);
        if (Q_bd > 0)
        {
            RQQ_L2 += (-1) * R_bd * Q_bd * Q_bd;
        }
        else
        {
            RQQ_L2 += R_bd * Q_bd * Q_bd;
        }

        RQ_L2 += R_bd * fabs(Q_bd);

        dq1 = (RQQ_L1) / (2 * RQ_L1);
        dq2 = (RQQ_L2) / (2 * RQ_L2);

        Q_ab = Q_ab - dq1;
        Q_ad = Q_ad + dq1;
        Q_bd = Q_bd - dq1 + dq2;
        Q_bc = Q_bc - dq2;
        Q_cd = Q_cd + dq2;
    }

    cout << "After the " << n << "  iteration the value of   "
         << "Q_ab: " << Q_ab << endl;
    cout << "After the " << n << "  iteration the value of  "
         << "Q_ad: " << Q_ad << endl;
    cout << "After the " << n << "  iteration the value of  "
         << "Q_bd: " << Q_bd << endl;
    cout << "After the " << n << "  iteration the value of  "
         << "Q_bc: " << Q_bc << endl;
    cout << "After the " << n << "  iteration the value of  "
         << "Q_cd: " << Q_cd << endl;
    cout << "😀😊😀";

    return 0;
}