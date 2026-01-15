/*Implement a simple menu-driven program using switch.

Press 1: Calculate Square

Press 2: Calculate Cube

Press 3: Exit
*/
#include <stdio.h>
int main()
{
    int num;
    int WhatToDo;
    int repeat;

    while (1)
    {
        printf("Press 1: Calculate Square\nPress 2: Calculate Cube\nPress any: Exit\n::::: ");
        scanf("%d", &WhatToDo);

        switch (WhatToDo)
        {
        case 1:
            printf("Enter the Number: ");
            scanf("%d", &num);
            printf("Square of %d is %d", num, num * num);
            break;
        case 2:
            printf("Enter the Number: ");
            scanf("%d", &num);
            printf("Cube of %d is %d", num, num * num * num);
            break;

        default:
            break;
        }
        printf("\n\nPress '9' to do more Operation?: ");
        scanf("%d", &repeat);
        if (repeat == 9)
        {
            continue;
        }
        break;
    }

    return 0;
}