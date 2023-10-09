#include<iostream>
using namespace std;
#include <stdio.h>
#include <string.h> // for strcmp(), strchr()
/*#include <stdbool.h> // C99 feature
 char * s_gets(char * st, int n);
 enum spectrum {red, orange, yellow, green, blue, violet};
 const char * colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};
 #define LEN 30*/
 int main()
 {
 /*int i;
 char choice[LEN];
 enum spectrum color;
 bool color_is_found = false;
 puts("Enter a color (empty line to quit):");
 while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
 {
 for ( i = red; i <= violet; i++)
 {
 if (strcmp(choice, colors[i]) == 0)
 {
 color_is_found = true;
 break;
 }
 }
 if (color_is_found)
 switch(i)
 {
 case red : puts("Roses are red.");
 break;
 case orange : puts("Poppies are orange.");
 break;
 case yellow : puts("Sunflowers are yellow.");
 break;
 case green : puts("Grass is green.");
 break;
 case blue : puts("Bluebells are blue.");
 break;
 case violet : puts("Violets are violet.");
 break;
 }
 else
 printf("I don't know about the color %s.\n", choice);
 color_is_found = false;
 puts("Next color, please (empty line to quit):");
 }
 puts("Goodbye!");*/
 int i;
 const char *month[]= {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
 enum months {jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};

 enum months m;

 cout<<"\n Enter month number..";
 cin>>i;


switch(i)
{
    case jan : cout<<"Jan"; break;
    case feb:  cout<<"Feb"; break;
    default: cout<<"Default";
}

cout<<"\n\n"<<month[jan];
 for(i=jan;i<=dec;i++)    cout<<"\n "<<month[i];

 return 0;
 }

 /*char * s_gets(char * st, int n)
 {
 char * ret_val;
 char * find;
 ret_val = fgets(st, n, stdin);
 if (ret_val)
 {
 find = strchr(st, '\n'); // look for newline
 if (find) // if the address is not NULL,
 *find = '\0'; // place a null character there
 else
 while (getchar() != '\n')
 continue; // dispose of rest of line
 }
 return ret_val;
 }*/
