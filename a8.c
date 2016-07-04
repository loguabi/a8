#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
int f[a][a],e[a][a];
for(int i=0;i<a;i++)
for(int j=0;j<a;j++)
scanf("%d",&f[i][j]);
for(int i=0;i<a;i++)
for(int j=0;j<a;j++)
e[i][j]=1;
for(int i=0;i<a;i++)
{
for(j=0;j<a;j++)
{
if(f[i][j]==0)
{
for(int k=0;k<a;k++)
e[i][k]=0;
for(int k=0;k<a;k++)
e[k][j]=0;
}
}
}
for(int i=0;i<a;i++)
{
for(int j=0;j<a;j++)
{
printf("%d",e[i][j]);
}
printf("\n");
}
return 0;
}
