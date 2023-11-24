//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them.
//
//Your version of the program must print the same result as the expected output.
//
//Before you use the compiler, try to find the errors only by manual code analysis.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//Code
//#include <stdio.h>
//
//int main()
//{
//	int zeros[10] = { 0 };
//	int ones[] = { 1, };
//	int superOnes[5] = { 1 };
//	int fiboSequence[6] = { 1, 1, 2, 3, 5, 8, 13 };
//	int i;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d ", zeros[i]);
//	}
//	puts("");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p ", ones[x]);
//	}
//	puts("");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%e ", superOnes[]);
//	}
//	puts("");
//	for (i = 0; i < 6; i++)
//	{
//		printf("%q ", fiboSequence[i]);
//	}
//	puts("");
//
//	return 0;
//}
//
//Expected output
//0 0 0 0 0 0 0 0 0 0
//1 1
//1 1 1 1 1
//1 1 2 3 5 8
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	int zeros[10] = { 0 };
	int ones[2] = { 1,1 };
	int superOnes[5] = { 1,1,1,1,1 };
	int fiboSequence[6] = { 1,1,2,3,5,8 };

	for (int i = 0; i < 10; i++) printf("%d ", zeros[i]);
	printf("\n");
	for (int i = 0; i < 2; i++) printf("%d ", ones[i]);
	printf("\n");
	for (int i = 0; i < 5; i++) printf("%d ", superOnes[i]);
	printf("\n"); 
	for (int i = 0; i < 6; i++) printf("%d ", fiboSequence[i]);
}