#include <stdio.h>

int main(int argc, char** argv) {
	float ZeroRate[5];
	float C[5];
	printf("�п�J�Ů�:\n");
	for(int i=0;i<5;i=i+1){
		printf("��%d�����Ů�:",i+1);
		scanf("%f",&C[i]);
	} 
	printf("�п�J�s���Q�v:\n");
	for(int i=0;i<5;i=i+1){
		printf("��%d�����Q�v:",i+1);
		scanf("%f",&ZeroRate[i]);
		}
	float BondValue=0;
	for(int i=0;i<5;i=i+1){
		float Discount=1;
		for(int j=0;j<=i;j=j+1){
			Discount=Discount/(1+ZeroRate[i]);
		}
		BondValue=BondValue+C[i]*Discount;
		if(i==4){
			BondValue=BondValue+100*Discount;
		}
	}
	printf("�Ũ����=%f",BondValue);
	
	return 0; 
}


