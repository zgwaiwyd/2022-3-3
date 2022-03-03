#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#define M 3
#define N 20
void fun(char a[M][N], char* b)
{

}
void main()
{
	char w[M][N] = { "AAAA","BBBBBBB","CC" };
	char a[100] = { "#####################" };
	int i;
	printf("The string:\n");
	for (i = 0; i < M; i++)
		puts(w[i]);
	printf("\n");
	fun(w, a);
	printf("The string:\n");
	printf("%s", a);
	printf("\n\n");
}
