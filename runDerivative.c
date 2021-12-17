#include <stdio.h>
#include "Derivative.h"

void runDerivative (void) {
  //**Stores the value for which type of function the user wishes to differentiate.**// -Tausif
  printf("Enter the type of function you wish to differentiate. \n  KEY: 1 for 'Linear', 2 for 'Binomial', 3 for 'Trinomial'\n"); 
  //**Gives the user a key for choosing different function types they wish to differentiate. **// -Tausif
  scanf("%i", &fxntype);
  //**Takes user input at stores it in fxntype.**// -Tausif

  /*char fxnvar;*/ 
  //**Storage of the variable the user is going to use in their functions.**// -Tausif

  switch (fxntype) { 
    //**Switches are easy and conventient since they take numerical input and are clean dividers between parts of the program.**// - Tausif

    case 1:
    printf("\nYour function type is Linear, or y = mx+b.\n"); 
    //**This gives the user the format for which the function is listed as. **// -Muhammad
    
    placeholders[0] = "m";
    placeholders[1] = "b";
    //**Creates the variables that needs to be replaced inside the array that holds all the coefficients.**// -Muhammad

    for(int i=0; i<2; i++) {
      printf("Enter a value to replace %s:\t", placeholders[i]);
      scanf("%f",&linearvals[i]); 
      //**Makes the user input a value to replace the variables in placeholders[~] **// -Muhammad
    }

    for(int i=0;i<2;i++){ //**Output test to make sure loop is working.**// -Tausif
      printf("The value of %s is %.2f \n", placeholders[i], linearvals[i]);
    }

    //printf("What variable would you like to use? Options are from a to z.\n\n");
    //scanf("%c", &fxnvar);
    
    printf("The derivative of your linear function is: %.2fx", linearvals[0]);
    break;

    case 2:
    printf("\nYour function type is Bionomial, or y = ax^e1 + bx + c.\n"); 
    //**This gives the user the format for which the function is listed as. **// -Tausif
    
    placeholders2[0] = "a";
    placeholders2[1] = "e1";
    placeholders2[2] = "b";
    placeholders2[3] = "c";
    //**Creates the variables that needs to be replaced inside the array that holds all the coefficients.**// -Tausif

    for(int j=0; j<4; j++) {
      printf("Enter array value to replace %s:\t", placeholders2[j]);
      scanf("%f",&binomvals[j]); 
      //**Makes the user input a value to replace the variables in placeholders[~] **// -Muhammad
    }

    for(int j=0;j<4;j++) {//output array value 
    printf("The value of %s is %.2f \n", placeholders2[j], binomvals[j]);    
    }

    //printf("What variable would you like to use? Options are from a to z.\n\n");
    //scanf("%c", &fxnvar);
    
    printf("The derivative of your binomial function is: %.2fx^%.2f + %.2f", binomvals[0] * binomvals[1], binomvals[1] - 1, binomvals[2]);
    break;

    case 3:
    printf("\nYour function type is Trinomial, or y = ax^e1 + bx^e2 + cx + d.\n"); 
    //**This gives the user the format for which the function is listed as. **// -Tausif

    placeholders3[0] = "a";
    placeholders3[1] = "e1";
    placeholders3[2] = "b";
    placeholders3[3] = "e2";
    placeholders3[4] = "c";
    placeholders3[5] = "d";
    //**Creates the variables that needs to be replaced inside the array that holds all the coefficients.**// -Tausif

    for(int k=0;k<6;k++) {
      printf("Enter array value to replace %s:\t", placeholders3[k]);
      scanf("%f", &trinomvals[k]);
      //**Makes the user input a value to replace the variables in placeholders[~] **// -Tausif
    }

    for(int k=0;k<6; k++) {
      printf("The value of %s is %.2f \n", placeholders3[k],trinomvals[k]);
    }
    
    printf("The derivative of your trinomial function is: %.2fx^%.2f + %.2fx^%.2f + %.2f", trinomvals[0] * trinomvals[1], trinomvals[1] - 1, trinomvals[2] * trinomvals[3], trinomvals[3] - 1, trinomvals[4]);
    break;

  }
}
