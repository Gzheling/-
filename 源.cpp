#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int T;//T为数组个数
	scanf_s("%d", &T);
	int C[1000];
	int i = 0, count = T;
	while (count--) {
		scanf_s("%d", &C[i]);
		i++;
	}//输入数组
	//printf("%d\n", C[0]);
	//printf("%d\n", C[3]);
	int sum,max=C[0];
	int j,k;
	//printf("%d\n%d\n", sum, max);
	for (j = 0; j < T; j++) {
		sum = 0;
		for (k = j; k < T; k++) {
			sum += C[k];
			//printf("%d\n", sum);
			if (sum > max) max = sum;
		}
	}
	printf("%d\n", max);

	system("pause");
	return 0;

}