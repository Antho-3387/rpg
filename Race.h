#ifndef RPGFIGHTING_RACE_H
#define RPGFIGHTING_RACE_H

class Race {
public:
    int CharacterHp = 0;
    int CharacterDamage = 0;
};

class Human : public Race {
public:
    Human() {
        CharacterHp = 5;
        CharacterDamage = 4;
    }
};

class Elf : public Race {
public:
    Elf() {
        CharacterHp = 4;
        CharacterDamage = 1;
    }
};

class Saitama : public Race {
public:
    Saitama() {
        CharacterHp = 999;
        CharacterDamage = 999;
    }
};


#endif