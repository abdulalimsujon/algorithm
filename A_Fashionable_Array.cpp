#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        sort(array, array + n);
        int mx = array[n - 1];
        int mn = array[0];
        if (mx % 2 == mn % 2)
        {
            cout << 0 << endl;
        }
        else
        {
            int i = 0;
            int count1 = 0, count2 = 0;
            while (mx % 2 != array[i] % 2)
            {
                i++;
                count1++;
            }

            int j = n - 1;
            while (mn % 2 != array[j] % 2)
            {
                j--;
                count2++;
            }

            cout << min(count1, count2) << endl;
        }
    }
}
