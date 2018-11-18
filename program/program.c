#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct quadnode {
  int color;
  struct quadnode* parentnode;
  struct quadnode* NW;
  struct quadnode* SW;
  struct quadnode* NE;
  struct quadnode* SE;
}quadnode;

int logof2(int width){
  int n = 0;
  do{
    if (width != 1){
      n = n+1;
      width = width / 2;
    }
  }while(width != 1);
  return n;
}
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

int buildtree(int width,int image_array[][width],quadnode* node,int level){
  //base
  return 0;
}
void quadtree(int width,int image_array[][width],quadnode* node){
  int maxlevel = logof2(width);
  buildtree(width,image_array,node, maxlevel);

}

int main(){
  /*setting variables for working*/
  printf("%i",n);
  int width,B_num;
  scanf("%i",&width);
  scanf("%i",&B_num);
  quadnode node;
  int image_array[width][width];
/*read and print data*/
  readarray(width, image_array);
  printarray(width,image_array);
/*compress data*/
  quadtree(width,image_array,&node);
  return 0;
}
