#ifndef THERAD_CONVO_H
#define THERAD_CONVO_H

#include <QObject>

class therad_convo : public QObject
{
    Q_OBJECT
public:
    explicit therad_convo(QObject *parent = 0);
    void format();

signals:

public slots:
};

#endif // THERAD_CONVO_H
