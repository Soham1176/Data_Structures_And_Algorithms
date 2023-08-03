// C program to illustrate _builtin_popcount(x)
// This function is used to count the number of one’s(set bits) in an integer.
// #include <stdio.h>
// int main()
// {
// 	int n = 5;

// 	printf("Count of 1s in binary of %d is %d ", n,
// 		__builtin_popcount(n));
// 	return 0;
// }


// C program to illustrate _builtin_parity(x)
// This function is used to check the parity of a number. This function returns true(1) if the number has odd parity else it returns false(0) for even parity.
// #include <stdio.h>
// int main()
// {
// 	int n = 7;
	
// 	printf("Parity of %d is %d ",
// 		n, __builtin_parity(n));
// 	return 0;
// }


// C program to illustrate __builtin_clz(x)
// This function is used to count the leading zeros of the integer. Note : clz = count leading zero’s. 
// Example: It counts number of zeros before the first occurrence of one(set bit).
// #include <stdio.h>
// int main()
// {
// 	int n = 16;
	
// 	printf("Count of leading zeros before 1 in %d is %d",
// 		n, __builtin_clz(n));
// 	return 0;
// }


// This function is used to count the trailing zeros of the given integer. Note : ctz = count trailing zeros. 
// Example: Count no of zeros from last to first occurrence of one(set bit)
// C program to illustrate __builtin_ctz(x)
// #include <stdio.h>
// int main()
// {
// 	int n = 16;
	
// 	printf("Count of zeros from last to first "
// 		"occurrence of one is %d",
// 		__builtin_ctz(n));
// 	return 0;
// }



