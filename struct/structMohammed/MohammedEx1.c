#include <stdio.h>

struct Student{
        char Names[20];
        int age;
    };

int main() {
    struct Student std;
    int Eage;
    printf("entre votre nom: \t");
    fgets(std.Names,15,stdin);
    printf("entre votre age: \t");
    scanf("%d", &Eage);
    std.age = Eage;

    printf("Nom: \t %s ", std.Names);
    printf("Age: \t %d \n", std.age);

    
        return 0;
}
