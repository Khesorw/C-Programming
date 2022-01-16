#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION 3
#define AUTHOR "Hasib Yosufi"
#define ROW 12
#define COLUMN 10
#define GRID ROW*COLUMN
#define INPUT_MAX 60
#define FLOAT_SIZE 5


int main()
{





    /*
    int grid[3][3];
    int row,column;

    for(row = 0; row < 3; row++)
        for(column=0;column < 3; column++)
        grid[row][column] = 0;

    grid[2][2] = 1;


    for(row = 0; row < 3; row++){
        for(column = 0; column < 3; column++)
        printf("%d",grid[row][column]);
    printf("\n");
}
*/

    /*
    float numbers[FLOAT_SIZE];

    for(int i =0 ;i < FLOAT_SIZE; i++){

        puts("Enter the number: ");
        scanf("%1f",&numbers[i]);
        printf("%f\n",numbers[i]);

    }

    */








   // char msg[] = {'H','e','l','l','o','\0'};
   /*
      char msg[] = "Hello";

    for (int i=0;msg[i] != '\0'; i++){


        putchar(msg[i]);

    }
    */

    /*
    char instruc[INPUT_MAX];
    printf("Input the instruction: ");
    fgets(instruc,INPUT_MAX,stdin);
    puts(instruc);
    */


    /*
    const int x = 32;

    printf("constant x is: %d\n",x);

    char author[] = AUTHOR;

    printf("Author is%s\n",author);

    int gird = GRID;
    printf("Grid is %d\tNumber of Ros%d\tNumber of columns%d\n",gird,ROW,COLUMN);
   * /



    char str[] = "Hello";

    if(strcmp(str,"Hello") == 0){


        printf("String are the same \n":)\"");
    }else {printf("String are not the same\n");

    }

    if(strstr(str,"Hell")){
        printf("containg string boggs");
    }
    */

    /*
    char str1[100] = "Hello I am Hasib";
    char str[] = " What is your name?";
    char copyStr[63];
   // strcpy(copyStr, str1);
   // strcat(str1, str);
   // puts(str1);
    strcat(str1," another concatination for the string Woop woop");
     puts(str1);
      strcpy(str1,"String are copied and taht is enough");
      puts(str1);

      */




    /*

    char str[] = "Hellow world";
    char str2[35];
    strcat(str2,str);
    puts(str2);
    */

    /*
    int k;
    k=23;
    printf("enter value");
    scanf("%d",&k);
    printf("%d",k);
    char sdf[] = "Hellowe asdf";
    printf("Hello world!\n");
    printf("Hello From cdsadfasdfads");
    */
    return(0);
}
