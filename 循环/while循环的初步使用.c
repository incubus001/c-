#include<stdio.h>
main(){
	int x;
	int n=0;
	scanf("%d",&x);
	while(x>0){
	  x/=10;
	  n++;
	  }   
	  printf("这个数是%d位数",n);
	return 0;
} 
 
