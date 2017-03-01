---
title: Funzioni &lt;chrono&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: d6800e15-77a1-4df3-900e-d8b2fee190c7
caps.latest.revision: 10
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 9824bdc37d1ae2d1d3a8e42c727986fd2a194514
ms.lasthandoff: 02/24/2017

---
# <a name="ltchronogt-functions"></a>Funzioni &lt;chrono&gt;
||||  
|-|-|-|  
|[Funzione duration_cast](#duration_cast_function)|[Funzione time_point_cast](#time_point_cast_function)|  
  

##  <a name="a-namedurationcastfunctiona--durationcast-function"></a><a name="duration_cast_function"></a>  Funzione duration_cast  
 Esegue il cast di un oggetto `duration` in un tipo specificato.  
  
```  
template <class To, class Rep, class Period>  
constexpr To duration_cast(const duration<Rep, Period>& Dur);
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `duration` di tipo `To` che rappresenta l'intervallo di tempo `Dur`, che viene troncato se deve rientrare nel tipo di destinazione.  
  
### <a name="remarks"></a>Note  
 Se `To` rappresenta una creazione di istanza di `duration`, questa funzione non fa parte della risoluzione dell'overload.  
  
##  <a name="a-nametimepointcastfunctiona--timepointcast-function"></a><a name="time_point_cast_function"></a>  Funzione time_point_cast  
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


