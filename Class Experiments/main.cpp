/* 
* General programming experiments
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>

typedef class author {
    //Private Attributes
    private:
    char name[20];
    //Private Function Prototypes

    public:
    int age = 0;
    void insertValues(char *, int &);

} auth;

int main(void) {
    auth auth1;
    auth1::insertValues(*name, age);
}

void author::insertValues(char *name, int *age) {
    //Assign values to name and age
    printf("\n\tGive me a name: ");
    scanf("%s", name);
    printf("\n\tGive me a age: ");
    scanf("%d", age);
    printf("\n\tYour name is: %s\n\tYour age is: %d\n");
}