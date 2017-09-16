---
title: lock_guard Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- mutex/std::lock_guard
- mutex/std::lock_guard::lock_guard
dev_langs:
- C++
ms.assetid: 57121f0d-9c50-481c-b971-54e64df864e0
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 56bff026e272b14dd6b7a08d23f04f7997e2a570
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="lockguard-class"></a>lock_guard Class
Represents a template that can be instantiated to create an object whose destructor unlocks a `mutex`.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class Mutex>
class lock_guard;
```  
  
## <a name="remarks"></a>Remarks  
 The template argument `Mutex` must name a *mutex type*.  
  
## <a name="members"></a>Members  
  
### <a name="public-typedefs"></a>Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`lock_guard::mutex_type`|Synonym for the template argument `Mutex`.|  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[lock_guard](#lock_guard)|Constructs a `lock_guard` object.|  
|[lock_guard::~lock_guard Destructor](#dtorlock_guard_destructor)|Unlocks the `mutex` that was passed to the constructor.|  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<mutex>  
  
 **Namespace:** std  
  
##  <a name="lock_guard"></a>  lock_guard::lock_guard Constructor  
 Constructs a `lock_guard` object.  
  
```cpp  
explicit lock_guard(mutex_type& Mtx);

lock_guard(mutex_type& Mtx, adopt_lock_t);
```  
  
### <a name="parameters"></a>Parameters  
 `Mtx`  
 A *mutex type* object.  
  
### <a name="remarks"></a>Remarks  
 The first constructor constructs an object of type `lock_guard` and locks `Mtx`. If `Mtx` is not a recursive mutex, it must be unlocked when this constructor is called.  
  
 The second constructor does not lock `Mtx`. `Mtx` must be locked when this constructor is called. The constructor throws no exceptions.  
  
##  <a name="dtorlock_guard_destructor"></a>  lock_guard::~lock_guard Destructor  
 Unlocks the `mutex` that was passed to the constructor.  
  
```
~lock_guard() noexcept;
```  
  
### <a name="remarks"></a>Remarks  
 If the `mutex` does not exist when the destructor runs, the behavior is undefined.  
  
## <a name="see-also"></a>See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)




