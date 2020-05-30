/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <performs statistical analytics on a dataset>
 *
 * <this program Analyzes statistics for finding its maximum,minimum,
     mean,median value in the statistics also sort it from largest
      to minimum  >
 *
 * @author <shimaa mahmoud>
 * @date <30 may 2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
print_statistics(test,SIZE);
printf("\n sorted array=");
print_array(test,SIZE);


}

/* Add other Implementation File Code Here */

void print_array(unsigned char* a ,unsigned int n)
{
   
      int i;
 for(i=0;i<n;i++)
{
 printf("%d,",a[i]);
}

}
/**************************************************************************/
unsigned char find_maximum(unsigned char* a ,unsigned int n)
{
     unsigned char max=a[0];
   int i;
   for(i=1;i<n;i++)
    {
      if(max<a[i])
       {
         max=a[i];
        }
      }
 return max;
}
/**************************************************************************/
unsigned char find_minimum(unsigned char* a ,unsigned int n)
{
	unsigned char min=a[0];
   int i;
   for(i=1;i<n;i++)
    {
      if(min>a[i])
       {
         min=a[i];
        }
      }
 return min;
}
/**************************************************************************/
 float find_mean(unsigned char* a , unsigned int n)
{
	 int sum=a[0];
    float mean=0;
   int i;
   for(i=1;i<n;i++)
    {
      sum=sum+a[i];
     }

   mean=(float)sum/(float)(n);
 return mean;

}
/***************************************************************************/
void sort_array(unsigned char* a , unsigned int n)
{
    int i,j;
  for(i=0;i<n-1;i++)
   {
      for(j=0;j<(n-1)-i;j++)
       {
         if(a[j]<a[j+1])
          {
              a[j]=a[j]+a[j+1];
              a[j+1]=a[j]-a[j+1];
              a[j]=a[j]-a[j+1];
           }
        }
     }

 }
/**************************************************************************/
float find_median(unsigned char* a , unsigned int n)
{
	sort_array(a,n);
  float median=0.0;
 if(n%2!=0)
 {
   median=a[n/2];
  }
 else{
      median= ((float)(a[n/2]+a[((n/2)-1)]))/2 ;
      }
      return median;

}
/************************************************************************/
void print_statistics(unsigned char* a , unsigned int n)
{
  printf("\nmaximum value=%d\n",find_maximum(a,n));
  printf("minimum value=%d\n",find_minimum(a,n));
  printf("mean=%0.2f\n",find_mean(a,n));
  printf("median=%0.2f\n",find_median(a,n));
}
/**************************************************************************/


