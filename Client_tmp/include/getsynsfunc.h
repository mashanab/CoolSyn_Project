#pragma once

#include "synwindow.h"

#include <QVector>
#include <QString>

namespace GetSynsFunc
{

    QVector<QString> getSyns(QString inputWord, SynWindow *window);
    QString makeCorrectWord(QString str);
    QString toCapitalize(QString word);
};
