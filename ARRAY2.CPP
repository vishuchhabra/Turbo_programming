#include<stdio.h>     \\sum of two array\matrics in c language
#include<conio.h>
void main()
{
int i,j,k,A[3][3],B[3][3],C[3][3];
clrscr();
printf("enter the value of arrayA\n");
for(i=0;i<3;i++)

for(j=0;j<3;j++)

scanf("%d",&A[i][j]);

printf("enter the value of arrayB\n");
for(i=0;i<3;i++)

for(j=0;j<3;j++)

scanf("%d",&B[i][j]);
printf("sum of two array is following as\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++)  {
C[i][j]=A[i][j]+B[i][j];
printf("%d\t",C[i][j]);

	       }    printf("\n");}
getch();
}