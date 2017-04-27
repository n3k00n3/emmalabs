/* 
 * Binary challenge used for radare introduction. 
 * By n3k00n3 - n3k00n3.github.io
 * 
*/ 

#include <stdio.h>
#include <string.h>

unsigned short checkPass(char *pass) {
    unsigned short check = 0; 

    if (pass[0] == 'R') {
        if (pass[1] == 'e') {
            if (pass[2] == 'v') {
                if (pass[3] == 'e') {
                    if (pass[4] == 'r') {
                        if (pass[5] == 's') {
                            if (pass[6] == 'i') {
                                if (pass[7] == 'n'){
                                    if (pass[8] == 'g'){
                                    check = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (check == 1) {
                if (pass[9] == 'I') {
                    if (pass[10] == 's') {
                        if (pass[11] == 'C') {
                            if (pass[12] == 'o') {
                                if (pass[13] == 'o') {
                                    if (pass[14] == 'l') {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
    } else {
        return -1;
    }
}

unsigned short checkPassLength (char *pass) {
    unsigned short  i = 0; 
    while(pass[i] != '\0') {
        i++;
    }
    return i; 
}

int main(int argc, char *argv[]) {
    char pass[15]; 

    printf("Enter password: "); 
    scanf("%s", pass);
    printf("Got [%s]\n", pass); 

 
    if ((checkPassLength(pass) == 15) && (checkPass(pass) == 0)) {
        puts("Congratz! \n");
    } else {
        puts("You Need to learn more!!\n"); 
    }
    return 0;
}

