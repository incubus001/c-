/*do{
     <循环语句>
	}while(<循环条件>)； 
 无论条件是否满足，都需要进行一次，然后再来判断条件是否循环 */
 #include<stdio.h>
 main(){
 	int x;
 	scanf("%d",&x);
 	int n=0;
 	do{
 		x/=10;
 		n++;
 		
	 }while(x>0);
	 printf("这个数是%d位数",n);
 } 

