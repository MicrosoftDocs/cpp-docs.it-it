---
title: Funzioni &lt;chrono&gt; | Microsoft Docs
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
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 2df866e0f6fec9833c67e4d4ea405a826996dedf
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltchronogt-functions"></a>Funzioni &lt;chrono&gt;
||||  
|-|-|-|  
|[duration_cast](#duration_cast)|[time_point_cast](#time_point_cast)|  
  

##  <a name="duration_cast"></a>duration_cast
 Esegue il cast di un oggetto `duration` in un tipo specificato.  
  
```  
template <class To, class Rep, class Period>  
constexpr To duration_cast(const duration<Rep, Period>& Dur);
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `duration` di tipo `To` che rappresenta l'intervallo di tempo `Dur`, che viene troncato se deve rientrare nel tipo di destinazione.  
  
### <a name="remarks"></a>Note  
 Se `To` rappresenta una creazione di istanza di `duration`, questa funzione non fa parte della risoluzione dell'overload.  
  
##  <a name="time_point_cast"></a>time_point_cast
 Esegue il cast di un oggetto [time_point](../standard-library/time-point-class.md) in un tipo specificato.  
  
```  
template <class To, class Clock, class Duration>  
time_point<Clock, To> time_point_cast(const time_point<Clock, Duration>& Tp);
```  
  
### <a name="return-value"></a>Valore restituito  
 Un oggetto `time_point` con durata di tipo `To`.  
  
### <a name="remarks"></a>Note  
 A meno che `To` sia una creazione di istanza di [duration](../standard-library/duration-class.md), questa funzione non fa parte della risoluzione dell'overload.  
  
## <a name="see-also"></a>Vedere anche  
 [\<chrono>](../standard-library/chrono.md)

