#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int length;

bool hasLowercase(char x[]){
    int i;
    for (i=0;i<length;i++){
        if ((x[i]>='a')&&(x[i]<='z')){return true;}
    }
    return false;
}
bool hasUppercase(char x[]){
    int i;
    for (i=0;i<length;i++){
        if ((x[i]>='A')&&(x[i]<='Z')){return true;}
    }
    return false;
}
bool hasDigit(char x[]){
    int i;
    for (i=0;i<length;i++){
        if ((x[i]>='0')&&(x[i]<='9')){return true;}
    }
    return false;
}
bool hasSpecialChar(char x[]){
    int i;
    for (i=0;i<length;i++){
        if ((x[i]>='!')&&(x[i]<='/')){return true;}
        if ((x[i]>=':')&&(x[i]<='@')){return true;}
        if ((x[i]>='[')&&(x[i]<='`')){return true;}
        if ((x[i]>='{')&&(x[i]<='~')){return true;}
    }
    return false;
}
const char* evaluateStrength(int x){

    if (x<=2){return "Weak";}
    else if (x==3 || x==4){return "Moderate";}
    else if (x>=5){return "Strong";}
}


int main(){
    
    int input=0;
    char strength[15];
    while(input!=3){

        int score=0;
        printf("\nPassword Resilience Analyzer\n");
        printf("1. Test a new password\n");
        printf("2. View strength of the last tested password\n");
        printf("3. Exit\n");
        printf("Enter a choice: ");
        scanf("%d", &input);

        if(input==3){
            printf("Exiting...\n");
            break;
        }
        
        if (input==1){
            printf("Enter a password: ");
            char psw[500];
            scanf("%s", psw);
            length = strlen(psw);

            if (length<8){
                printf("Error: Password too short (Less than 8 characters). Please re-enter a longer password\n");
                continue;
            }
            else{
                //presence of lowercase, uppercase, digits, special characters
                if (length>=12){score+=1;}
                if (hasLowercase(psw)){score+=1;}
                if (hasUppercase(psw)){score+=1;}
                if (hasDigit(psw)){score+=1;}
                if (hasSpecialChar(psw)){score+=1;}
            }
            //evaluate strength should return string of weak, moderate, strong
            strcpy(strength, evaluateStrength(score));
            printf("Password Strength: %s\n", strength);
        }
        else{
            if (strlen(strength)!=0){
                printf("Last tested password strength: %s\n", strength);
            }
            else{
                printf("You have not yet entered a password. Please try again.\n");
            }
        }
            
    }
    return 0;
}