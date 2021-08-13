#include <stdio.h>  
#include <windows.h>  
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 int main(){  
      gotoxy(15,10); //(x,y) dentro del parentesís colocamos los espacios a utilizar 
      printf("*");   
      return 0;  
 }  
