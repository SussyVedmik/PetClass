#include <iostream>
using namespace std;

class Pet
{
protected:
    const char* name;

public:
    Pet(const char* name);
    virtual ~Pet() = default;

    virtual void Sound() const = 0;
    virtual void Show() const;
    virtual void Type() const = 0;
};

class Crocodile : public Pet
{
public:
    Crocodile(const char* name);
    void Sound() const override;
    void Type() const override;
};

class Cat : public Pet
{
public:
    Cat(const char* name);
    void Sound() const override;
    void Type() const override;
};

class Platypus : public Pet
{
public:
    Platypus(const char* name);
    void Sound() const override;
    void Type() const override;
};

