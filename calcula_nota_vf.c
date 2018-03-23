/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    float notave[10],mve,s,vc,vf;
    s=0;
    printf("Entre com o numero de VE's\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Qual a nota na VE %d?\n",i+1);
        scanf("%f",&notave[i]);
    }
    printf("Entre com a sua nota de VC\n");
    scanf("%f",&vc);
    for(i=0;i<n;i++){
        s=s+notave[i];
    }
    mve=s/n;
    vf=(20-mve-vc)/2;
    if(vf<=4.0){
        printf("nota necessaria na vf = 4.0");
    }
    else{
        printf("nota necessaria na vf=%.2f",vf);
    }
    return 0;
}
