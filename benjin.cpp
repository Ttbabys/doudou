#include<stdio.h>
#include<math.h>
void tip()
{
    printf("�����������\n");
	printf("    ������㹫ʽ\n");
	printf("\tP=F*(1+i)N(�η�)\n");
    printf("\tF:��ֵ\n");
    printf("\tP:����\n");
    printf("\ti:����\n");
    printf("\tN:ʱ��\n");
}
main()
{
	int N,m;
    double i,F,P;
    tip();
	printf("��ֵ:");
    scanf("%lf",&F);
    printf("������:");
    scanf("%lf",&i);
    printf("��������:");
    scanf("%d",&N);
    printf("�긴������:");
    scanf("%d",&m);
    P=F/pow((1+i/m),N*m);  
    printf("����:%.4lf\n",P);
}