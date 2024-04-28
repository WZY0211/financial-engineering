#include <iostream>
#include <string>

using namespace std;
int main(int argc, char** argv) {
	float Int[2][7];
	string coupon[7];
	coupon[0]="一個月定存";
	coupon[1]="三個月定存";
	coupon[2]="六個月定存";
	coupon[3]="九個月定存";
	coupon[4]="一年定存";
	coupon[5]="兩年定存";
	coupon[6]="三年定存";
	for(int m=0;m<2;m++){
		if(m==0){
			printf("固定利率\n");
		}
		else{
			printf("浮動利率\n");
		}
		
		for(int i=0;i<7;i++){
			cout << coupon[i] << "=";
			scanf("%f",&Int[m][i]);
		}
	} 
	printf("利差(固定利率-浮動利率)\n");
	for(int j=0;j<7;j++){
		cout << coupon[j];
		printf("=%f\n",Int[0][j]-Int[1][j]);
	}
	return 0;
}


