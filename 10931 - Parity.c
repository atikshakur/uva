#include<stdio.h>

int main()
{

    int num, index = 0, parity;
    int binary[1000];

    while(scanf("%d", &num) == 1){
        if(num != 0){
            while(num > 0){
                binary[index++] = num % 2;
                num = num / 2;

                for(int i = 0; i <= index; i++){
                    if(binary[i] == 1)
                        parity++;

                }
                printf("The parity of %d is %d (mode 2).\n", num, parity);
            }
        }
    }







    return 0;
}


