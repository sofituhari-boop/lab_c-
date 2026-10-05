#include <iostream>

struct Hero 
{
    int health;
    int maxHealth;
}


void takeDamage(Hero* hero, int damage)
{
    hero->health -= damage;

    if (hero->health <= 0)
    {
        hero->health = 0;
    }
}

int main()

{
    Hero hero {50, 100};

    takeDamage(&hero, 30);


    std::cout << hero.health << std::endl;

}

