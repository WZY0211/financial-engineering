#include <iostream>
#include <string>

using namespace std;
int main(int argc, char** argv) {
	float Int[2][7];
	string coupon[7];
	coupon[0]="�@�Ӥ�w�s";
	coupon[1]="�T�Ӥ�w�s";
	coupon[2]="���Ӥ�w�s";
	coupon[3]="�E�Ӥ�w�s";
	coupon[4]="�@�~�w�s";
	coupon[5]="��~�w�s";
	coupon[6]="�T�~�w�s";
	for(int m=0;m<2;m++){
		if(m==0){
			printf("�T�w�Q�v\n");
		}
		else{
			printf("�B�ʧQ�v\n");
		}
		
		for(int i=0;i<7;i++){
			cout << coupon[i] << "=";
			scanf("%f",&Int[m][i]);
		}
	} 
	printf("�Q�t(�T�w�Q�v-�B�ʧQ�v)\n");
	for(int j=0;j<7;j++){
		cout << coupon[j];
		printf("=%f\n",Int[0][j]-Int[1][j]);
	}
	return 0;
}


