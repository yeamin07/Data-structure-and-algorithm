///Node information.
#include <stdio.h>
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
}

/// Linear Search in C
#include<stdio.h>
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
}


/// Binary Search in C
 #include <stdio.h>
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
}


/// Selection sort in C
 #include <stdio.h>
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
}


///Bubble sort in C
#include <stdio.h>
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
}

/// Insertion sort in C

 #include <stdio.h>
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
}



/// Perform some stack operation (push, pop, print) using array

 #include<stdio.h>
 int stack[100],choice,n,top,x,i;
 int main()
 {
     top = -1;
     printf("Enter the STACK size (maximum 100):");
     scanf("%d",&n);
     printf("\nEnter what operation you want to perform :");
     printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT\n");
     do{
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nEXIT POINT !");
                break;
            }
            default:
                {
                    printf("\n\tPlease Enter the choice 1/2/3/4\n");
                }
        }
     }
     while(choice!=4);
        return 0;
 }

 void push()
 {
     if(top>=n-1)
     {
         printf("\tSTACK is Full!");
     }
     else{
        printf("Enter the value you want to push on the STACK: ");
        scanf("%d",&x);

        top++;
        stack[top] = x;
     }
 }
 void pop()
 {
    if(top<=-1)
    {
        printf("STACK is Empty!");
    }
    else{
        printf("\nThe popped element is %d",stack[top]);
        top--;
    }
 }
 void display()
 {
    if(top>=0)
    {
        printf("\nThe elements in STACK are :");
        for(i=top;i>=0;i--)
        {
            printf("\n\t%d",stack[i]);
        }
    }
    else
        printf("\nThe STACK is Empty!");
 }

/// Perform circular queue operation (enqueue, dequeue, display) using array
 #include<stdio.h>
int QUEUE[100],max;
int front = -1;
int rear = -1;
void enqueue(int item)
{
    if((front == 0 && rear == max-1) || (front == rear+1))
    {
        printf("Queue is FULL! \n");
        return;
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if(rear == max-1)
            rear = 0;
        else
            rear = rear+1;
    }
    QUEUE[rear] = item ;
}
void dequeue()
{
    if(front == -1)
    {
        printf("Queue is EMPTY! \n");
        return ;
    }
    printf("Dequeued element is : %d\n",QUEUE[front]);
    if(front == rear)
    {
        front = -1;
        rear=-1;
    }
    else
    {
        if(front == max-1)
            front = 0;
        else
            front = front+1;
    }
}
void display()
{
    int front_pos = front,rear_pos = rear;
    if(front == -1)
    {
        printf("Queue is EMPTY!\n");
        return;
    }
    printf("Queue elements :\n");
    if( front_pos <= rear_pos )
        while(front_pos <= rear_pos)
        {
            printf("%d ",QUEUE[front_pos]);
            front_pos++;
        }
    else
    {
        while(front_pos <= max-1)
        {
            printf("%d ",QUEUE[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {
            printf("%d ",QUEUE[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}
int main()
{
    int choice,item;
    jump: printf("\nEnter the Queue Size(maximum 100):");
    scanf("%d",&max);
    if(max>100)
    {
        printf("Array Index out of Bound!Please Re-enter!");
        goto jump;
    }
    printf("Choose the operation you want to be performed : \n");
    printf("\t1.Enqueue\n\t2.Dequeue\n\t3.Display\n\t4.Quit");
    do
    {
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
            printf("Enqueue the element : ");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2 :
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            {
                printf("EXIT POINT!");
                   break;
            }
        default:
            printf("Choose a valid option between 1/2/3/4 \n");
        }
    }
    while(choice!=4);
    return 0;
}

/// Fibonacci Series using recursion.
#include<stdio.h>
void Fibonacci(int num)
{
    static int num1=0,num2=1,num3;
    if(num>0)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        printf("%d ",num3);
        Fibonacci(num-1);
    }
}
int main()
{
    int num;
    printf("Enter the number of elements to show: ");
    scanf("%d",&num);
    printf("\nFibonacci Series: ");
    printf("%d %d ",0,1);
    Fibonacci(num-2);
    printf("\n");
    return 0;
}

/// Calculate power using recursion
 #include <stdio.h>
int main()
{
    double base, power;
    int exponent;
    jump: printf("\nEnter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    power = pow(base, exponent);
    printf("%.2lf ^ %d = %.2lf\n", base, exponent, power);
    goto jump;
}
double pow(double base, double exponent)
{
    if(exponent == 0)
        return 1;
    else if(exponent > 0)
        return base * pow(base, exponent - 1);
    else
        return 1 / pow(base, -exponent);
}


/// Calculate permutation using recursion
#include <stdio.h>
#include <string.h>
int count=0;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permutation(char s[], int l, int r)
{
    if (l == r)
    {
        puts(s);
        count++;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(&s[l], &s[i]);
            permutation(s, l+1, r);
            swap(&s[l], &s[i]);
        }
    }
}
int main()
{
    char str[100];
    printf("Enter Expression: ");
    gets(str);
    int n = strlen(str);
    permutation(str, 0, n-1);
    printf("\nTotal Permutation:%d\n",count);
    return 0;
}

/// Calculate combination using recursion
#include <stdio.h>
int NCR (int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
        return NCR (n - 1, r - 1) + NCR (n - 1, r);
}
int main ()
{
    int n,r;
    printf("Enter a number n: ");
    scanf("%d",&n);
    printf("Enter a number r: ");
    scanf("%d",&r);
    printf("\nValue of %dC%d = %d\n",n,r, NCR (n, r));
}






























