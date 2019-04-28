#pragma once 

class Dragon
{
public:
    // static int s_count;

    Dragon(double x, double y);
    virtual ~Dragon(){};
    // ~Dragon(){};

    void printHP();
    void printPos();

    // void update();
    // void draw();

protected:
    int m_hp;
    double m_x, m_y;
};