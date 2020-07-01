#include <stdio.h>
int isAvailable(char num, char arr[], unsigned int n);

int main() {
    char *p1="X";
    char *p2="O";
    char arr[] = {'1','2','3','4','5','6','7','8','9'};
    unsigned int n = sizeof(arr)/sizeof(arr[0]);
    int end = 0;
    int turn = 0;
    char choice;

    while(!end) {
        printf("%c_|_%c_|_%c\n%c_|_%c_|_%c\n%c | %c | %c\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);
        printf("%s choose a number.\n", (turn)? "p2": "p1");
        scanf(" %c", &choice);
        int holder = isAvailable(choice, arr, n);
        if(holder != -1){
            arr[holder] = (turn)? 'O' : 'X';
        };
        turn = (turn)? 0 : 1;
    };

    return 0;
};

int isAvailable(char num, char arr[], unsigned int n) {
    int i;
    for(i = 0; i<n; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
};
