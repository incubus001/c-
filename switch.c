#include<stdio.h>
main(){
	int type;
	scanf("%d",&type);
	switch(type){
	 case 1:
		  printf("���Ϻ�");
		  break;
	 case 2:
		  printf("�����");
		  break;
	 case 3:
	      printf("�����");
	      break;
	 case 4:
		  printf("�ټ�");
		  break;
	 default:
		  printf("����ʲô����");
		}
	return 0;
} 
//case ����ֻ���������͵ĳ��� 
//switch�����Կ�����һ�ֻ����������ת��������Ӧ��case��֧��Ȼ������Ĭ������ִ��ֱ��������һ��breakΪֹ 
//case��·�ƣ������赲�������У������ö��case��һ����ͬ������ 
