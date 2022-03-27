#include <stdio.h>
#include <stdlib.h>

struct node {
    int mark_of_student;
    struct node *next;
};

typedef struct node node;

void enter_note(node *r, int note)
{
    while (r -> next != NULL);
    r->next = (struct node*) malloc (sizeof(node));
    r->next-> mark_of_student = note;
    r->next-> next = NULL;
}
int main(){

    struct node *root;
    root = (struct node*) malloc (sizeof(node));
    root -> mark_of_student = 0;
    
    struct node *iter;
    iter = root;
    root -> next = NULL;
    
    int count=0, i=0;
    int input_mark = 0;

    for (i = 1; i <= 5; i++) 
    {
        scanf("%d", &input_mark);
        enter_note(root, input_mark);
        root = root -> next;
    }

    while (iter != NULL) 
    {
        printf("%d. student's grade = %d\n", count, iter -> mark_of_student);
        iter = iter -> next;
        count++;
    }

    return 0;
}
