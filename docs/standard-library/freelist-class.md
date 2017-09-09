---
title: freelist Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators/stdext::freelist
- allocators/stdext::freelist::pop
- allocators/stdext::freelist::push
dev_langs:
- C++
helpviewer_keywords:
- stdext::freelist
- stdext::freelist [C++], pop
- stdext::freelist [C++], push
ms.assetid: 8ad7e35c-4c80-4479-8ede-1a2497b06d71
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 5c7366bbf75bb2bc3de753c4bca23d69d279d1a7
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="freelist-class"></a>freelist Class
Manages a list of memory blocks.  
  
## <a name="syntax"></a>Syntax  
  
```
template <std::size_t Sz, class Max>  
class freelist
 : public Max
```  
  
#### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Sz`|The number of elements in the array to be allocated.|  
|`Max`|The max class representing the maximum number of elements to be stored in the free list. The max class can be [max_none](../standard-library/max-none-class.md), [max_unbounded](../standard-library/max-unbounded-class.md), [max_fixed_size](../standard-library/max-fixed-size-class.md), or [max_variable_size](../standard-library/max-variable-size-class.md).|  
  
## <a name="remarks"></a>Remarks  
 This template class manages a list of memory blocks of size `Sz` with the maximum length of the list determined by the max class passed in `Max`.  
  
### <a name="constructors"></a>Constructors  
  
|||  
|-|-|  
|[freelist](#freelist)|Constructs an object of type `freelist`.|  
  
### <a name="member-functions"></a>Member Functions  
  
|||  
|-|-|  
|[pop](#pop)|Removes the first memory block from the free list.|  
|[push](#push)|Adds a memory block to the list.|  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="freelist"></a>  freelist::freelist  
 Constructs an object of type `freelist`.  
  
```
freelist();
```  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="pop"></a>  freelist::pop  
 Removes the first memory block from the free list.  
  
```
void *pop();
```  
  
### <a name="return-value"></a>Return Value  
 Returns a pointer to the memory block removed from the list.  
  
### <a name="remarks"></a>Remarks  
 The member function returns `NULL` if the list is empty. Otherwise, it removes the first memory block from the list.  
  
##  <a name="push"></a>  freelist::push  
 Adds a memory block to the list.  
  
```
bool push(void* ptr);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`ptr`|A pointer to the memory block to be added to the free list.|  
  
### <a name="return-value"></a>Return Value  
 `true` if the `full` function of the max class returns `false`; otherwise, the `push` function returns `false`.  
  
### <a name="remarks"></a>Remarks  
 If the `full` function of the max class returns `false`, this member function adds the memory block pointed to by `ptr` to the head of the list.  
  
## <a name="see-also"></a>See Also  
 [\<allocators>](../standard-library/allocators-header.md)




