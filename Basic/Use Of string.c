#include <STDIO.H>
int main()
{
    char brij[80];
    int i, c = 0, d;
    // char brij[4] = {'b', 'r', 'i', 'j', '\0'};
    scanf("%s", brij);
    // scanf("%[^\n]", brij);
    // for (i = 0; brij[i] != '\0'; ++i)
    // {
    //     c++;
    // }
    printf("%s\n", brij);
    d = strlen(brij);
    printf("%d\n", d);
}