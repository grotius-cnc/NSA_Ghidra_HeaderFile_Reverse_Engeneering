#ifndef DSLIBRARY_H
#define DSLIBRARY_H

#include "iostream"

class dsLibrary
{
public:

    dsLibrary();
};

class dsString_pimpl;
class dsString
{
public:
    dsString();
    dsString(const wchar_t* strIn);
    dsString(const dsString &a);
    ~dsString();

    dsString& operator = (const dsString &dsStr);
    dsString& operator = (const wchar_t *wChar);

    operator wchar_t*() const;
    size_t getSize() const;
    int CompareNoCase( const dsString &dsStr ) const;
    int Compare( const dsString &dsStr ) const;
    bool operator == (const dsString &dsStr) const;
    bool operator != (const dsString &dsStr) const;
    bool operator < (const dsString &dsStr) const;
    bool operator <= (const dsString &dsStr) const;
    bool operator > (const dsString &dsStr) const;
    bool operator >= (const dsString &dsStr) const;

private:
    dsString_pimpl *getImpl() const;
    dsString_pimpl *m_dsString_pimpl;
};


#endif // DSLIBRARY_H
