#include <stdio.h>
#include <stdlib.h>



void ss(){
  switch(c){
    case '_': return '=';
  }
  if(){
    print("·");
    print("·");
  }

  else{
    int x=9;
  }



}
char inverter(char c){
  switch( c ){
    case '_': return '=';
    case '=': return '_';
    case '.': return '@';
    case '@': return '.';
    default : return c;
  }
}
int cols(char** arr){
  int j = 0;
  while(arr[0][j]){
    j++;
  }
  return j;
}
int fils(char** arr){
  int j = 0;
  while(arr[j]){
    j++;
  }
  return j;
}
char** reverse(char** pchars){
  printf("Voy a invertir tu codigo %d\n", cols(pchars));
  int size = 59;
  int col =  cols(pchars) + 1;
  char **pch = (char**) malloc(sizeof(char*)*size);
  int k = 0;
  while(k < size -1 ){
    pch[k] = (char*) malloc(sizeof(char)*col);
    k++;
  }
  int j = 0;
  while(j < size -1){
    int i = 0 ;
    while(pchars[j][i]){
      pch[j][i]   = inverter(pchars[j][i]);
      i++;
    }
    pch[j][i]=0;
    j++;
  }
  pch[size-1] = 0;
  //showArray(pchars);
  //showArray(pch);
  return pch;
}

char** join(char** arr1, char** arr2){
  printf("I am gonna join your double**\n");
  int fil = 59;
  char **pch = (char**) malloc(sizeof(char*)*fil);
  int col = cols(arr1);
  int size = col*2+1;
  int k = 0;
  while(k < fil -1 ){
    pch[k] = (char*) malloc(sizeof(char)*(size));
    k++;
  }
  pch[fil - 1] = 0;
  k = 0;
  while(k < fil - 1){
    int count = 0;
    int j = 0;
    while(arr1[k][j]){
      pch[k][count] = arr1[k][j];
      j++;
      count++;
    }
    j = 0;
    while(arr2[k][j]){
      pch[k][count] = arr2[k][j];
      j++;
      count++;
    }
    pch[k][count] = 0;
    k++;
  }
  //showArray(pch);


  return pch;
}

char** up(char** arr1, char** arr2){
  //printf("rows: %d\n",fils(arr1));
  //printf("cols: %d\n",cols(arr1));
  int fil = fils(arr1)*2 + 1;
  int col = cols(arr1) + 1;
  char **pch = (char**) malloc(sizeof(char*)*fil);
  int k = 0;
  while(k < fil -1 ){
    pch[k] = (char*) malloc(sizeof(char)*col);
    k++;
  }
  pch[fil - 1] = 0;
  int count = 0;
  int i =  0;
  int j;
  while(arr1[i]){
    j = 0;
    while(arr1[i][j]){
      pch[count][j] = arr1[i][j];
      j++;
    }
    pch[count][j] = 0;
    i++;
    count++;
  }
  i = 0;
  while(arr2[i]){
    j = 0;
    while(arr2[i][j]){
      pch[count][j] = arr2[i][j];
      j++;
    }
    pch[count][j] = 0;
    i++;
    count++;
  }

  printf("%d\n",count);
  //showArray(pch);


  return pch;

}


