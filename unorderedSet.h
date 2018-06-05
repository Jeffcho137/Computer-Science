#ifndef UNORDEREDSET_H_INCLUDED
#define UNORDEREDSET_H_INCLUDED
#include "unorderedArrayListType.h"
#include <iostream>
using namespace std;
template <class elemType>
class unorderedSet: public unorderedArrayListType<elemType>
{
public:
    void insertAt(int location, elemType& insertItem);
    void insertEnd(elemType& insertItem);
    void replaceAt(int location, elemType& repItem);
    //int seqSearch(int searchItem) const;
    unorderedSet<elemType> operator+(const unorderedSet<elemType> &rhs)const;
    unorderedSet<elemType> operator-(const unorderedSet<elemType> &rhs)const;


    //unorderedArrayListType(int size = 100);
    unorderedSet(int size=100);
      //Constructor
};
template <class elemType>
void unorderedSet<elemType> :: insertAt(int location, elemType& insertItem){
    int itemLocation = this->seqSearch(insertItem);

    if (itemLocation == -1){
        unorderedArrayListType<elemType> :: insertAt(location, insertItem);
    }
    else{
        cout << "The requested item has already been inserted" << endl;
    }
}
template <class elemType>
void unorderedSet<elemType> :: insertEnd(elemType& insertItem){
    int itemLocation = this->seqSearch(insertItem);
    if (itemLocation == -1){
        unorderedArrayListType<elemType> :: insertEnd(insertItem);
    }
    else{
        cout << "The requested item has already been inserted" << endl;
    }
}
template <class elemType>
void unorderedSet<elemType> :: replaceAt(int location, elemType& repItem){
    int itemLocation = this->seqSearch(repItem);
    if (itemLocation == -1){
        unorderedArrayListType<elemType> :: replaceAt(location, repItem);
    }
}
template <class elemType>
unorderedSet<elemType> unorderedSet<elemType>::operator+(const unorderedSet<elemType> &rhs)const
{
    unorderedSet<elemType> unionSet;
    for(int i=0; i< this->length;i++)
        unionSet.insertEnd(this->list[i]);
    for(int i =0; i<rhs.length; i++)
        unionSet.insertEnd(rhs.list[i]);
    return unionSet;
}
template <class elemType>
unorderedSet<elemType> unorderedSet<elemType>::operator-(const unorderedSet<elemType> &rhs)const
{
    unorderedSet<elemType> intersectionSet;
    for (int i=0; i<this->length; i++)
        if (rhs.seqSearch(this->list[i])>=0)
            intersectionSet.insertEnd(this->list[i]);
    return intersectionSet;
}
template<class elemType>
unorderedSet<elemType> :: unorderedSet(int size)
                :unorderedArrayListType<elemType>(size)
{
}

#endif // UNORDEREDSET_H_INCLUDED
