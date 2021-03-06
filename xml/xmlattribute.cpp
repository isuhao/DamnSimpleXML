#include "xmlattribute.h"
#include "xmlelement.h"

XmlAttribute::XmlAttribute(XmlElement *element, QString name, QString value, QObject *parent) :
    QObject(parent),
    m_element(element),
    m_name(name),
    m_valueStr(value)
{
}

QString XmlAttribute::name()
{
    return m_name;
}

QString XmlAttribute::valueStr()
{
    return m_valueStr;
}

