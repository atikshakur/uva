#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string str;

        getline(cin,str);

        double m=sqrt(str.length());
        int m1=sqrt(str.length());

        if(m==m1)
        {
            for(int i=0;i<m1;i++)
            {                                      //0 1 2 3 4 5 6 7 8 9
                for(int j=i;j<str.length();j=j+m1) //W E C G E W H Y A A IORTNU
                {
                    cout<<str[j];
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"INVALID"<<endl;
        }

    }

    return 0;
}


