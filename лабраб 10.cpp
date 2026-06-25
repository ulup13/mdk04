#include <iostream>

enum Nauki {
    biology, math, hystory, chemistry, physics
};

class Otkritie {
private:
    std::string name;
    int id;
    std::string date;
    Nauki oblast;
    std::string status;
public:
    Otkritie(std::string name, int id, std::string date, Nauki oblast) {
        this->name = name;
        this->id = id;
        this->date = date;
        this->oblast = oblast;
        this->status = "открыто";
    }

    void Dokazat() {
        setlocale(0, "");
        status = "доказано";
        std::cout << "доказано.\n";
    }
    std::string NaukaStringi() {
        switch (oblast) {
        case biology: return "биология";
        case math: return "математика";
        }
    }
    void Oprovergnut() {
        setlocale(0, "");
        status = "опровергнуто";
        std::cout << "опровергнуто.\n";
    }
    void Arhivirovat() {
        status = "архивировано";
        std::cout << "архивировано.\n";
    }
    void Open() {
        status = "открыто";
        std::cout << "снова открыто\n";
    }
    void Infa() {
        std::cout << "название: " << name << "\nid: " << id << "\nдата открытия: " << date << "\nобласть науки: " << NaukaStringi() << "\nстатус: " << status << "\n";
    }
};
int main()
{
    setlocale(0, "");
    Otkritie krutoe("чебупели", 13, "13 августа 2008 года", math);
    krutoe.Dokazat();
    krutoe.Infa();
    std::cout << "Hello World!\n";
}