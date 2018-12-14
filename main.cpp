#include <QCoreApplication>
#include "namemodel.h"
#include "nameview.h"
#include "namecontroller.h"

int main(int argc, char *argv[])
{
    QObject object;
    QCoreApplication a(argc, argv);
    NameModel model(&object);
    NameFirstView first(&model, &object);
    NameLastView last(&model, &object);
    NameController controller(&model, &object);

    std::string firstName;
    std::cout << "Enter first name: ";
    std::cin >> firstName;
    std::string lastName;
    std::cout << "Enter last name: ";
    std::cin >> lastName;
    model.setName(firstName, lastName);
    first.print();
    last.print();

    cin;

    return a.exec();
}
