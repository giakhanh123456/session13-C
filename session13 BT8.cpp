#include<stdio.h>

int UCLN(int a, int b);

int main(){
	int a, b;
	printf("nhap so thu nhat: ");
	scanf("%d", &a);
	printf("nhap so thu hai: ");
	scanf("%d", &b);
	printf("uoc chung lon nhat cua %d va %d la: %d\n", a, b, UCLN(a,b));
	return 0;
}

int UCLN(int a, int b){
	if(b == 0){
		return a;
	}
	return UCLN(b,a%b);
}
