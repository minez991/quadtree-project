#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void readarray(int width, int image_array[][width],FILE* fp){
  int x,y,scan;
  do{
    scan = fscanf(fp,"%i %i",&x,&y);
    image_array[x][y] = 1;
  }while (scan != EOF);

  for (x = 0;x < width; x++){
    for (y = 0; y < width;y++){
      if(image_array[x][y] != 1){
        image_array[x][y] = 0;
      }
    }
  }
}

void printarray(int width, int image_array[][width]){
  for (int y = 0;y < width; y++)
  {
    for (int x = 0; x < width;x++){
      if(image_array[x][y] == 1){
        //printf("Black at (%i,%i)\n",x,y);
        printf("#|");
      }else{
        printf(" |");
      }
    }
    printf("\n-----------------\n");
  }
}


int main(int argc, char *argv[]){
  /*setting variables for working*/
  int width,B_num;
  FILE* fp;
  fp = fopen("./input/input.txt","r");
  if (fp== NULL ){
    fprintf(stderr,"unable to read the file\n");
    exit(-1);
  }
  fscanf(fp,"%i",&width);
  fscanf(fp,"%i",&B_num);
  //quadnode img;
  int image_array[width][width];
/*read and print data*/
  readarray(width, image_array,fp);
  printarray(width,image_array);
/*compress data*/

  return 0;
}