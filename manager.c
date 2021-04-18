#include <stdio.h>
#include "manager.h"

void createMultiProduct(Product *p1, int count){ 
    createProduct(&p1[count]);
}

void readMultiProduct(Product *p1, int count){
    
    
    for(int i =0; i<count; i++){ 
        if(p1[i].weight==-1) continue; 
        readProduct(p1[i]);
        printf("\n"); 
    }
}

void updateMultiProduct(Product *p1, int select){ 
    updateProduct(&p1[select-1]); 
}

void deleteMultiProduct(Product *p1, int select){ 
    deleteProduct(&p1[select]); 
}
