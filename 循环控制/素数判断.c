#include<stdio.h>
main(){
	int n,i;
	int isprime=1; //x������ 
	printf("������һ����������");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
		isprime=0;
        break;  //����ѭ�� 
		}
	  }
	if(isprime==1){
		printf("%d������",n);
	}
	else {
       if(i==n)
		printf("%d��������",n);
	}
	 return 0;
}


// break : ����ѭ��ֱ������
// continue�� ������һ��ѭ�� ����ִ�����滹δִ�е���䣬���½�����һ��ѭ�� 
