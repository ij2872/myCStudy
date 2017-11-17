//
//  LinkedList.h
//  myCStudy
//
//  Created by Ivan Jaimes on 11/16/17.
//  Copyright © 2017 Ivan Jaimes. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>
#include <stdlib.h>

struct LinkedList {
    int data;
    struct LinkedList *next;
};

typedef struct LinkedList *node;

extern void test();
extern node createNode(int value);
extern node addNode(node head, int value);
extern void printAll(node head);
#endif /* LinkedList_h */
