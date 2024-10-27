#include <stdio.h>
typedef struct cell_phone 
{
    int cell_no;
    const char *wallpaper;
    float minutes_of_charge;
}phone;

typedef struct 
{
    float tank_capacity;
    int tank_psi;
    const char *suit_material;
}equipment;

typedef struct scuba
{
    const char *name;
    equipment kit;
}diver;

void badge(diver d)
{
    printf("Name; %s Tank: %2.2f(%i) Suit: %s\n", d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);

}

int main()
{
    phone p = {567483, "spiderman.png", 43.23};

    diver randy = {"Randy", {5.5, 3500, "Neoprene"}};

    badge(randy);
    return 0;
}
