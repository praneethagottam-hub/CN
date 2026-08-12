#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,k;
char data[100],stuffed[200];
printf("Enter the number of frames: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter Frame %d: ",i);
scanf("%s",data);
j=0;
stuffed[j++]='$';
for(k=0;data[k]!='\0';k++)
{
if(data[k]=='$'||data[k]=='#'||data[k]=='@')
stuffed[j++]='@';
stuffed[j++]=data[k];
}
stuffed[j++]='#';
stuffed[j]='\0';
printf("Stuffed Frame %d: %s\n",i,stuffed);
} 
return 0;
}
