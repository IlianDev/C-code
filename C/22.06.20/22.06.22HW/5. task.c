#include<stdio.h>

void positiveNegativeZero(int arr[], int len)
{
	float positiveCount = 0;
	float negativeCount = 0;
	float zeroCount = 0;

	for (int i = 0; i < len; i++) {
		if (arr[i] > 0) {
			positiveCount++;
		}
		else if (arr[i] < 0) {
			negativeCount++;
		}
		else if (arr[i] == 0) {
			zeroCount++;
		}
	}

	printf(" positive count: %.2f, negative count: %.2f, zero count: %.2f\n", positiveCount, negativeCount, zeroCount);
    printf(" positive vatio %.2f, negative vatio %.2f, zero vatio %.2f\n", positiveCount/len, negativeCount/len, zeroCount/len);

}

int main()
{
	// Test Case 1:
	int a1[] = { 2, -1, 5, 6, 0, -3 };
	int len=sizeof(a1)/sizeof(a1[0]);
	positiveNegativeZero(a1,len);

    printf("-----------------------------------------\n");
	// Test Case 2:
	int a2[] = { 4, 0, -2, -9, -7, 1 };
	len=sizeof(a2)/sizeof(a2[0]);
	positiveNegativeZero(a2,len);
}


