//
// Created by ntayl on 16/11/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(void) {
    char guests[65][6];
    char BookingIDcheck[32];
    char BookingID[32][6];
    int guestsnum[13][6] = {122290};
    int roomcost;
    int boardtype;
    int boardcost;
    int age;
    int totalcost;
//testing
    printf("booking id");
    gets(BookingID);
    printf("board type");
//checking booking id
    while (1) {
        printf("oh you want to check out? that's cool\nWhat is your booking id?");
        gets(BookingIDcheck);
        if(strcmp(BookingIDcheck, BookingID) == 0){
            printf("Your booking ID is cool\n");
            break;
        }
        if(strcmp(BookingIDcheck, BookingID) != 0){
            printf("Your booking ID is not cool\n Please re-enter it\n");
        }}
//calculating board cost
    if (strcmp(guests[60],"f") == 0) {
        boardtype = 20;
    }
    else if (strcmp(guests[60],"h") == 0) {
        boardtype = 15;
    }
    else if (strcmp(guests[60],"b") == 0) {
        boardtype = 5;
    }
    int u16 = guestsnum[8][0] * boardtype/2;
    int adult = guestsnum[7][0] * boardtype;

    boardcost = adult + u16;
//calculating age
    for(int i = 0; i < guestsnum[7][i] + guestsnum[8][i] ; i++) {
        int year = guestsnum[4][i] * 10 + guestsnum[5][i];
        if (year < 100){
            year += (year > 50) ? 1900 : 2000;
        }
        age = 2024 - year;
    }
//printing costs

    puts(guests);
    printf("Adults cost:%d\n",adult);
    if(u16 >0){
        printf("Under-16s cost: %d\n",u16);
    }
    printf("Board cost: %d\n",boardcost);
    roomcost = guestsnum[8][0] * guestsnum[10][0];
    if(age >65) {
        roomcost = roomcost * 0.9;
        printf("Room cost: %d\n", roomcost);}
    else {
        printf("Room cost: %d\n", roomcost);}
    if(strcmp(guests[61], "y") == 0){
        totalcost = boardcost + roomcost + 5.5;
        printf("Newspaper cost: 5.5\n");
    }
    else {
        totalcost = boardcost + boardcost;
    }
    printf("Total cost:  %d\n",totalcost);


    return 0;
}