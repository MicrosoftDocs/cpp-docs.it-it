---
title: Classe time_point | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- chrono/std::chrono::time_point
- chrono/std::chrono::time_point::time_point
- chrono/std::chrono::time_point::max
- chrono/std::chrono::time_point::min
- chrono/std::chrono::time_point::time_since_epoch
dev_langs: C++
ms.assetid: 18be1e52-57b9-489a-8a9b-f58894f0aaad
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
helpviewer_keywords: std::chrono [C++], time_point
ms.workload: cplusplus
ms.openlocfilehash: 4b8f6880968b899bcf28b60fa69edf1e4250d4d5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="timepoint-class"></a>Classe time_point
Una classe `time_point` descrive un tipo che rappresenta un punto nel tempo. Contiene un oggetto di tipo [duration](../standard-library/duration-class.md) che archivia il tempo trascorso dopo il periodo rappresentato dall'argomento di modello `Clock`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Clock,  
    class Duration = typename Clock::duration>  
class time_point;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`time_point::clock`|Sinonimo del parametro di modello `Clock`.|  
|`time_point::duration`|Sinonimo del parametro di modello `Duration`.|  
|`time_point::period`|Sinonimo del nome di tipo annidato `duration::period`.|  
|`time_point::rep`|Sinonimo del nome di tipo annidato `duration::rep`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[time_point](#time_point)|Costruisce un oggetto `time_point`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[max](#max)|Specifica il limite superiore per `time_point::ref`.|  
|[min](#min)|Specifica il limite inferiore per `time_point::ref`.|  
|[time_since_epoch](#time_since_epoch)|Restituisce il valore `duration` archiviato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[time_point::operator+=](#op_add_eq)|Somma un valore specificato alla durata archiviata.|  
|[time_point::operator-=](#operator-_eq)|Sottrae un valore specificato alla durata archiviata.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<chrono >  
  
 **Spazio dei nomi:**std::chrono  
  
##  <a name="max"></a>time_point:: max
 Metodo statico che restituisce il limite superiore dei valori di tipo `time_point::ref`.  
  
```  
static constexpr time_point max();
```  
  
### <a name="return-value"></a>Valore restituito  
 In effetti, restituisce `time_point(duration::max())`.  
  
##  <a name="min"></a>time_point:: min
 Metodo statico che restituisce il limite inferiore dei valori di tipo `time_point::ref`.  
  
```  
static constexpr time_point min();
```  
  
### <a name="return-value"></a>Valore restituito  
 In effetti, restituisce `time_point(duration::min())`.  
  
##  <a name="op_add_eq"></a>  time_point::operator+=  
 Somma un valore specificato al valore [duration](../standard-library/duration-class.md) archiviato.  
  
```  
time_point& operator+=(const duration& Dur);
```  
  
### <a name="parameters"></a>Parametri  
 `Dur`  
 Oggetto `duration`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `time_point` dopo l'esecuzione della somma.  
  
##  <a name="time_point__operator-_eq"></a>  time_point::operator-=  
 Sottrae un valore specificato al valore [duration](../standard-library/duration-class.md) archiviato.  
  
```  
time_point& operator-=(const duration& Dur);
```  
  
### <a name="parameters"></a>Parametri  
 `Dur`  
 Oggetto `duration`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `time_point` dopo l'esecuzione della sottrazione.  
  
##  <a name="time_point"></a>  Costruttore time_point::time_point  
 Costruisce un oggetto `time_point`.  
  
```  
constexpr time_point();

constexpr explicit time_point(const duration& Dur);

template <class Duration2>  
constexpr time_point(const time_point<clock, Duration2>& Tp);
```  
  
### <a name="parameters"></a>Parametri  
 `Dur`  
 Oggetto [duration](../standard-library/duration-class.md).  
  
 `Tp`  
 Oggetto `time_point`.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore crea un oggetto il cui valore `duration` archiviato è uguale a [duration::zero](../standard-library/duration-class.md#zero).  
  
 Il secondo costruttore crea un oggetto il cui valore duration archiviato è uguale a `Dur`. A meno che `is_convertible<Duration2, duration>` non *sia true*, il secondo costruttore non partecipa alla risoluzione dell'overload. Per altre informazioni, vedere [<type_traits>](../standard-library/type-traits.md).  
  
 Il terzo costruttore inizializza il suo valore `duration` usando `Tp.time_since_epoch()`.  
  
##  <a name="time_since_epoch"></a>time_point:: time_since_epoch
 Recupera il valore [duration](../standard-library/duration-class.md) archiviato.  
  
```  
constexpr duration time_since_epoch() const;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono>](../standard-library/chrono.md)

