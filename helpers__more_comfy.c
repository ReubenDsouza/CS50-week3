/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include<stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (n<=0)
    {
        return false;
    }
    int a=0;
    n=n-1;
    int mid =(a+n)/2;
    while(n-a>=0)
    {

        mid =(a+n)/2;
        printf("%i %i %i :",a,mid,n);

        if (values[mid]>value)
        {

            n=mid-1;
        }

        else if (values[mid]<value)
        {
            a=mid+1;

        }
        else if (values[mid]==value)
        {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    //couting sort
    int array[65536]={0};//initialize the array with all 0
    for (int i=0;i<n;i++)
    {
        array[values[i]]++;//add 1 to the position of array[values(i)] for each values[i]
    }

    //its already sorted at line 60,the below is to just arrange it clearly in a new array

    int final_array[n];//initialize a new final array
    int m=0;
    for (int u=0;u<65536;u++)
    {
        while(array[u]>0)//if array[u] has non-zero value add that to the new array
        {
            final_array[m]=u;
            array[u]--;
            m++;
        }
    }

}
