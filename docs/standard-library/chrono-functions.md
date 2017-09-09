---
title: '&lt;chrono&gt; functions | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- chrono/std::duration_cast
- chrono/std::time_point_cast
ms.assetid: d6800e15-77a1-4df3-900e-d8b2fee190c7
caps.latest.revision: 10
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 7fcec92b9d5b3dabcb0b5c53c1b9bf581dd71cab
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltchronogt-functions"></a>&lt;chrono&gt; functions
||||  
|-|-|-|  
|[duration_cast](#duration_cast)|[time_point_cast](#time_point_cast)|  
  

##  <a name="duration_cast"></a>  duration_cast
 Casts a `duration` object to a specified type.  
  
```  
template <class To, class Rep, class Period>  
constexpr To duration_cast(const duration<Rep, Period>& Dur);
```  
  
### <a name="return-value"></a>Return Value  
 A `duration` object of type `To` that represents the time interval `Dur`, which is truncated if it has to fit into the target type.  
  
### <a name="remarks"></a>Remarks  
 If `To` is an instantiation of `duration`, this function does not participate in overload resolution.  
  
##  <a name="time_point_cast"></a>  time_point_cast
 Casts a [time_point](../standard-library/time-point-class.md) object to a specified type.  
  
```  
template <class To, class Clock, class Duration>  
time_point<Clock, To> time_point_cast(const time_point<Clock, Duration>& Tp);
```  
  
### <a name="return-value"></a>Return Value  
 A `time_point` object that has a duration of type `To`.  
  
### <a name="remarks"></a>Remarks  
 Unless `To` is an instantiation of [duration](../standard-library/duration-class.md), this function does not participate in overload resolution.  
  
## <a name="see-also"></a>See Also  
 [\<chrono>](../standard-library/chrono.md)


