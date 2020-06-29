#include <stdio.h>
int isAvailable(int num, int *arr) {
    for(int i = 0; i<9; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return 0;
}
int main() {
    char *p1="X";
    char *p2="O";
    char arr[] = {1,2,3,4,5,6,7,8,9};
    int end = 0;
    int turn = 0;
    int choice;

    printf("1_|_2_|_3\n4_|_5_|_6\n7 | 8 | 9\n");
    while(!end) {
        printf("%s choose a number.\n", (turn)? "p2": "p1");
        scanf(" %d", &choice);
        
        if(isAvailable(choice, arr)){
            printf("hit");
        };
        turn = (turn)? 0 : 1;
    };

    return 0;
}
