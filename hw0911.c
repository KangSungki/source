#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include <stdio.h>


//#include "hw0911.h"

void matrix();

void matrix() {
	int a= 0;
	int b= 0;
	int cal = 0;

	int row = 0;
	int col = 0;
	int **arr = 0;

	int row2 = 0;
	int col2 = 0;
	int **arr2 = 0;

	int row3 = 0;
	int col3 = 0;
	double **arr3 = 0;

	int i, j = 0;
	// ù��° ���
	
	
	printf("row : ");
	scanf("%d", &row);
	printf("col : ");
	scanf("%d", &col);
	
	printf("row2 : ");
	scanf("%d", &row2);
	printf("col2 : ");
	scanf("%d", &col2);

	arr = matrix_make(row, col);
	
	arr2 = matrix_make(row2, col2);

	printf("��Ģ������ ���Ͽ� �� ���꿡 ���� ��ȣ�� �Է��ϼ���. >> \n");
	printf("[���ϱ�] : 0, [����] : 1, [���ϱ�] : 2, [�����] : 3 >> ");
	scanf("%d", &cal);
	
	if (cal == 0) {
		matrix_add(arr, arr2, row, col, row2, col2);
	}
	else if (cal == 1) {
		matrix_su	btract(arr, arr2, row, col, row2, col2);
	}
	else if (cal == 2) {
		matrix_multiply(arr, arr2, row, col, row2, col2);
	}
	else if (cal == 3) {
		matrix_inverse(arr, row, col);
	}
	else {
		printf("��ȣ�� Ʋ�Ƚ��ϴ�.");
	}




	for (i = 0; i < row; i++) {
		free(arr[i]);
	}
	free(arr);

	for (i = 0; i < row2; i++) {
		free(arr2[i]);
	}
	free(arr2);

	for (i = 0; i < row3; i++) {
		free(arr3[i]);
	}
	free(arr3);

}