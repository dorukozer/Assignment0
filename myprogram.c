#include "mylibrary.h"
int sum_of_1_to_n(int n)
{
int sum=0;
for(int i = 0 ;i<=n; i++){
  sum+=i;
}
	//TODO: sum all numbers from 1 to n
	return sum;
}

int sum_of_even_numbers(int *array, int count)
{
int sum = 0;
for (int i=0;i<count;++i)	{
    if(array[i]%2==0){
    
		//TODO: only add even numbers, e.g., 4. Skip odd numbers, e.g., 3
		sum += array[i];
	}
  }
	return sum;
}

int max_of_numbers(int *array, int count){
	int rem=0;
 for (int i=0;i<count;++i){
    if(array[i]>array[rem]){
rem=i;

    
		//TODO: only add even numbers, e.g., 4. Skip odd numbers, e.g., 3
    }
	}

	//TODO: return the maximum number from the array
	return array[rem];
}

int reversed_number(int number)
{
int reversed=0;
int toAdd;
while(number!=0){
toAdd=number%10;
number=number/10;
reversed=reversed*10+toAdd;
}

	//TODO: if input is 12345, return 54321

	return reversed;
}

int is_prime(int number)
{
  int starter= 2;
  if(number==2 ){
   return 1;
  }else if (number == 1 ){
   return 0;
  }else{
 
while(number%starter!=0){
starter++;
}
}if(starter!=number){
  return 0;
} else{ 

	//TODO: return 1 if the input number is prime, otherwise 0
	return 1;
}
}

int count_primes(int start, int end)
{
  int count=0;
	//TODO: return the count of prime numbers in range [start, end] inclusive.
  for(int i = start; i<=end;i++) {
if(is_prime(i) ){
  count++;
}
}
	return count;
}


char alphabet_index(int index)
{
if(0<=index<=25){
	char*a ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//TODO: for index 0, return A. index 1, B, etc. until 25 for Z.
	//if index is out of range, return space ' '.
	return  a[index];}
  else{
		return ' ';
  }
}

