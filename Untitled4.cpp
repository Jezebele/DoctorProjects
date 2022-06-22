#include<stdio.h>
#include<stdlib.h>

int main(){

int i;
int common =1;

for(i=1;i<6;i++){
	
	common=i*common;
}
	printf("%d",common);
	return 0 ;
}
