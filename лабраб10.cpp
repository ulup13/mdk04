#include <iostream>
#include <string>

enum Nauki {
    biology, math, hystory, chemistry, physics
};
enum Status {
    otkrito, dokazano, arhivirovano, oprovergnuto
};

class Date {
private:
    int day, month, year;
    bool CorrectDate(int d, int m, int y) {
        if ((31 < d < 1) || (12 < m < 1) || (y < 1)) {
            return false;
        }
        return true;
    }
public:
    Date(int d, int m, int y) {
        this->day = d;
        this->month = m;
        this->year = y;
        if (!CorrectDate(d,m,y)) {
            std::cout << "некорректная дата\n";
        }
    }
    std::string toString() const {
        return std::to_string(day) + "." + std::to_string(month) + "." + std::to_string(year);
    }

};

class Otkritie {
private:
    std::string name;
    int id;
    Date date;
    Nauki oblast;
    Status status;
public:
    Otkritie(std::string name, int id,Date date, Nauki oblast)
        :name(name),id(id),date(date),oblast(oblast), status (otkrito) 
    {
    }
    std::string StatusStringi()const {
        switch (status) {
        case otkrito: return "открыто";
        case dokazano: return "доказано";
        case arhivirovano: return "архивировано";
        case oprovergnuto: return "опровергнуто";
        }
    }
    void Dokazat() {
        if (status == arhivirovano) {
            std::cout << "открытие архивировано\n";
            return;
        }
        status = dokazano;
        std::cout << "доказано.\n";
    }
    std::string NaukaStringi() const{
        switch (oblast) {
        case biology: return "биология";
        case math: return "математика";
        case hystory: return "история";
        case chemistry: return "химия";
        case physics: return "физика";
        default: return "неизвестно";
        }
    }
    void Oprovergnut() {
        status = oprovergnuto;
        std::cout << "опровергнуто.\n";
    }
    void Arhivirovat() {
        status = arhivirovano;
        std::cout << "архивировано.\n";
    }
    void Open() {
        status = otkrito;
        std::cout << "снова открыто\n";
    }
    void Infa() {
        std::cout << "название: " << name << "\nid: " << id << "\nдата открытия: " << date.toString() << "\nобласть науки: " << NaukaStringi() << "\nстатус: " << StatusStringi() << "\n\n";
    }
};
int main()/*dfdf*/
{
    setlocale(0, "");
    Date data(1, 1, 2008);
    Otkritie krutoe("чебупели", 13, data, math);
    krutoe.Dokazat();
    krutoe.Infa();
    krutoe.Arhivirovat();
    krutoe.Dokazat();
    krutoe.Infa();
    std::cout << "Hello World!\n";
}
