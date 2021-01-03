#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long arr[n];
        for (long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int n1;
        cin >> n1;
        long arr1[n1];
        int count, c = 0;
        for (long i = 0; i < n1; i++)
        {
            cin >> arr1[i];
        }
        int a=0,b=0,temp=n1;
        while (temp>0||a>=n)
        {
            if(arr[a]==arr1[b])
                {
                    ++a;
                    ++b;
                    temp--;
                }
                else{
                    a++;
                }
        }
        
        if (b == n1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}