#include<stdio.h>
#include<pthread.h>

//Global Variables:
//Data should be shared across threads
int a[50];
int n;
int i;
// function to find the average of numbers
// operation performed by t1
void *av()
{
	int sum=0;
	float average;
	printf("How many numbers: ");
	scanf("%d",&n);
    printf("Enter the numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
	average=sum/n;
	printf("The average is: %f",average);
}
// function to find the minimum of numbers
// operation performed by t2
void *min()
{


	int temp=arr[0];
	for(int i=1;i<n;i++)
		{
			if(temp>a[i])
			{
			temp=a[i];
			}
		}
	printf("\n The Minimum  value is: %d",temp);

}
// function to find the maximum of numbers
// operation performed by t3
void *max()
{

	int temp=a[0];
	for(int i=1;i<n;i++)
		{
			if(temp<a[i])
			{
			temp=a[i];
			}
		}
	printf("\nThe Maximum  value is: %d",temp);
	}
int main()
{
int id;
// pthread_t is a datatype for threads
pthread_t t1;
pthread_t t2;
pthread_t t3;
//pthread_create creates a thread
// id = 0, if thread is successfully created
//id = -1, if thread is not created
    //pthread_create(thread, thread attributes(default, if NULL), start routine, arguement to the start routine(no arg, if NULL)
	id=pthread_create(&t1,NULL,&av,NULL);
	id=pthread_create(&t2,NULL,&min,NULL);
	id=pthread_create(&t3,NULL,&max,NULL);
//pthread_join() waits for a thread to terminate, detaches the thread, then returns the threads exit status(not returned, if NULL)
    //pthread_join(thread, exit status of the thread)
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);
}
