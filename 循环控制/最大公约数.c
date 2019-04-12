#include<stdio.h>
main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i;
	if(a<b)
		i=a;
	else
		i=b;
	for(;i>=1;i--){
		if(a%i==0&&b%i==0){
		printf("最大公约数是%d\n",i);
		break;
	}
	}
	return 0;
} 
