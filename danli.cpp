#include<stdio.h>
#include<math.h>
void tip()
{
    printf("�����������\n");
    printf("    �������㹫ʽ\n");
    printf("\tI=P*i*N\n");
    printf("\tF:��ֵ\n");
    printf("\tP:����\n");
    printf("\ti:����\n");
    printf("\tN:ʱ��\n");
}
main()
{
	int N,m;
    double i,F=0.0,P;
    tip();
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&i);
    printf("��������:");
    scanf("%d",&N);
    F=P*i*N;
    printf("��ֵ:%.4lf\n",F);
}