#include <stdio.h>

int main()
{   int ID,marks,val;
    printf("Enter Student ID:\n");
    scanf("%d",&ID);
    while (ID !=-1)
    {


        printf("Enter Mark:\n");
        scanf("%d",&marks);
        switch(marks >= 45 ? (marks >=55 ? (marks >= 65 ? (marks >=75 ? 0:1):2):3):4){
            case 0:
                printf("Grade = A\n");
                printf("Enter Student ID:\n");
                scanf("%d", &ID);
                break;
            case 1:
                printf("Grade = B\n");
                printf("Enter Student ID:\n");
                scanf("%d", &ID);
                break;
            case 2:
                printf("Grade = C\n");
                printf("Enter Student ID:\n");
                scanf("%d", &ID);
                break;
            case 3:
                printf("Grade = D\n");
                printf("Enter Student ID:\n");
                scanf("%d", &ID);
                break;
            case 4:
                printf("Grade = F\n");
                printf("Enter Student ID:\n");
                scanf("%d", &ID);
                break;

        }
    }
    return 0;
}
