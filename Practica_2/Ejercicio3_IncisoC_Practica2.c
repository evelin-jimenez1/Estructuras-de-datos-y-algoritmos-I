#include<stdio.h>

void main() 
{
    int i;
    int arr1[4][5][2];
	int *point;
	point= &arr1[0];
   	int var = 1, var1=1, var2=1,var3=1; 

    for (i = 0; i <40; i++) 
	{
        if (i <= 9) 
		{ 
            *(point + i) = var* 3;
            printf("\t %d", *(point + i));
            var++;
        }
        else if ((i>9)&&(i <= 19))
		{ 
            *(point + i) = var1* 6;
            printf("\t %d", *(point + i));
            var1++;
        } 
        else if ((i>19)&&(i <= 29))
		{ 
            *(point + i) = var2* 7;
            printf("\t %d", *(point + i));
            var2++;
        } 
        else if ((i>29)&&(i <= 39))
		{ 
            *(point + i) = var3* 4;
            printf("\t %d ", *(point + i));
            var3++;
        } 
    }
}


