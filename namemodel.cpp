#include "namemodel.h"

NameModel::NameModel(QObject* parent) : QObject(parent) {

}

std::string NameModel::first() {
    return m_first;
}

std::string NameModel::last() {
    return m_last;
}

void NameModel::setName(std::string firstName, std::string lastName) {
    m_first = firstName;
    m_last = lastName;
    emit nameChanged();
}
