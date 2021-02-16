#include<stdio.h>
#define SIZE 100
int main()
 {
	int A[100][100];
	int B[100][100];
	static int ans[100][100];
	int rA=1,cA=1,rB=1,cB=1;
	int ch; 
	int i,j,k;
	int flag=0;
	int res=0;
	printf("----------Welcome!!----------");
	printf("\nTry your Favourite Operation on Matrices: \n1.Addition\n2.Substraction\n3.Multiplication\n4.Transpose\nYour Choice : ");
 	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			do{
				if((rA!=rB)||(cA!=cB)||rA<=0 || rB <=0 ||cA <=0 || cB <=0)
				{
					printf("\nInvalid Input !!\nEnter Correct Dimensions :\n\n");
				}
				printf("Number of Rows in 1st Matrix : ");
				scanf("%d",&rA);
				printf("Number of Columns in 1st Matrix : ");
				scanf("%d",&cA);
				printf("Number of Rows in 2nd Matrix : ");
				scanf("%d",&rB);
				printf("Number of Columns in 2nd Matrix : ");
				scanf("%d",&cB);
			}while((rA!=rB)||(cA!=cB)||rA<=0 || rB <=0 ||cA <=0 || cB <=0);
			printf("Enter 1st Matrix : \n");
			for(i=0;i<rA;i++)
			{
				for(j=0;j<cA;j++)
				{
					scanf("%d",&A[i][j]);
				}
			}
			printf("Enter 2nd Matrix : \n");
			for(i=0;i<rB;i++)
			{
				for(j=0;j<cB;j++)
				{
					scanf("%d",&B[i][j]);
				}
			}
			printf("Your Answer : \n");
			for(i=0;i<rA;i++)
			{
				for(j=0;j<cA;j++)
				{
					printf("%d\t",A[i][j]+B[i][j]);
				}
				printf("\n");
			}
			break;
		case 2:
			do{
				if((rA!=rB)||(cA!=cB)||rA<=0 || rB <=0 ||cA <=0 || cB <=0)
				{
					printf("\nInvalid Input !!\nEnter Correct Dimensions :\n\n");
				}
				printf("Number of Rows in 1st Matrix : ");
				scanf("%d",&rA);
				printf("Number of Columns in 1st Matrix : ");
				scanf("%d",&cA);
				printf("Number of Rows in 2nd Matrix : ");
				scanf("%d",&rB);
				printf("Number of Columns in 2nd Matrix : ");
				scanf("%d",&cB);
			}while((rA!=rB)||(cA!=cB)||rA<=0 || rB <=0 ||cA <=0 || cB <=0);
			printf("Enter 1st Matrix : \n");
			for(i=0;i<rA;i++)
			{
				for(j=0;j<cA;j++)
				{
					scanf("%d",&A[i][j]);
				}
			}
			printf("Enter 2nd Matrix : \n");
			for(i=0;i<rB;i++)
			{
				for(j=0;j<cB;j++)
				{
					scanf("%d",&B[i][j]);
				}
			}
			printf("Your Answer : \n");
			for(i=0;i<rA;i++)
			{
				for(j=0;j<cA;j++)
				{
					printf("%d\t",A[i][j]-B[i][j]);
				}
				printf("\n");
			}
			break;
		case 3:
			do{
				if((cA!=rB)|| rA<=0 || rB <=0 ||cA <=0 || cB <=0)
				{
					printf("\nInvalid Input !!\nEnter Correct Dimensions :\n\n");
				}
				printf("Number of Rows in 1st Matrix : ");
				scanf("%d",&rA);
				printf("Number of Columns in 1st Matrix : ");
				scanf("%d",&cA);
				printf("Number of Rows in 2nd Matrix : ");
				scanf("%d",&rB);
				printf("Number of Columns in 2nd Matrix : ");
				scanf("%d",&cB);
			}while((cA!=rB)|| rA<=0 || rB <=0 ||cA <=0 || cB <=0);
			printf("Enter 1st Matrix : \n");
			for(i=0;i<rA;i++)
			{
				for(j=0;j<cA;j++)
				{
					scanf("%d",&A[i][j]);
				}
			}
			printf("Enter 2nd Matrix : \n");
			for(i=0;i<rB;i++)
			{
				for(j=0;j<cB;j++)
				{
					scanf("%d",&B[i][j]);
				}
			}
			for(i=0;i<rA;i++)
			{
				for(j=0;j<cB;j++)
				{
					for(k=0;k<rB;k++)
					{
						ans[i][j]=ans[i][j]+(A[i][k]*B[k][j]);
					}
				}
			}
			printf("Your Answer : \n");
			for(i=0;i<rA;i++)
			{
				for(j=0;j<cB;j++)
				{
					printf("%d\t",ans[i][j]);
				}
				printf("\n");
			}
			break;
		case 4:
			do{
				if(rA<=0 || cA <=0)
				{
					printf("\nInvalid Input !!\nEnter Correct Dimensions :\n\n");
				}
				printf("Number of Rows in Matrix : ");
				scanf("%d",&rA);
				printf("Number of Columns in Matrix : ");
				scanf("%d",&cA);
			}while(rA<=0 || cA <=0);
			printf("Enter Matrix : \n");
			for(i=0;i<rA;i++)
			{
				for(j=0;j<cA;j++)
				{
					scanf("%d",&A[i][j]);
				}
			}
			printf("Your Answer : \n");
			for(i=0;i<cA;i++)
			{
				for(j=0;j<rA;j++)
				{
					printf("%d\t",A[j][i]);
				}
				printf("\n");
			}
			break;
	}
	return 0;
 }

