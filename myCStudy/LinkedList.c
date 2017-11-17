//
//  LinkedList.c
//  myCStudy
//
//  Created by Ivan Jaimes on 11/16/17.
//  Copyright © 2017 Ivan Jaimes. All rights reserved.
//

#include "LinkedList.h"




// Creates empty node, with value 0
node createNode(int value){
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
   
    temp->next = NULL;
    temp->data = value;
    return temp;
}


// adds node to the end of linked list
node addNode(node head, int value){
    node temp,p;
    
    temp = createNode(value); // Create new node. Next=NULL, data=value
    
    // if linked list is empty
    if(head == NULL){
        head = temp;
    } else{
        p = head;
        
        // Traverse through array
        while(p->next != NULL){
            p = p->next;
        }
        
        // point last node to the new node created
        p->next = temp;
    }
    
    
    return head;
}

void printAll(node head){
    node p;
    p = head;
    while(p != NULL){
        printf("[%d]->", p->data);
        p = p->next;
    }
    printf("[NULL]\n");
}

void test(){
    printf("Creating LinkedList");
}
