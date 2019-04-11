#include<stdio.h>
main(){
	int type;
	scanf("%d",&type);
	switch(type){
	 case 1:
		  printf("早上好");
		  break;
	 case 2:
		  printf("中午好");
		  break;
	 case 3:
	      printf("下午好");
	      break;
	 case 4:
		  printf("再见");
		  break;
	 default:
		  printf("啊，什么啊？");
		}
	return 0;
} 
//case 后面只能是整数型的常量 
//switch语句可以看作是一种基于运算的跳转，跳到相应的case分支，然后程序会默认往下执行直到遇到第一个break为止 
//case是路牌，不能阻挡程序运行，可以用多个case做一个相同的事情 
