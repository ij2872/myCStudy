//
//  main.c
//  myCStudy
//
//  Created by Ivan Jaimes on 11/16/17.
//  Copyright © 2017 Ivan Jaimes. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "cWrite.h"
#include "LinkedList.h"

struct Wav{
    char title[20];
    int sample_rate;
    int bit_rate;
} song1;

// function declare
void printFiles(struct Wav song);

int main(int argc, const char * argv[]) {
    
    strncpy(song1.title, "Love Never Felt So Good", (sizeof song1.title) - 1);
    song1.sample_rate = 441000;
    song1.bit_rate = 32;
//    scanf("%d", &song1.bit_rate);
    
    printFiles(song1);
//    createFile();
//    readFile();
    
    
    printf("Linked list\n");
    node n = createNode(65);
    addNode(n, 20);
    printAll(n);
    
    return 0;
}


void printFiles(struct Wav song){
    printf("Title: %s\n", song.title);
    printf("Sample Rate: %d\n", song.sample_rate);
    printf("Bit Rate: %d \n", song.bit_rate);

}
