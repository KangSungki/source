#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include <stdio.h>

int** matrix_make(int row, int col);

int** matrix_make(int row, int col) {

	int **arr = 0;
	int i = 0;
	int j = 0;

	arr = (int **)malloc(sizeof(int*) * row);
	if (arr == NULL) {
		printf("Heap is full");
		exit(-1);             // 프로세스 자체를 죽인다.
	}
	for (i = 0; i < row; i++) {

		arr[i] = (int *)malloc(sizeof(int) * col);
		if (arr == NULL) {
			printf("Heap is full");
			exit(-1);             // 프로세스 자체를 죽인다.
		}

	}


	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < row; i++)

	{

		for (j = 0; j < col; j++)

			printf("\t%d", arr[i][j]);

		printf("\n");

	}

	return arr;
}
