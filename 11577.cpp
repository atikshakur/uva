#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int i, j, k, n, t, a[30];
    char lf[205];
    while(scanf("%ld",&t)==1)
    {
        getchar();
        for(i=1;i<=t;i++)
        {
            memset(lf,'\0',sizeof(lf));
            gets(lf);
            memset(a,0,sizeof(a));
            for(j=0;lf[j]!='\0';j++)
            {
                switch(lf[j])
                {
                    case 'a':
                    case 'A':
                    {
                        a[1]++;
                        break;
                    }
                    case 'b':
                    case 'B':
                    {
                        a[2]++;
                        break;
                    }
                    case 'c':
                    case 'C':
                    {
                        a[3]++;
                        break;
                    }
                    case 'd':
                    case 'D':
                    {
                        a[4]++;
                        break;
                    }
                    case 'e':
                    case 'E':
                    {
                        a[5]++;
                        break;
                    }
                    case 'f':
                    case 'F':
                    {
                        a[6]++;
                        break;
                    }
                    case 'g':
                    case 'G':
                    {
                        a[7]++;
                        break;
                    }
                    case 'h':
                    case 'H':
                    {
                        a[8]++;
                        break;
                    }
                    case 'i':
                    case 'I':
                    {
                        a[9]++;
                        break;
                    }
                    case 'j':
                    case 'J':
                    {
                        a[10]++;
                        break;
                    }
                    case 'k':
                    case 'K':
                    {
                        a[11]++;
                        break;
                    }
                    case 'l':
                    case 'L':
                    {
                        a[12]++;
                        break;
                    }
                    case 'm':
                    case 'M':
                    {
                        a[13]++;
                        break;
                    }
                    case 'n':
                    case 'N':
                    {
                        a[14]++;
                        break;
                    }
                    case 'o':
                    case 'O':
                    {
                        a[15]++;
                        break;
                    }
                    case 'p':
                    case 'P':
                    {
                        a[16]++;
                        break;
                    }
                    case 'q':
                    case 'Q':
                    {
                        a[17]++;
                        break;
                    }
                    case 'r':
                    case 'R':
                    {
                        a[18]++;
                        break;
                    }
                    case 's':
                    case 'S':
                    {
                        a[19]++;
                        break;
                    }
                    case 't':
                    case 'T':
                    {
                        a[20]++;
                        break;
                    }
                    case 'u':
                    case 'U':
                    {
                        a[21]++;
                        break;
                    }
                    case 'v':
                    case 'V':
                    {
                        a[22]++;
                        break;
                    }
                    case 'w':
                    case 'W':
                    {
                        a[23]++;
                        break;
                    }
                    case 'x':
                    case 'X':
                    {
                        a[24]++;
                        break;
                    }
                    case 'y':
                    case 'Y':
                    {
                        a[25]++;
                        break;
                    }
                    case 'z':
                    case 'Z':
                    {
                        a[26]++;
                        break;
                    }
                    default:
                        continue;
                }
            }
           long int len=*max_element(a,a+28);
           for(j=1;j<=26;j++)
           {
               if(a[j]==len)
                printf("%c",j+96);
           }
            printf("\n");
        }
    }
    return 0;
}
