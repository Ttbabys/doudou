#include<stdio.h>
#include<math.h>
void tip()
{
    printf("复利计算软件\n");
    printf("    单利计算公式\n");
    printf("\tI=P*i*N\n");
    printf("\tF:终值\n");
    printf("\tP:本金\n");
    printf("\ti:利率\n");
    printf("\tN:时间\n");
}
main()
{
	int N,m;
    double i,F=0.0,P;
    tip();
    printf("存入本金:");
    scanf("%lf",&P);
    printf("年利率:");
    scanf("%lf",&i);
    printf("存入年限:");
    scanf("%d",&N);
    F=P*i*N;
    printf("终值:%.4lf\n",F);
}