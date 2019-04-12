#include<stdio.h>
main(){
	int n,i;
	int sum=1;   //sum记录乘积时一般初始化为1，记录求和时一般初始化为0 
	printf("请输入一个正整数：");
	scanf("%d",&n);
	for(i=2;i<=n;i++){  //i=1 循环的初始条件 i<=n 循环的继续条件 i++ 每一次循环需要做的事情 
	sum*=i;}
	printf("这个数的阶乘为%d",sum);
} 
