#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int selectmenu();
void fuli();
void danli();
void benjin();
void time();
void lilv();
void invest();
void exit();
void main()  //������
{
	int choice;
	choice=selectmenu();
	while(1)
	{
		switch(choice)
		{
		case 1:
			fuli();
			break;
		case 2:
			danli();
			break;
		case 3:
			benjin();
			break;
		case 4:
			time();
			break;
		case 5:
			lilv();
			break;
		case 6:
			invest();
			break;
		case 7:
			exit(0);
			break;
		}
	choice=selectmenu();
	}
}
int selectmenu()  //�˵�
{
	int choice;
    printf("         ��ӭʹ�ø����������\n");
	printf("          \n");
    printf("���ܲ˵�\n");      
	printf("     1.���㸴����ֵ\n");
    printf("     2.���㵥����ֵ\n");
	printf("     3.���㱾��\n");
	printf("     4.����ʱ��\n");
	printf("     5.��������\n");
	printf("     6.�����ֵ(��|��)\n");
	printf("     7.�˳�\n");
	printf("         \n");
	printf("please enter your choise(1--7):");  
	while( (!(scanf("%d",&choice)))|| (choice<1)||(choice>7)) 
	{ 
		printf("\n  ѡ�����������ѡ��:\n");  		
		printf("                       \n"); 	
        printf("���ܲ˵�\n");      
	    printf("     1.���㸴����ֵ\n");
        printf("     2.���㵥����ֵ\n");
	    printf("     3.���㱾��\n");
	    printf("     4.����ʱ��\n");
	    printf("     5.��������\n");
		printf("     6.�����ֵ(��|��)\n");
	    printf("     7.�˳�\n");
		printf("                       \n"); 	
		printf("please enter your choise(1--7):");  			
	}	
	return choice;
}
void tip()   //���㹫ʽ
{
    printf("    �������㹫ʽ\n");
    printf("\tF=P*(1+i)N(�η�)\n");
	printf("    �������㹫ʽ\n");
    printf("\tI=P*i*N\n");
	printf("    ������㹫ʽ\n");
    printf("\tP=F*(1+i)N(�η�)\n");
	printf("    ʱ����㹫ʽ\n");
    printf("\tN=(int)(log(F/P)/log(1+i/m)/m)\n");
	printf("    ���ʼ��㹫ʽ\n");
    printf("\ti=m*(pow(F/P,1.0/(N*m))-1)\n");

    printf("\tF:��ֵ\n");
    printf("\tP:����\n");
    printf("\ti:����\n");
    printf("\tN����Ϣ����\n");
}
void fuli()   //����
{
	int N,m;
    double i,F,P;
    tip();
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&i);
    printf("��������:");
    scanf("%d",&N);
    printf("�긴������:");
    scanf("%d",&m);
    F=P*pow((1+i/m),N*m);
    printf("��ֵ:%.4lf\n",F);
}
void danli()   //����
{
	int N;
    double i,F,P;
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
void benjin()   //����
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
void time()   //ʱ��
{
	int N,m;
    double i,F,P;
    tip();
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&i);
    printf("�긴������:");
    scanf("%d",&m);
	printf("��ֵ:");
	scanf("%lf",&F);
    N=(int)(log(F/P)/log(1+i/m)/m);
    printf("ʱ��:%d\n",N);
}
void lilv()   //����
{
	int N,m;
    double i,F,P;
    tip();
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("��������:");
    scanf("%d",&N);
    printf("�긴������:");
    scanf("%d",&m);
	printf("��ֵ:");
	scanf("%lf",&F);
    i=m*(pow(F/P,1.0/(N*m))-1);
    printf("����:%.4lf\n",i);
}
void invest()//���������ֵ
{
	int N,n;
    double i,F,P;
    printf("���뱾��:");
    scanf("%lf",&P);
	printf("��������:");
	scanf("%d",&N);
    printf("������:");
    scanf("%lf",&i);
    printf("1:����Ͷ��\n2:����Ͷ��\n");
A:printf("��ѡ����Ҫ�Ĺ���<1|2>:");
    scanf("%d",&n);
    if(n==1)
    {
		F=P*(pow(1+i,N)-1)/i;    
	}
    else if(n==2)
    {
		F=N*12*(P*(i/12)+P);
    }
	else
    {
		printf("��������!����������\n");
        goto A;
    }
	printf("%d�����ܲ�ֵ:%.4lf\n",N,F);
}
void exit()
{
	printf("       ��л��ʹ�ø����������!\n");
	exit(0);
}

