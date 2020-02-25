//ENCODER

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <dirent.h>
//#include <sidekiq_api.h>


//Weird thing for running it in visual studio
#pragma warning(disable:6031) 
#pragma warning(disable:4996)
//Weird thing for running it in visual studio


int main()
{
  FILE *initialD, *encodedD;


  //Open data file allow reading only
  initialD = fopen("initialData.txt", "r");
  //In case of errors opening file:
  if (initialD == NULL)
  {
    printf("Can't open the file theres an error");
    return 0;
  }

  //Open encoded output file to allow writing to it
  encodedD = fopen("encodedData", "w");
  //In case of errors opening file:
  if (encodedD == NULL)
  {
    printf("Can't open this file either");
    return 0;
  }




  int arrNums, k, length, remainder;

  arrNums = 0;

  fseek(initialD, 0, SEEK_END);

  printf("%ld", ftell(initialD), length);
  length++; //length now holds how many binary values there are in the whole file. Next step is we find out if there are any remainders or if the whole length divides neatly by 8.
  if (length % 8 > 0)
  {
    arrNums = (length / 8) + 1;
  }
  else
  {
    arrNums = (length / 8);
  }

  int arr[arrNums][8];
  
  int j = 0;
  for (int i = 0; i < arrNums; i++)
  {
    while (!feof(initialD) && j < 8)
    {
      fscanf(initialD, "%d", arr[i][j]);
      j++;
    }
    j = 0;

  }

  
  for (int i = 0; i < arrNums; i++)
  {
    //print uneven data once, then use fseek to move the file pointer to length - (8 - unevenNum), then copy and paste that num 8 times
  }




  fclose(initialD);
  fclose(encodedD);

}


//ENCODER