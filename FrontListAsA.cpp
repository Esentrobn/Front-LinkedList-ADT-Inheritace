

#include "FrontListAsA.h"  // Header file
#include <cassert>
#include <cmath>
  
template<class ItemType>
FrontListAsA<ItemType>::FrontListAsA()
{
}  // end default constructor

template<class ItemType>
FrontListAsA<ItemType>::FrontListAsA(const FrontListAsA<ItemType>& fList)
		:LinkedList<ItemType>(static_cast<LinkedList<ItemType> >(fList))
{
	
}  // end copy constructor

template<class ItemType>
FrontListAsA<ItemType>::~FrontListAsA()
{
    clear();
}  // end destructor

template<class ItemType>
void FrontListAsA<ItemType>::insertFront(const ItemType& newEntry)
{
   LinkedList<ItemType>::insert(1, newEntry);
}  // end insertSorted

template<class ItemType>
bool FrontListAsA<ItemType>::removeFront(int position)
{
   bool ableToDelete = false;
   
   if ((!LinkedList<ItemType>::isEmpty()) && position == 1)
   {
             
      ableToDelete = position > 0;
      if (ableToDelete)
      {
         ableToDelete = LinkedList<ItemType>::remove(1);
//       ableToDelete = this->remove(position);
      }  // end if
   }  // end if

   return ableToDelete;
}  // end removeFront


//=====================
// List operations:
template<class ItemType>
void FrontListAsA<ItemType>::clear()
{
    LinkedList<ItemType>::clear();
}  // end clear


template<class ItemType>
bool FrontListAsA<ItemType>::isEmpty() const
{
    return LinkedList<ItemType>::isEmpty();
}  // end isEmpty

template<class ItemType>
int FrontListAsA<ItemType>::getLength() const
{
    return LinkedList<ItemType>::getLength();
}  // end getLength

template<class ItemType>
bool FrontListAsA<ItemType>::remove(int position)
{
    return LinkedList<ItemType>::remove(position);
}

template<class ItemType>
ItemType FrontListAsA<ItemType>::getEntry(int position) const throw(PrecondViolatedExcep)
{
    	
	return LinkedList<ItemType>::getEntry(position);
}
