#include "Pet.h"

int main()
{
    Pet* pets[] =
    {
        new Crocodile("Hydra"),
        new Cat("Whiskers"),
        new Platypus("Perry"),
    };

    for (int i = 0; i < 4; ++i)
    {
        pets[i]->Show();
        pets[i]->Type();
        pets[i]->Sound();
        cout << "   " << endl;
    }

    for (int i = 0; i < 4; ++i)
    {
        delete pets[i];
    }

    system("pause");
}
