#include "Pet.h"

Pet::Pet(const char* name) : name(name) {}

void Pet::Show() const
{
    cout << "Name: " << name << endl;
}

Crocodile::Crocodile(const char* name) : Pet(name) {}

void Crocodile::Sound() const
{
    cout << "CRRRRR" << endl;
}

void Crocodile::Type() const
{
    cout << "Type: Crocodile" << endl;
}

Cat::Cat(const char* name) : Pet(name) {}

void Cat::Sound() const
{
    cout << "Meow!" << endl;
}

void Cat::Type() const
{
    cout << "Type: Cat" << endl;
}

Platypus::Platypus(const char* name) : Pet(name) {}

void Platypus::Sound() const
{
    cout << "Squawk!" << endl;
}

void Platypus::Type() const
{
    cout << "Type: Parrot" << endl;
}
