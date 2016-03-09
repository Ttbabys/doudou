#include<stdio.h>
#include<math.h>
void tip()
{
    printf("复利计算软件\n");
    printf("    复利计算公式\n");
    printf("\tF=P*(1+i)N(次方)\n");
    printf("\tF:终值\n");
    printf("\tP:本金\n");
    printf("\ti:利率\n");
    printf("\tN：计息期数\n");
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
    printf("年复利次数:");
    scanf("%d",&m);
    F=P*pow((1+i/m),N*m);
    printf("终值:%.4lf\n",F);
}
