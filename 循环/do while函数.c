/*do{
     <ѭ�����>
	}while(<ѭ������>)�� 
 ���������Ƿ����㣬����Ҫ����һ�Σ�Ȼ�������ж������Ƿ�ѭ�� */
 #include<stdio.h>
 main(){
 	int x;
 	scanf("%d",&x);
 	int n=0;
 	do{
 		x/=10;
 		n++;
 		
	 }while(x>0);
	 printf("�������%dλ��",n);
 } 

