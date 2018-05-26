#include <stdio.h>
#include <stdlib.h>

/**
 *  Created By Yash Singh
 *  Downloaded from github Darksoul1011
 *
 */


// Creating the node
struct node {

    int info;

    struct node *list;
};

// Creating The First Pointer
struct node *START = NULL;

//Node Is Created with pointer n
struct node *CreateNode(){

    struct node *n; // Pointer N

    n = (struct node*)malloc(sizeof(struct node)); // Our Node

    return n; // Returning the adders of node
};

//Creating The Insert Option
void Inserting(){

    struct node *temp,*t; //Creating a Pointer temp and t

    temp = CreateNode();  // Removing the node n and using pointer temp

    printf("Enter Your No. ");

    scanf("%d",&temp->info);

    temp->list=NULL;  // Taking The Node As Last

    if(START == NULL){

        START=temp;

    }else{ // If the START HAS SOME NODE THEN

        t = START; //T pointer is equal to START

        while(t->list!=NULL){ // WHILE IS NOT FOUND DO THIS

            t=t->list; //PUT THE VALUE OF LAST NODE IN T
            }

        t->list=temp; // THE VALUE OF LAST ADDRES OF NODE IS = TO TEMP
    }
}
// DELETEING
void deleteing(){

    struct node *r;

    if(START == NULL){

        printf("The List Is Empty");

    }else{

        r=START; // Pointer r is equal to START

        START=START->list;  //Get the value of first node

        free(r);
    }
} // Easy

// View
void ViewTheList(){

    struct node *t;

    if(START == NULL){

        printf("The List Is Empty");
    }

    else{

        t=START;

        while(t != NULL){

            printf("%d",t->info); // while the value of t is null print all the node

            t=t->list;
        }
    }
}

int menu(){

    int ch;

    printf("\n1.Insert A Value.\n");

    printf("\n2.View The List\n");

    printf("\n3.Delete The Value(This List Can Only Delete the first value of list)\n");

    printf("\n4.Exit\n");

    printf("\nEnter A Value ");

    scanf("%d",&ch);

    return(ch);
}
int main(){

    while(1){

        switch(menu()){

            case 1:
                Inserting();
                break;

            case 2:
                ViewTheList();
                break;

            case 3:
                deleteing();
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Invalid Number");
                break;
        }
    }
}
// Visit My Website-www.yashhelp.cf
// Follow me on instagram itz_yash_singh
