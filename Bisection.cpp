#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float C, X, Discount;
	float Low=0, High=1;
	float f_r;
	int N;
	printf("Please input the coupon $C for each period:");
	scanf("%f",&C);
	printf("Please input the market price $X of the bond:");
	scanf("%f",&X);
	printf("please input the number of bond period N:");
	scanf("%d",&N);
	 
	while(High-Low >= 0.0001){
	     float Middle = (Low+High)/2;
	 	 float BondPV = 0;
		 for(int i=1; i<=N; i++){
			Discount = 1;
			for(int j=1; j<=i; j++){
		   		Discount = Discount/(1+Middle);     
		   	}  
			BondPV = BondPV + Discount*C;
			if(i == N){
		    	BondPV = BondPV + Discount*100;
	        }  
		}
		f_r = BondPV - X;
		if(f_r>0) {
		  	Low = Middle;}
		else{
		   High = Middle;
		}
	}
 printf("IRR_Bisection=%8.4f",High);
 return 0;
}



