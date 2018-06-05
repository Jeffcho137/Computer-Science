#include "unorderedSet.h"
//#include "unorderedArrayListType.h"
#include <iostream>

using namespace std;

void unorderedSet :: insertAt(int location, int insertItem){
    int itemLocation = seqSearch(insertItem);

    if (itemLocation == -1){
        unorderedArrayListType :: insertAt(location, insertItem);
    }
    else{
        cout << "The requested item has already been inserted" << endl;
    }
}

void unorderedSet :: insertEnd(int insertItem){
    int itemLocation = seqSearch(insertItem);
    if (itemLocation == -1){
        unorderedArrayListType :: insertEnd(insertItem);
    }
    else{
        cout << "The requested item has already been inserted" << endl;
    }
}

void unorderedSet :: replaceAt(int location, int repItem){
    int itemLocation = seqSearch(repItem);
    if (itemLocation == -1){
        unorderedArrayListType :: replaceAt(location, repItem);
    }
}
unorderedSet :: unorderedSet(int size)
                : unorderedArrayListType(size)
{
}
