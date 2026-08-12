#include<stdio.h>
int main(){
	int data[100],div[20],temp[100];
	int datalen=0,divlen=0,i,j;
	char ch;
	printf("enter the data (binary)");
	while((ch=getchar())!='\n'){
	if((ch=='1'||ch=='0'))
	{
	data[datalen++]=ch-'0';
		}
	}
	printf("Enter the divisor(generator polynomial):");
	while((ch=getchar())!='\n'){
	if(ch=='1'||ch=='0'){
		div[divlen++]=ch-0;
		}
	}
	for(i=0;i<datalen;i++){
	temp[i]=data[i];
	}
	int totallen=datalen+divlen-1;
	for(i=0;i<divlen-1;i++){
	temp[datalen +i]=0;
	}
	for(i=0;i<=totallen-divlen;i++){
	if(temp[i]==1){
	for(j=0;j<divlen;j++){
	temp[i+j]=temp[i+j]^div[j];
	}
	}
	}
	for(i=0;i<datalen;i++){
		if(temp[i]==1){
			for(j=0;j<divlen;j++){
			temp[i+j]=temp[i+j]^div[j];
			}
		}
	}
	for(i=0;i<datalen;i++){
		printf("%d",data[i]);
		}
	for(i=datalen;i<totallen;i++){
	printf("%d",data[i]);
	}
	printf("\n");
	return 0;
	}
	
