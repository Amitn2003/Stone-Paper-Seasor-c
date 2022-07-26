#include<stdio.h>
#include<stdlib.h>
#include<String.h>
#include<time.h>

int random(){
    srand(time(NULL));
    return rand()%3;
}

int main() {
    int choice, rnd, computerPoint = 0, userPoint = 0, turn = 3;
    char name[36];
    printf("The random number among 0-2 is %d \n", random());
    printf("Enter your name: ");
    gets(name);
    printf("Welcome ");
    puts(name);

    while (turn) {
    printf("\nPress 1 for Stone \nPress 2 for Paper\nPress 3 for Seasor");
    scanf("%d", &choice);
    if (choice <0 || choice >3) {
        // continue;
        main();
    }
    rnd = random(); // 0.Stone 1.Paper 2.Seasor
    choice--;
    if (choice == 0 && rnd == 0) {
        printf("Draw----------------");
    }
    else if (choice == 0 && rnd == 1) {
        printf("Computer: Paper \nYou lost--------------");
        computerPoint++;
    }
    else if (choice == 0 && rnd == 2) {
        printf("Computer: Seasor \nYou won--------------");
        userPoint++;
    }
    else if (choice == 1 && rnd == 0) {
        printf("Computer: Stone \nYou won--------------");
        userPoint++;
    }
    else if (choice == 1 && rnd == 1) {
        printf("Draw--------------");
    }
    else if (choice == 1 && rnd == 2) {
        printf("Computer: Seasor \nYou lost--------------");
        computerPoint++;
    }
    else if (choice == 2 && rnd == 0) {
        printf("Computer: Stone \nYou lost--------------");
        computerPoint++;
    }
    else if (choice == 2 && rnd == 1) {
        printf("Computer: Paper \nYou won--------------");
        userPoint++;
    }
    else if (choice == 2 && rnd == 2) {
        printf("Draw--------------");
        
    }
    else {
        printf("Error\nSomething went wrong\nTry again...\n");
    }
    turn--;
    };
    if (userPoint > computerPoint) {
        printf("\n");
        puts(name);
        printf(" won the match!");
    }
    else if (userPoint < computerPoint) {
        printf("\nComputer won the match!");
    }
    else {
        printf("\nMatch draw...");
    }
}
