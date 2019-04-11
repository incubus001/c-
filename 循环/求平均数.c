#include<stdio.h>
main(){
	float x,sum;

	int n=0;
	sum=0;
	printf("请输入你要求平均数的几位数并最后用-1来中止它\n"); 
	scanf("%f",&x);
	while(x!=-1.0){
		sum+=x;
		n++;
		scanf("%f",&x);
	}
	printf("这%d个数的平均值为%f",n,sum/n);
	
}
