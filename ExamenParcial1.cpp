#include <iostream>
#include <string>
using namespace std;

class Rectangulo
{
    private:
    int ancho;
    int altura;

    public:
    int esquinaX;
    int esquinaY;

    Rectangulo();
    Rectangulo(int x, int y);
    Rectangulo(int x, int y, int w, int h);

    int getAncho();
    void setAncho(int w);
    int getAltura();
    void setAltura(int h);
    int getArea();
    void intersecta(Rectangulo rect);
};

int main()
{
    Rectangulo r1;
    r1.setAncho(10);
    r1.setAltura(6);
    r1.esquinaX=10;
    r1.esquinaY=7;

    Rectangulo r2(4, 3);
    r2.setAncho(5);
    r2.setAltura(8);

    Rectangulo r3(1, 2, 4, 3);

    cout << r1.getArea() << endl;
    cout << r2.getArea() << endl;
    cout << r3.getArea() << endl;


    r1.intersecta(r2);
    r1.intersecta(r3);
    r2.intersecta(r3);
    return 0;
}

Rectangulo::Rectangulo()
{
    ancho=0;
    altura=0;
    esquinaX=0;
    esquinaY=0;
}

Rectangulo::Rectangulo(int x, int y)
{
    ancho=0;
    altura=0;
    esquinaX=x;
    esquinaY=y;
}

Rectangulo::  Rectangulo(int x, int y, int w, int h)
{
    if(w>0)
    {
        ancho=w;
    }
    else
    {
        ancho=0;
    }
    if(h>0)
    {
        altura=h;
    }
    else
    {
        altura=0;
    }
    esquinaX=x;
    esquinaY=y;
}

int Rectangulo::getAncho()
{
    return ancho;
}

void Rectangulo::setAncho(int w)
{
    if(w>0)
    {
        ancho=w;
    }
    else
    {
        ancho=0;
    }
}

int Rectangulo::getAltura()
{
    return altura;
}

void Rectangulo::setAltura(int h)
{
    if(h>0)
    {
        altura=h;
    }
    else
    {
        altura=0;
    }
}

int Rectangulo::getArea()
{
    int area = ancho*altura;
    return area;
}

void Rectangulo::intersecta(Rectangulo rect)
{
    if (esquinaX <= rect.esquinaX+rect.ancho && esquinaX+ancho>= rect.esquinaX)
    {
        if (esquinaY <= rect.esquinaY+rect.altura && esquinaY+altura>= rect.esquinaY)
        {
            cout << "Los rectangulos intersectan" << endl;
        }
        else
        {
            cout << "Los rectangulos no intersectan" << endl;
        }
    }
    else
    {
        cout << "Los rectangulos no intersectan" << endl;
    }
}
