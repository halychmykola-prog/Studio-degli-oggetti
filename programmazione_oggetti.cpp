#include <iostream>

using namespace std;

class Color 
{
private:
    short r;
    short g;
    short b;

public:
    Color() 
    {
        r = 0;
        g = 0;
        b = 0;
    }
    
    
    Color(short a, short b_param, short c) 
    {
        if (a < 0 || a > 255) 
        {
            r = 0;
        } else {
            r = a;
        }

        if (b_param < 0 || b_param > 255) 
        {
            g = 0;
        } else {
            g = b_param;
        }

        if (c < 0 || c > 255) 
        {
            b = 0;
        } else {
            b = c;
        }
    }

    
    //ьуещвш пуе/ыуе
    void setR(short rosso) 
    {
        if (rosso < 0 || rosso > 255)
        {
            r = 0;
        } 
        else 
        {
            r = rosso;
        }
    }

    void setG(short green) 
    {
        if (green < 0 || green > 255) 
        {
            g = 0;
        } 
        else 
        {
            g = green;
        }
    }

    void setB(short blue) {
        if (blue < 0 || blue > 255) 
        {
            b = 0;
        } 
        else 
        {
            b = blue;
        }
    }

    short getR()
    { 
        return r;
    }
    
    short getG()
    { 
        return g;
    }
    
    short getB()
    { 
        return b;
    }
    

    void stampa() 
    {
        cout << "carta di identita' del colore\n";
        cout << "red: "<<r<<endl;
        cout << "green: "<<g<<endl;
        cout << "blue: "<<b<<endl;
    }

    double luminosita() 
    {
        return 0.2126 * r + 0.7152 * g + 0.0722 * b;
    }
    
    bool uguale(Color altro)
    {
        if (r == altro.getR() && g == altro.getG() && b == altro.getB())
            return true;
        else
            return false;
    }
    
    
    
    
};

int main() {
    cout <<"Inizio MAIN"<<endl<<endl;

    Color c1;
    c1.stampa();
    cout<<"Luminosita: "<<c1.luminosita()<<endl<<endl;

    Color c2(300, 150, -20); 
    c2.stampa();
    cout<<"Luminosita: "<<c2.luminosita()<<endl;
    
    cout<<endl<<"Metodo uguale "<<endl<<endl;
    
    if (c1.uguale(c2)) 
    {
        cout<<"c1 e c2 sono uguali"<<endl;
    } 
    else 
    {
        cout <<"c1 e c2 sono diversi"<<endl;
    }

    return 0;
}