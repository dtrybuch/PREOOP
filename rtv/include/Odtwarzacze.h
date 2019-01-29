#include<iostream>
using std::string;
using std::cout;
using std::endl;
class Odtwarzacze{
    public:
        Odtwarzacze(char napis,string nazwa);
        virtual void Wyswietl(int szerokosc,int wysokosc) = 0;
        friend class Monitory;
    protected:
        char m_napis;
        string m_nazwa;
};
class Komputer : public Odtwarzacze{
    public:
        Komputer(char napis);
        void Wyswietl(int szerokosc,int wysokosc);
};
class OdtwarzaczDVD : public Odtwarzacze{
    public:
        OdtwarzaczDVD(char napis);
        void Wyswietl(int szerokosc,int wysokosc);
};