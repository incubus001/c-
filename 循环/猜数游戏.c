#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	srand(time(0));
	int magic=rand()%100;   //rand():rand���������ü��������һ������� 
	int i;
	int n=0;
	do{
		n++;
		printf("��������µ�����");
		scanf("%d",&i);
		
		if(i>magic)
		printf("��µ������ˣ�\n");
		else if(i<magic)
		printf("��µ���С�ˣ�\n");
		 
		
	}while(i!=magic);
	printf("��ϲ��¶���,��һ������%d��",n);
	return 0; 
	
	
	
} 
