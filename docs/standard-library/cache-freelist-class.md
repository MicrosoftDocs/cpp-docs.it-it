---
title: cache_freelist Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators/stdext::cache_freelist
- allocators/stdext::cache_freelist::allocate
- allocators/stdext::cache_freelist::deallocate
dev_langs:
- C++
helpviewer_keywords:
- stdext::cache_freelist
- stdext::cache_freelist [C++], allocate
- stdext::cache_freelist [C++], deallocate
ms.assetid: 840694de-36ba-470f-8dae-2b723d5a8cd9
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.openlocfilehash: d57430ebb8046a4b30aa112563feea7d6fc77cf2
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="cachefreelist-class"></a>cache_freelist Class
Defines a [block allocator](../standard-library/allocators-header.md) that allocates and deallocates memory blocks of a single size.  
  
## <a name="syntax"></a>Syntax  
  
```
template <std::size_t Sz, class Max>  
class cache_freelist
```  
  
#### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Sz`|The number of elements in the array to be allocated.|  
|`Max`|The max class representing the maximum size of the free list. This can be [max_fixed_size](../standard-library/max-fixed-size-class.md), [max_none](../standard-library/max-none-class.md), [max_unbounded](../standard-library/max-unbounded-class.md), or [max_variable_size](../standard-library/max-variable-size-class.md).|  
  
## <a name="remarks"></a>Remarks  
 The cache_freelist template class maintains a free list of memory blocks of size `Sz`. When the free list is full it uses `operator delete` to deallocate memory blocks. When the free list is empty it uses `operator new` to allocate new memory blocks. The maximum size of the free list is determined by the class max class passed in the `Max` parameter.  
  
 Each memory block holds `Sz` bytes of usable memory and the data that `operator new` and `operator delete` require.  
  
### <a name="constructors"></a>Constructors  
  
|||  
|-|-|  
|[cache_freelist](#cache_freelist)|Constructs an object of type `cache_freelist`.|  
  
### <a name="member-functions"></a>Member Functions  
  
|||  
|-|-|  
|[allocate](#allocate)|Allocates a block of memory.|  
|[deallocate](#deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="allocate"></a>  cache_freelist::allocate  
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
  
##  <a name="cache_freelist"></a>  cache_freelist::cache_freelist  
 Constructs an object of type `cache_freelist`.  
  
```
cache_freelist();
```  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="deallocate"></a>  cache_freelist::deallocate  
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




