#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>

class laptop : public QObject
{
    Q_OBJECT
public:
    explicit laptop(QObject *parent = nullptr);
    laptop();
    ~laptop();

signals:

};

#endif // LAPTOP_H
