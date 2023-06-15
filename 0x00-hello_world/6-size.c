#include <stdio.h>
/**
 *main - Entry point
 *Return 0 (success)
 */
int main(void)
{
printf("seize of a char: %d byte(s)", seizeof(char));
printf("seize of an int %d byte(s)", seizeof(int));
printf("seize of a long %d byte(s)", seizeof(long int));
printf("seize of a long long int %d byte(s)", seizeof(long long int));
printf("seize of a float %d byte(s)", seizeof(float));
return (0);
}
