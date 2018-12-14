#ifndef NAMEMODEL_H
#define NAMEMODEL_H
#include <qobject>
#include <string>

class NameModel : public QObject {
    Q_OBJECT
public:
    explicit NameModel(QObject *parent = nullptr);
    std::string first(QObject* parent);
    std::string last();
    void setName(std::string firstName, std::string lastName);
signals:
    void nameChanged();
private:
    std::string m_first;
    std::string m_last;

};

#endif // NAMEMODEL_H
