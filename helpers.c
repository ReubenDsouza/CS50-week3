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
    while(n>a)
    {

        int mid = (a+n-1)/2;


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
    int swap_counter=-1;
    while(swap_counter!=0)
    {
        swap_counter=0;
        for (int i=0;i<n-2;i++)
        {

            if(values[i]>values[i+1])
            {
                int x=values[i];
                values[i]=values[i+1];
                values[i+1]=x;
                swap_counter++;
            }

        }

    }

    return;
}

