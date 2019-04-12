#include<stdio.h>
main(){
	int n,i;
	int isprime=1; //x是素数 
	printf("请输入一个正整数：");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
		isprime=0;
        break;  //结束循环 
		}
	  }
	if(isprime==1){
		printf("%d是素数",n);
	}
	else {
       if(i==n)
		printf("%d不是素数",n);
	}
	 return 0;
}


// break : 打破循环直接跳出
// continue： 结束这一轮循环 ，不执行下面还未执行的语句，重新进入下一轮循环 
