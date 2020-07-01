#pragma once

class Good {
private:
    char* name;
    int count;
    float cost;
    void allocName(const char* _name);

public:
    Good();
    Good(const char* _name, int _count, float _cost);
    Good(const Good&);
    ~Good();
    void print();
};
