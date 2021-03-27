#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void display();
void game(int);
int check(int x);

int a[9]={0};
int b[2]={0};
int q=1;

int main()
{
	int k=1,o,n=1,y;
	while(k==1)
	{
		system("cls");
		display();
		game(n);
		system("cls");
		display();
		if(n%2==0)
			y='O';
		else
			y='X';		
		o=check(y);
		y= (n%2==0)?1:2;
		if(o==1)
		{
			if(y=='O')
				y=2;
			else
				y=1;
			printf("Game Completed!,Winner is Player %d....\nPress 1 to Play again",y);
			y-=1;
			b[y]++;
			scanf("%d",&k);
			for(o=0;o<9;o++)
				a[o]=0;
		}
		n++;
	}
}

void display()
{
	int i,o=1;
	for(i=0;i<240;i++)
		printf("#");
	printf("\n");
	for(i=0;i<50;i++)
		printf(" ");
	printf("   TIC - Tac - TOE  \n");
	for(i=0;i<240;i++)
		printf("#");
	printf("\n");
	printf("SCORE:\n Player 1 - %d\n Player 2 - %d\n",b[0],b[1]);
	for(i=0;i<120;i++)
		printf("*");
	for(i=0;i<50;i++)
		printf(" ");
//	printf("GAME\n\t\t\t\t\t\t |");
	printf("\n\t\t\t\t\t\t ");
					printf(" __________ ");
					printf("\n\t\t\t\t\t\t |");
	for(i=0;i<9;i++)
		{
			if(a[i] != 'X' && a[i] != 'O')
				printf("%d | ",i+1);
			//else if(a[i]=='X' || a[i] == 'O')
			else
			{
					printf("%c |",a[i]);
		}
			if(o % 3 ==0)
			{
					printf("\n\t\t\t\t\t\t ");
					printf(" __________");
					printf("\n\t\t\t\t\t\t |");
			}
			o++;
		}
		printf("\b\b  \n");	
}

void game(int n)
{
	int i,k,p;
siddhu:
	p=(n%2==0)?'O':'X';
	printf("\n\t\tPLEASE INPUT BLOCK NUMBER...!:\t");
	scanf("%d",&k);
	if(k>=1 && k<=9)
	{
		if(k==1 && a[0] == 0)
			a[0]=p;
		else if(k==2 && a[1] == 0)
			a[1]=p;
		else if(k==3 && a[2] == 0)
			a[2]=p;
		else if(k==4 && a[3] == 0)
			a[3]=p;
		else if(k==5 && a[4] == 0)
			a[4]=p;
		else if(k==6 && a[5] == 0)
			a[5]=p;
		else if(k==7 && a[6] == 0)
			a[6]=p;
		else if(k==8 && a[7] == 0)
			a[7]=p;
		else if(k==9 && a[8] == 0)
			a[8]=p;
		else 
			{
				printf("Check ur Input\n");
				goto siddhu;
			}
			
	}
	else
	{
		printf("\nCheck your value..");
		goto siddhu;
	}
	
	
	
	

	
	
	
}
int check(int x)
{
	if((a[0]==x&&a[1]==x&&a[2]==x)||(a[3]==x&&a[4]==x&&a[5]==x)||(a[6]==x&&a[7]==x&&a[8]==x)||(a[0]==x&&a[3]==x&&a[6]==x)||(a[1]==x&&a[4]==x&&a[7]==x)||(a[2]==x&&a[5]==x&&a[8]==x)||(a[0]==x&&a[4]==x&&a[8]==x)||(a[2]==x&&a[4]==x&&a[6]==x))
		return 1;
	else
		return 0;

	
	
	
	
}

