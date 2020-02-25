//DECODER

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <dirent.h>
#include <sidekiq_api.h>


//Weird thing for running it in visual studio
#pragma warning(disable:6031) 
#pragma warning(disable:4996)
//Weird thing for running it in visual studio


int main()
{

  FILE *fp, *decoded;
  errno = 0;
  fp = fopen("output.txt", "r"); // adjust to actual name
  if (fp == NULL)
  {
	printf("Unable to open this file");
	return 0;
  }
  
  decoded = fopen("binary2.txt", "w");
  if (decoded == NULL)
	{
		printf("Unable to open this file");
		return 0;
	}

  //It appears all the data will be sent and recieved as one file. We need to figure out how we will distinguish one file from another after sending the package, as their binary will not have any separation.

while (!feof(fp)){
  int arr[8][8] = {};



  int digit, idc;
  idc = 0; 
  for (int j = 0; j < 8; j++)
  {
    for (int i = 0; i < 8; i++)
    {
      idc = fscanf(fp, "%1d", &digit);
      arr [j][i] = digit;
    }
  }



//PRIORITY


//----------------------------------------------------

  int maj = 0;
  int decodedarr[8] = {};


  for (int i = 0; i < 8; i++)
  {
    for (int k = 0; k < 8; k++)
    {
      if (arr[k][i] == 1)
      {
        maj++;
      }
    }
    if (maj > 3)
    {
      decodedarr[i] = 1;
    }
    else
    {
      decodedarr[i] = 0;
    }
    maj = 0;
  }

  for (int i = 0; i < 8; i++)
  {
    fprintf(decoded, "%1d", decodedarr[i]);
  }
  fprintf(decoded, "\n");
}
  
//----------------------------------------------------

  fclose(fp);
  fclose(decoded);


	return 0;



}

//DECODER
