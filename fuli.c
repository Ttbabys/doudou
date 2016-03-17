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
void main()  //主函数
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
int selectmenu()  //菜单
{
	int choice;
    printf("         欢迎使用复利计算软件\n");
	printf("          \n");
    printf("功能菜单\n");      
	printf("     1.计算复利终值\n");
    printf("     2.计算单利终值\n");
	printf("     3.计算本金\n");
	printf("     4.计算时间\n");
	printf("     5.计算利率\n");
	printf("     6.年金终值(年|月)\n");
	printf("     7.退出\n");
	printf("         \n");
	printf("please enter your choise(1--7):");  
	while( (!(scanf("%d",&choice)))|| (choice<1)||(choice>7)) 
	{ 
		printf("\n  选择错误，请重新选择:\n");  		
		printf("                       \n"); 	
        printf("功能菜单\n");      
	    printf("     1.计算复利终值\n");
        printf("     2.计算单利终值\n");
	    printf("     3.计算本金\n");
	    printf("     4.计算时间\n");
	    printf("     5.计算利率\n");
		printf("     6.年金终值(年|月)\n");
	    printf("     7.退出\n");
		printf("                       \n"); 	
		printf("please enter your choise(1--7):");  			
	}	
	return choice;
}
void tip()   //计算公式
{
    printf("    复利计算公式\n");
    printf("\tF=P*(1+i)N(次方)\n");
	printf("    单利计算公式\n");
    printf("\tI=P*i*N\n");
	printf("    本金计算公式\n");
    printf("\tP=F*(1+i)N(次方)\n");
	printf("    时间计算公式\n");
    printf("\tN=(int)(log(F/P)/log(1+i/m)/m)\n");
	printf("    利率计算公式\n");
    printf("\ti=m*(pow(F/P,1.0/(N*m))-1)\n");

    printf("\tF:终值\n");
    printf("\tP:本金\n");
    printf("\ti:利率\n");
    printf("\tN：计息期数\n");
}
void fuli()   //复利
{
	int N,m;
    double i,F,P;
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
void danli()   //单利
{
	int N;
    double i,F,P;
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
void benjin()   //本金
{
	int N,m;
	double i,F,P;
	tip();
	printf("终值:");
	scanf("%lf",&F);
	printf("年利率:");
	scanf("%lf",&i);
	printf("存入年限:");
	scanf("%d",&N);
	printf("年复利次数:");
	scanf("%d",&m);
	P=F/pow((1+i/m),N*m); 
	printf("本金:%.4lf\n",P);
}
void time()   //时间
{
	int N,m;
    double i,F,P;
    tip();
    printf("存入本金:");
    scanf("%lf",&P);
    printf("年利率:");
    scanf("%lf",&i);
    printf("年复利次数:");
    scanf("%d",&m);
	printf("终值:");
	scanf("%lf",&F);
    N=(int)(log(F/P)/log(1+i/m)/m);
    printf("时间:%d\n",N);
}
void lilv()   //利率
{
	int N,m;
    double i,F,P;
    tip();
    printf("存入本金:");
    scanf("%lf",&P);
    printf("存入年限:");
    scanf("%d",&N);
    printf("年复利次数:");
    scanf("%d",&m);
	printf("终值:");
	scanf("%lf",&F);
    i=m*(pow(F/P,1.0/(N*m))-1);
    printf("利率:%.4lf\n",i);
}
void invest()//计算年金终值
{
	int N,n;
    double i,F,P;
    printf("存入本金:");
    scanf("%lf",&P);
	printf("存入年限:");
	scanf("%d",&N);
    printf("年利率:");
    scanf("%lf",&i);
    printf("1:按年投资\n2:按月投资\n");
A:printf("请选择你要的功能<1|2>:");
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
		printf("输入有误!请重新输入\n");
        goto A;
    }
	printf("%d年后的总产值:%.4lf\n",N,F);
}
void exit()
{
	printf("       感谢您使用复利计算软件!\n");
	exit(0);
}

