//
//  cWrite.c
//  myCStudy
//
//  Created by Ivan Jaimes on 11/16/17.
//  Copyright © 2017 Ivan Jaimes. All rights reserved.
//

#include "cWrite.h"

void printStuff(){
    printf("Hello Other World \n");
}


void createFile(){
    printf("Creating File....");
    FILE *fp;
    
    
    
    fp = fopen("/Users/Ivan/Documents/dev/xcode/C++_Projects/myCStudy/myCStudy/temp/test.txt", "w+");
    
    if(fp != NULL)
    {
        fprintf(fp, "Creating with fprintf...\n");
        fputs("Creating with fputs...\n", fp);
        fclose(fp);
    }
    else
    {
        printf("Failed to create the file.\n");
        
    }
    
}


void readFile(){
    FILE *fp;
    char buff[255];
    
    fp = fopen("/Users/Ivan/Documents/dev/xcode/C++_Projects/myCStudy/myCStudy/temp/test.txt", "r");
    
    // only gets line or EOF
//    fgets(buff, 255, (FILE*)fp);
//    printf("Content: \n %s", buff);
//    fgets(buff, 255, (FILE*)fp);
//    printf(" %s \n", buff);
//    
//    printf("end of file? %d", feof(fp));
    
    printf("Content:\n");
    while(fgets(buff, 255, fp)){
        printf(" -%s", buff);
    }
    
    fclose(fp);
}
