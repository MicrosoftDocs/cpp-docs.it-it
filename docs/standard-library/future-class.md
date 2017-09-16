---
title: future Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- future/std::future
- future/std::future::future
- future/std::future::get
- future/std::future::share
- future/std::future::valid
- future/std::future::wait
- future/std::future::wait_for
- future/std::future::wait_until
dev_langs:
- C++
ms.assetid: 495e82c3-5341-4e37-87dd-b40107fbdfb6
caps.latest.revision: 13
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
helpviewer_keywords:
- std::future [C++]
- std::future [C++], future
- std::future [C++], get
- std::future [C++], share
- std::future [C++], valid
- std::future [C++], wait
- std::future [C++], wait_for
- std::future [C++], wait_until
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 70ecd59354ed064d91eaeb000b5331bbeca43923
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="future-class"></a>future Class
Describes an *asynchronous return object*.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class Ty>
class future;
```  
  
## <a name="remarks"></a>Remarks  
 Each standard *asynchronous provider* returns an object whose type is an instantiation of this template. A `future` object provides the only access to the asynchronous provider that it is associated with. If you need multiple asynchronous return objects that are associated with the same asynchronous provider, copy the `future` object to a [shared_future](../standard-library/shared-future-class.md) object.  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[future](#future)|Constructs a `future` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[get](#get)|Retrieves the result that is stored in the associated asynchronous state.|  
|[share](#share)|Converts the object to a `shared_future`.|  
|[valid](#valid)|Specifies whether the object is not empty.|  
|[wait](#wait)|Blocks the current thread until the associated asynchronous state is ready.|  
|[wait_for](#wait_for)|Blocks until the associated asynchronous state is ready or until the specified time has elapsed.|  
|[wait_until](#wait_until)|Blocks until the associated asynchronous state is ready or until a specified point in time.|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[future::operator=](#op_eq)|Transfers the associated asynchronous state from a specified object.|  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<future>  
  
 **Namespace:** std  
  
##  <a name="future"></a>  future::future Constructor  
 Constructs a `future` object.  
  
```
future() noexcept;
future(future&& Other) noexcept;
```  
  
### <a name="parameters"></a>Parameters  
 `Other`  
 A `future` object.  
  
### <a name="remarks"></a>Remarks  
 The first constructor constructs a `future` object that has no associated asynchronous state.  
  
 The second constructor constructs a `future` object and transfers the associated asynchronous state from `Other`. `Other` no longer has an associated asynchronous state.  
  
##  <a name="get"></a>  future::get  
 Retrieves the result that is stored in the associated asynchronous state.  
  
```
Ty get();
```  
  
### <a name="return-value"></a>Return Value  
 If the result is an exception, the method rethrows it. Otherwise, the result is returned.  
  
### <a name="remarks"></a>Remarks  
 Before it retrieves the result, this method blocks the current thread until the associated asynchronous state is ready.  
  
 For the partial specialization `future<Ty&>`, the stored value is effectively a reference to the object that was passed to the asynchronous provider as the return value.  
  
 Because no stored value exists for the specialization `future<void>`, the method returns `void`.  
  
 In other specializations, the method moves its return value from the stored value. Therefore, call this method only once.  
  
##  <a name="op_eq"></a>  future::operator=  
 Transfers an associated asynchronous state from a specified object.  
  
```
future& operator=(future&& Right) noexcept;
```  
  
### <a name="parameters"></a>Parameters  
 `Right`  
 A `future` object.  
  
### <a name="return-value"></a>Return Value  
 `*this`  
  
### <a name="remarks"></a>Remarks  
 After the transfer, `Right` no longer has an associated asynchronous state.  
  
##  <a name="share"></a>  future::share  
 Converts the object to a [shared_future](../standard-library/shared-future-class.md) object.  
  
```
shared_future<Ty> share();
```  
  
### <a name="return-value"></a>Return Value  
 `shared_future(move(*this))`  
  
##  <a name="valid"></a>  future::valid  
 Specifies whether the object has an associated asynchronous state.  
  
```
bool valid() noexcept;
```  
  
### <a name="return-value"></a>Return Value  
 `true` if the object has an associated asynchronous state; otherwise, `false`.  
  
##  <a name="wait"></a>  future::wait  
 Blocks the current thread until the associated asynchronous state is *ready*.  
  
```cpp  
void wait() const;
```  
  
### <a name="remarks"></a>Remarks  
 An associated asynchronous state is *ready* only if its asynchronous provider has stored a return value or stored an exception.  
  
##  <a name="wait_for"></a>  future::wait_for  
 Blocks the current thread until the associated asynchronous state is *ready* or until a specified time interval has elapsed.  
  
```
template <class Rep, class Period>
future_status wait_for(const chrono::duration<Rep, Period>& Rel_time) const;
```  
  
### <a name="parameters"></a>Parameters  
 `Rel_time`  
 A [chrono::duration](../standard-library/duration-class.md) object that specifies a maximum time interval that the thread blocks.  
  
### <a name="return-value"></a>Return Value  
 A [future_status](../standard-library/future-enums.md#future_status) that indicates the reason for returning.  
  
### <a name="remarks"></a>Remarks  
 An associated asynchronous state is ready only if its asynchronous provider has stored a return value or stored an exception.  
  
##  <a name="wait_until"></a>  future::wait_until  
 Blocks the current thread until the associated asynchronous state is *ready* or until after a specified time point.  
  
```cpp  
template <class Clock, class Duration>
future_status wait_until(const chrono::time_point<Clock, Duration>& Abs_time) const;
```  
  
### <a name="parameters"></a>Parameters  
 `Abs_time`  
 A [chrono::time_point](../standard-library/time-point-class.md) object that specifies a time after which the thread can unblock.  
  
### <a name="return-value"></a>Return Value  
 A [future_status](../standard-library/future-enums.md#future_status) that indicates the reason for returning.  
  
### <a name="remarks"></a>Remarks  
 An associated asynchronous state is *ready* only if its asynchronous provider has stored a return value or stored an exception.  
  
## <a name="see-also"></a>See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<future>](../standard-library/future.md)




