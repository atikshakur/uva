#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases,cases;
    long a,b,c;

    scanf("%d",&testcases);
    if(testcases>0 && testcases<20)
    {
        for(cases=1; cases<=testcases; cases++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            if(a+b>c && b+c>a && c+a>b)
            {
                if(a==b && b==c)
                {
                    printf("Case %d: Equilateral\n",cases);
                }
                else if(a==b||b==c||a==c)
                {
                    printf("Case %d: Isosceles\n",cases);
                }
                else if(a!=b||b!=c||c!=a)
                {
                    printf("Case %d: Scalene\n",cases);
                }
            }
            else
            {
                printf("Case %d: Invalid\n",cases);
            }
        }

    }
    return 0;
}
