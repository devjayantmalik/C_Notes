#include<stdio.h>

int main(){

	// Primitive or Fundamental Data types
	printf("Size of integer is %lu bytes\n",sizeof(int));
	printf("Size of float is %lu bytes\n",sizeof(float));
	printf("Size of double is %lu bytes\n",sizeof(double));
	printf("Size of long double is %lu bytes\n",sizeof(long double));
	printf("Size of long is %lu bytes\n",sizeof(long));

	//Derieved Datatypes.
	int nums[5] = {1}; // index 0 = 1 and rest are zero.
	int size_nums = sizeof(nums);
	int count_nums = sizeof(nums) / sizeof(nums[0]);
	printf("Array has %d elements and size of %d bytes\n",count_nums,size_nums);
	int null_array[0];
	printf("Null array has size of %lu bytes\n",sizeof(null_array));
	return 0;
}
