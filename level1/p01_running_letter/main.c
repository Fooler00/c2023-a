#include <stdio.h>
#include<windows.h>
int main(){while(1)
    {int i=1;
        for (;i < 121;i += 1)
        {
            printf("A"),
                    Sleep(100),

                    printf("\b ");

        }
        for(;i>=121&&i<242;i+=1)
        {printf("\b\b  ");
            printf("\bA \b\b");
            Sleep(100);

        }
        for (; i ==242;) { i = 1; }
    }
}

