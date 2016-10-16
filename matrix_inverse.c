#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include <stdio.h>

void matrix_inverse(int **arr, int row1, int col1);

void matrix_inverse(int **arr1, int row1, int col1) {
	int row = 0;
	int col = 0;
	double **arr = 0;
	int i = 0;
	int j = 0;
	double matrix_line = 0;

	if (row1 == col1) {

		if (row1 == 2) {

			row = 2;
			col = 2;

			arr = (double **)malloc(sizeof(double*) * row);
			if (arr == NULL) {
				printf("Heap is full");
				exit(-1);             // 프로세스 자체를 죽인다.
			}
			for (i = 0; i < row; i++) {

				arr[i] = (double *)malloc(sizeof(double) * col);
				if (arr == NULL) {
					printf("Heap is full");
					exit(-1);             // 프로세스 자체를 죽인다.
				}

			}
			

			matrix_line = (((double)arr1[0][0] * (double)arr1[1][1]) - ((double)arr1[0][1] * (double)arr1[1][0]));
			if (matrix_line == 0) {
				printf("행렬식이 0 입니다.");
			}
			else {
				arr[0][0] = arr1[1][1] / matrix_line;
				arr[0][1] = -arr1[0][1] / matrix_line;
				arr[1][0] = -arr1[1][0] / matrix_line;
				arr[1][1] = arr1[0][0] / matrix_line;

				for (i = 0; i < row; i++) {
					for (j = 0; j < col; j++) {
						printf("\t%d", arr[i][j]);
					}
					printf("\n");
				}
			}
		}
		else {
			printf("2by2행렬로 해주세요.\n");
		}
	}
	else {
		printf("역행렬의 조건에 맞지 않습니다.\n");
	}


}