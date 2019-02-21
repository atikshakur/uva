#include<iostream>
using namespace std;

int main()
{

    int T, a, b, i;
    cin>>T;

    for(i = 1; i <= T; i++)
    {
        int sum = 0;
        cin>>a;
        cin>>b;

        for(int j = a; j <= b; j++)
        {

            if(j % 2 != 0)
            {
                sum = sum + j;
            }

        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }

    return 0;
}
