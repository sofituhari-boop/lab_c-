#include <iostream>

struct Hero 
{
    int health;
    int maxHealth;
}

void levelUp(Hero* hero)
{
    hero->maxHealth += 10;
    hero->health = hero->maxHealth;
}


int main()

{
    Hero hero {50, 100};

    levelUp(&hero);

    std::cout << hero.health << std::endl;
    
}

