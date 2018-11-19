#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct Point{
  int x,y,color;
};
typedef struct quadnode {
  struct Point* topLeft;
  struct Point* bottomRight;
  struct quadnode* parentnode;
  struct quadnode* NW;
  struct quadnode* NE;
  struct quadnode* SE;
  struct quadnode* SW;
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

void readarray(int width, int image_array[][width],int black){
  int x,y,scan;
  do{
    scan = scanf("%i %i",&x,&y);
    image_array[x][y] = 1;
    black = black -1;
  }while (black != 0);

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

int calculatecolor(int width, int image_array[][width], quadnode* node){
  int colorsum  = 0;
  int nodeN  = 0;
  int nodecolor;
  int x,y;
  printf("\n\n\nI am here\n\n\n");
  for (x = node->topLeft->x ; x <= node->bottomRight->x; x++){
    for (y = node ->topLeft->y;y <= node->bottomRight->y ; y++){
      colorsum = colorsum + image_array[x][y];
      nodeN = nodeN + 1;
    }
  }
  nodecolor = colorsum/nodeN;
  return nodecolor;

}
int buildtree(int width,int image_array[][width],quadnode* node,int level){
  int maxlevel = logof2(width);
  if (level == 0){
    return 1;
  }
  return 0;
}

void quadtree(int width,int image_array[][width],quadnode* node){
  printf("\n\n\nI am here\n\n\n");

  printf("\n\n\nI am here\n\n\n");


  calculatecolor(width,image_array,node);
  buildtree(width,image_array,node,0);

}

int main(){
  /*setting variables for working*/
  int width,B_num;
  scanf("%i",&width);
  scanf("%i",&B_num);
  quadnode* node;
  node->topLeft->x = 0;
  int image_array[width][width];
/*read and print data*/
  readarray(width, image_array,B_num);
  printarray(width,image_array);

/*compress data*/
  quadtree(width,image_array,node);
  return 0;
}
