#include <stdio.h>
#include "matrix.h"

int main(){
    Matrix matr = {0, NULL};
    Matrix res = {0, NULL};

    if (input(&matr) == 0){
        printf("%s\n", "End of file occured");
        return 1;
    }
    int inpUt;
    int c = getInt(&inpUt);
    while(inpUt != 1){
        addLine(matr, res);
        output(matr);
        output(res);
    }
    erase(&res);
    erase(&matr);

    return 0;
}


