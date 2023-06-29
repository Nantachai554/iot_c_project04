#include <stdio.h>

void sumNumber(int x,int y){
    printf("%d +%d = %d", x,y,x+y);
}

void showWelcome(char n[20]){
    printf("Hi....%s\n",n);
    //return; ทำได้แต่เขาไม่ทำกัน
}

void main(){
    sumNumber(10,20); // เรียกค่าที่ส่งว่า argument
    showWelcome("Sombat");
}