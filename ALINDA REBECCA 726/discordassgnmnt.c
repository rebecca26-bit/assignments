//Pseudocode for a code for finding the maximum element in an array
//function findMax(array, size):
//  max = array[0]   Assuming the first element is the maximum

//  for i = 1 to size - 1:
//   if array[i] > max:
//      max = array[i]  // Update the maximum if a larger element is found

//  return max
#include <stdio.h>
int largest (int array[],int size)
{
    int largest=array[0]; //Assuming the first element is the largest
    for(int a=1;a<size; a++)
    {
        if(array[a]>largest)
        {
            largest=array[a];
        }
    }
    return largest;
}
int main()
{
    int b;//b is the size of the array
    printf("Enter the size of the array:\n");
    scanf("%d", &b);
    int lineup[b];
    printf("Enter %d elements:\n", b);
    for(int numbers=0; numbers<b;numbers++)
    {
        scanf("%d", &lineup[numbers]);
    }
    int biggest=largest(lineup,b);
    printf("largest is:%d\n",biggest);
    return 0;
}