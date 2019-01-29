#include <iostream>
using std::string;using std::cout;using std::endl;
class Zelazko{
    protected:
        string _nazwa;
        float _cena;
        int _temperatura;   
    public:
        friend class Ubranie;
        friend class Koszula;
        friend class Spodnie;
        Zelazko(string nazwa = "nazwa", float cena = 0, int temperatura = 0);
        void UstawTemperature(int temperatura);
        void WypiszWlasciwosci(); 
};

class ZelazkoZelmer : public Zelazko{
    public:
        ZelazkoZelmer(int cena);
};
class ZelazkoTefal : public Zelazko{
    public:
        ZelazkoTefal(int cena);
};
