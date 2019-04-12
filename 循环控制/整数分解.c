#include<stdio.h>
main(){
	int n,number;
	int mask=1;
	
	scanf("%d",&n);
	int i=n;
	while(i>9){
		i/=10;
		mask*=10;
	}
	while(mask>0){
		number=n/mask;
		printf("%d ",number);
		n=n%mask;
		mask/=10;
	}
	
}
