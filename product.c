#include <stdio.h>
#include "product.h"

int createProduct(Product *p){

        printf("제품 정보를 입력해주세요. \n");

        printf("제품명 : ");
        scanf("%s", p->name);
        printf("중량 : ");
        scanf("%f", &p->weight);
        printf("값 : ");
        scanf("%d", &p->price);
        printf("별점 : ");
        scanf("%f", &p->starPoint);
        printf("별점수 : ");
        scanf("%d", &p->starCount);

        printf("입력 완료\n");

        return 0;
}

int readProduct(Product p){


        printf("\n제품명 : %s\n", p.name);
        printf("중량 : %.1f\n ", p.weight);
        printf("값 : %d\n", p.price);
        printf("별점 : %.1f\n", p.starPoint);
        printf("별점수 : %d\n", p.starCount);



        return 0;
}

int updateProduct(Product *p){

        printf("제품 정보를수정 해주세요. \n");

        printf("제품명 : ");
        scanf("%s", p->name);
        printf("중량 : ");
        scanf("%f", &p->weight);
        printf("값 : ");
        scanf("%d", &p->price);
        printf("별점 : ");
        scanf("%f", &p->starPoint);
        printf("별점수 : ");
        scanf("%d", &p->starCount);

        printf("수정 성공\n");

        return 0;

}


int deleteProduct(Product *p){

        printf("해당 제품을 삭제합니다.\n");

        p->price = -1;

        //가격이 -1인 제품을 삭제.



        return 0;
}


