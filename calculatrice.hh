#ifndef CALCULATRICE_HH
#define CALCULATRICE_HH
#include <QtWidgets>
#include <iostream>
#include <string>

class calculatrice : public QWidget {
public:
  calculatrice(QWidget * parent  = nullptr);
  ~calculatrice();
private:
};
/*enum class operateur {
    +,-,/,*,=,^2
};

class moteur {
public:
    moteur():_resultat(0.0),_nombretmp(), _operateur(operateur::+),erreur(false){}
    bool malforme()
private:
    double _resultat ;
    std::string _nombretmp ;
    operateur _operateur ;
    bool erreur ;

};*/

#endif // CALCULATRICE_HH
