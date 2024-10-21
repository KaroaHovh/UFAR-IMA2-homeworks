#include <stdio.h>

int main(){
    char strings[1000][1000] = {"Jacob", "Aaron", "Molly", "Lina", "Karo"};

    char copied_str[1000][1000];

    for (int i=0; i<1000; i++){
        for (int j = 0; j<1000; j++){
            if(strings[i][j] != '/0'){
                copied_str[i][j] = strings[i][j];

            }
            else{
                break;
            }
        }
    }

    for (int i = 0; i<1000; i++){
        printf("%s ", copied_str[i]);
    }

}