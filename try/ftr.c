#include <stdio.h>

int main() {
    int val = 3;
    int *ptr = &val; // Corrected variable declaration
    printf("%d%d%d", val, *ptr++, val++); // Removed extra space and corrected pointer dereferencing
    return 0;
}

// #include <stdio.h>
// int main()
// {
// int val = 3;
// int *ptr = &val;
// Printf("%d%d%d",val,*ptr++ ,val++);
// return 0;
// }


