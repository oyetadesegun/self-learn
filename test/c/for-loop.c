#include <stdio.h>

int main(void)
{
	for(int i=0; i <= 10; i++){
		printf("Start of outer loop %d\n", i);
		for(int j = 0; j <= 7; j++) {
			printf("inner Loop %d\n", j);
		}
		printf("End of outer loop %d\n", i);
	}
	return 0;
}
