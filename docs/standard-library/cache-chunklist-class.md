---
title: cache_chunklist Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators/stdext::cache_chunklist
- allocators/stdext::cache_chunklist::allocate
- allocators/stdext::cache_chunklist::deallocate
dev_langs:
- C++
helpviewer_keywords:
- stdext::cache_chunklist
- stdext::cache_chunklist [C++], allocate
- stdext::cache_chunklist [C++], deallocate
ms.assetid: af19eccc-4ae7-4a34-bbb2-81e397424cb9
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
ms.openlocfilehash: 6ffeb2a0ac7f1d5b6f45ea351e8448475b232b88
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="cachechunklist-class"></a>cache_chunklist Class
Defines a [block allocator](../standard-library/allocators-header.md) that allocates and deallocates memory blocks of a single size.  
  
## <a name="syntax"></a>Syntax  
  
```
template <std::size_t Sz, std::size_t Nelts = 20>  
class cache_chunklist
```  
  
#### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Sz`|The number of elements in the array to be allocated.|  
  
## <a name="remarks"></a>Remarks  
 This template class uses `operator new` to allocate chunks of raw memory, suballocating blocks to allocate storage for a memory block when needed; it stores deallocated memory blocks in a separate free list for each chunk, and uses `operator delete` to deallocate a chunk when none of its memory blocks is in use.  
  
 Each memory block holds `Sz` bytes of usable memory and a pointer to the chunk that it belongs to. Each chunk holds `Nelts` memory blocks, three pointers, an int and the data that `operator new` and `operator delete` require.  
  
### <a name="constructors"></a>Constructors  
  
|||  
|-|-|  
|[cache_chunklist](#cache_chunklist)|Constructs an object of type `cache_chunklist`.|  
  
### <a name="member-functions"></a>Member Functions  
  
|||  
|-|-|  
|[allocate](#allocate)|Allocates a block of memory.|  
|[deallocate](#deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="allocate"></a>  cache_chunklist::allocate  
 Allocates a block of memory.  
  
```
void *allocate(std::size_t count);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`count`|The number of elements in the array to be allocated.|  
  
### <a name="return-value"></a>Return Value  
 A pointer to the allocated object.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="cache_chunklist"></a>  cache_chunklist::cache_chunklist  
 Constructs an object of type `cache_chunklist`.  
  
```
cache_chunklist();
```  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="deallocate"></a>  cache_chunklist::deallocate  
 Frees a specified number of objects from storage beginning at a specified position.  
  
```
void deallocate(void* ptr, std::size_t count);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`ptr`|A pointer to the first object to be deallocated from storage.|  
|`count`|The number of objects to be deallocated from storage.|  
  
### <a name="remarks"></a>Remarks  
  
## <a name="see-also"></a>See Also  
 [\<allocators>](../standard-library/allocators-header.md)




