/* #include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int info;
    struct node*next;
};
struct node *makenode(int n)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));

    t->info=n;
    printf("\n info:%u\t",t->info);
    t->next=NULL;
    printf("\nt->next:%u\t",t->next);
    printf("\n");
     printf("t:%u\t",t);
    return t;
};
void makelist (struct node *list)
{
    int i,n,num;
    printf("how many node:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
         printf("num address:%u\t",&num);
        list->next=makenode(num);
         printf("\nlist->next:%u\t",list->next);
        list=list->next;
        printf("\nlist:%u\t",list);
        printf("\n\n\n\n");
    }
}
void printlist(struct node *list)
{
    printf("\n list contains:\n");
    while (list->next!=NULL)
    {
        printf("%5d",list->next->info);
        list=list->next;
    }
}
void main()
{
    struct node *start;

    start=(struct node*)malloc(sizeof(struct node));
     printf("%u\t",&start);

    makelist(start);
    printlist(start);

    getch();
} */


/*#include<stdio.h>
main()
{
    int i,n,arr[1000];
    for(i=0;i<101;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<101;i+=2)
    {
        arr[i]=1;
    }
    printf("Enter a number :\n");
    scanf("%d",&n);
    if(arr[n]==1)
    {
        printf("%d is even number.\n",n);
    }
    else
    {
        printf("%d is odd number.",n);
    }
}*/


/// Linear Search in C
/*#include<stdio.h>
int main()
{
    int arr[20],i,n,element;
    printf("Enter the number of element in array:");
    scanf("%d",&n);
    printf("Enter %d elements of array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            printf("%d is found at %d position.",element,i+1);
            break;
        }
    }
    if(i==n)
    printf("%d isn't present at the array\n",element);
}*/


/// Binary Search in C
 /*#include <stdio.h>
int binarySearch(int array[], int x, int low, int high)
{
  // Repeat until the pointers low and high meet each other
  while (low <= high)
    {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}
int main(void) {
  int array[] = {1,9,18,27,36,45,54,63,72,81,90};
  int n = sizeof(array) / sizeof(array[0]);
  int x;
  printf("Enter number to search from array:");
  scanf("%d",&x);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
} */


/// Selection sort in C
/* #include <stdio.h>
// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selectionSort(int array[], int size)
 {
  for (int step = 0; step < size - 1; step++)
    {
    int min = step;
    for (int i = step + 1; i < size; i++)
    {
      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min])
        min = i;
    }
    // put min at the correct position
    swap(&array[step],&array[min]);
  }
}
// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
// driver code
int main() {
  int data[] = {34, 56, 9, 17, 3};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
} */


///Bubble sort in C
/* #include <stdio.h>
// perform the bubble sort
void bubbleSort(int array[], int size)
 {
  // loop to access each array element
  for (int step = 0; step < size - 1; ++step)
    {
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i)
    {
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1])
       {
        // swapping occurs if elements
        // are not in the intended order
        swap(&array[i],&array[i+1]);
      }
    }
  }
}
 void swap(int *a,int *b)
 {
     int temp = *a;
     *a=*b;
     *b=temp;
 }
// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
}

int main() {
  int data[]={4,-45,0,121,9};
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
} */

/// Insertion sort in C

/* #include <stdio.h>
// Driver code
int main()
{
  int data[]={81,25,1,16,9};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}

void insertionSort(int array[], int size)
 {
  for (int step = 1; step < size; step++)
  {
    int key = array[step];
    int j = step - 1;
    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0)
    {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Function to print an array
void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
} */



#include <stdio.h>

int main()
{
    char a[15];
    char b[15];
    char c[15];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'c')printf("aguia\n");
    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'o')printf("pomba\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'o')printf("homem\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'h')printf("vaca\n");
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'm')printf("pulga\n");
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'r')printf("lagarta\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'h')printf("sanguessuga\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'o')printf("minhoca\n");

    return 0;
}
































