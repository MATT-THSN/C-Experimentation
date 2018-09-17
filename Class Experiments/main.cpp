/* 
* General programming experiments
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>

class author {
    //Private Attributes
    public:
    int age = 0;
    void functionGrabber();

    private:
    char name[20];
    void attributeAdder(char [], int &);

    void author::functionGrabber() {
        //Assign values to name and age
        printf("\n\tGive me a name: ");
        scanf("%s", name);
        printf("\n\tGive me a age: ");
        scanf("%d", age);
        printf("\n\tYour name is: %s\n\tYour age is: %d\n");
    }

    void author::attributeAdder(char name, int * age) {
        printf("\n\tGive me a name: ");
        scanf("%s", name);
        printf("\n\tGive me a age: ");
        scanf("%d", age);
        printf("\n\tYour name is: %s\n\tYour age is: %d\n");
    }
};


int main(void) {
    author auth1;
    auth1::functionGrabber();
}
