/* 
* General programming experiments
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class person {
    public:
        void setName(char *input) {
            name = (char *) malloc(80 * sizeof(char));
            strcpy(name, input);
        }
        char * getName() {
            return name;
        }
    private:
        char *name;
};


int main(void) {
    person person1;
    person1.setName((char *)"Matthew");
    printf("\n\tYour name is: %s", person1.getName());
}
