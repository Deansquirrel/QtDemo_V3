#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <QException>

class MyException : public QException
{
public:
    MyException();
};

#endif // MYEXCEPTION_H
