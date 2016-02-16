#ifndef KRULEXMLOUTPUTFORMATTER_H
#define KRULEXMLOUTPUTFORMATTER_H

#include "output/outputformatter.h"

class XMLOutputFormatter: public OutputFormatter {
public:
    XMLOutputFormatter(QList<KRuleOutput*> klist):OutputFormatter(klist) {}
    ~XMLOutputFormatter() {}
    QString format();

};

#endif // KRULEXMLOUTPUTFORMATTER_H