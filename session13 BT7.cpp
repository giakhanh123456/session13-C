#include<stdio.h>

void matrix(int arr[][100], int m, int n);

int main(){
	int m, n;
	printf("nhap so hang: ");
	scanf("%d", &m);
	printf("nhap so cot: ");
	scanf("%d", &n);
	int arr[m][100];
	matrix(arr, m, n);
	printf("ma tran vua nhap: \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void matrix(int arr[][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

