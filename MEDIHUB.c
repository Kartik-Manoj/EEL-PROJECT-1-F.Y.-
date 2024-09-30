#include <stdio.h>
#include <string.h>

#define MAX_MEDICINES 15

int main() 
{
    char medicines[MAX_MEDICINES][20] = {
        "Paracetamol",
        "Aspirin",
        "Ibuprofen",
        "Amoxicillin",
        "Cetirizine",
        "Carboplatin",
        "Cefixime",
        "Cetrizine",
        "Chlorambucil",
        "Clindamycin",
        "Clopidogrel",
        "Dacarbazine",
        "Daunorubicin",
        "Diazepam",
        "EMLA cream"
        

    };
    
    char prescribed[20];
    int found = 0;

    printf("WELCOME To MEDICARE HUB \nPlease Enter the name of the prescribed medicine: ");
    scanf("%s", prescribed);


    for (int i = 0; i < MAX_MEDICINES; i++) {
        if (strcmp(prescribed, medicines[i]) == 0) {
            found = 1;
            break;
        }
    }

    if (found) 
    {
        printf("The medicine '%s' is available in the store.\n", prescribed);
        int age;
        printf("Enter the age of patient according to the prescription:");
        scanf("%d",&age);
        if(age<5)
        {
            printf("10 percent discount applied");
        }
        else if(age>60)
        {
            printf("18 percent discount applied");
        }
        else
        {
            printf("No discount applied");
        }
    } 
    else 
    {
        printf("The medicine '%s' is not available in the store.\n", prescribed);
    }
    
}