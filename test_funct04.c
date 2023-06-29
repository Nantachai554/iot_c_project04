#include <stdio.h>

void showHi(){
    printf("Hi...");
}

void showWow(){
    printf("Wow...");
    showHi();
    printf("Woo...");
    printf("Wee...");
}

void main(){
    showWow();
    showHi();

}