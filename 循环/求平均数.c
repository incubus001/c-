#include<stdio.h>
main(){
	float x,sum;

	int n=0;
	sum=0;
	printf("��������Ҫ��ƽ�����ļ�λ���������-1����ֹ��\n"); 
	scanf("%f",&x);
	while(x!=-1.0){
		sum+=x;
		n++;
		scanf("%f",&x);
	}
	printf("��%d������ƽ��ֵΪ%f",n,sum/n);
	
}
