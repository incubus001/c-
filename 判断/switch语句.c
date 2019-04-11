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
