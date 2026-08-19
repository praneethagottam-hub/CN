#include<stdio.h>
int main()
{
int window size,total frames,i;
int frames[50];
printf("enter window size:");
scanf("%d",window size);
printf("/n enter no.of frames to transmit:");
scanf("%d",&total frames);
printf("/n enter %d frames :" total frames);
for(i=1;i<total frames;i++)
{
scanf("%d",&frames[i]);
}
printf("/n sliding winding protocol stimulation/n");
printf("sender sends%d frame at a times waits for acknowledgement \n\n",window size);
for(i=1;i<=total frames ;i++)
{
printf("%d",frames[i]);
if(i % window sixe ==0)
{
printf("\n Acknowledgement of above is received by sender\n\n");
}
}
