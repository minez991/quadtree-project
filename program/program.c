#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct quadnode {
  int color;
  quadnode* parentnode
  quadnode* NW
  quadnode* SW
  quadnode* NE
  quadnode* SE

}quadnode;

void readarray(int width, int image_array[][width]){
  int x,y,scan;
  do{
    scan = scanf("%i %i",&x,&y);
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

void buildtree(int width,int image_array[][width],quadnode* node,int level){
  //base
  return 0
}
void quadtree(int width,image_array[][width],quadnode* node){
  maxlevel = log2(width);
  buildtree(width,image_array,img, maxlevel);

}

int main(){
    /*setting variables for working*/
  int width,B_num;
  scanf("%i",&width);
  scanf("%i",&B_num);
  quadnode img;
  int image_array[width][width];
/*read and print data*/
  readarray(width, image_array);
  printarray(width,image_array);
/*compress data*/
  quadtree(width,image_array,&img);
  return 0;
}
