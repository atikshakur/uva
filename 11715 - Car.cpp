#include<stdio.h>
#include<math.h>
double u,v,t,s,a;
int tCase=0;
void sa(){
    scanf("%lf%lf%lf",&u,&v,&t);
    a=(v-u)/t;
    s=u*t+(a*t*t)/2;
    printf("Case %d: %.3lf %.3lf\n",tCase,s,a);
}
void st(){
    scanf("%lf%lf%lf",&u,&v,&a);
    t=(v-u)/a;
    s=u*t+(a*t*t)/2;
    printf("Case %d: %.3lf %.3lf\n",tCase,s,t);
}
void vt(){
    scanf("%lf%lf%lf",&u,&a,&s);
    v=sqrt((u*u)+(2*a*s));
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf\n",tCase,v,t);
}
void ut(){
    scanf("%lf%lf%lf",&v,&a,&s);
    u=sqrt((v*v)-(2*a*s));
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf\n",tCase,u,t);
}
int main(){
    long n;
    while((scanf("%ld",&n)&&n>0))
    {
        tCase++;
        switch(n){
            case 1:sa(); break;
            case 2:st(); break;
            case 3:vt(); break;
            case 4:ut(); break;
        }
    }
    return 0;
}
