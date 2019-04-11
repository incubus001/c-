#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	srand(time(0));
	int magic=rand()%100;   //rand():rand函数可以让计算机生成一个随机数 
	int i;
	int n=0;
	do{
		n++;
		printf("请输入你猜的数：");
		scanf("%d",&i);
		
		if(i>magic)
		printf("你猜的数大了！\n");
		else if(i<magic)
		printf("你猜的数小了！\n");
		 
		
	}while(i!=magic);
	printf("恭喜你猜对了,你一共猜了%d次",n);
	return 0; 
	
	
	
} 
