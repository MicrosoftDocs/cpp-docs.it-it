---
title: Gestione dell&quot;ora | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.memory
dev_langs:
- C++
helpviewer_keywords:
- dates, run-time library members
- time, time management
- date functions
- time functions
ms.assetid: 93599220-c011-45d5-978f-12182abfdd2f
caps.latest.revision: 18
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
translationtype: Human Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: baf07427498c6b1f60ceca67112251be794a7451
ms.lasthandoff: 03/29/2017

---
# <a name="time-management"></a>Gestione dell'ora
Usare queste funzioni per ottenere l'ora corrente e convertirla, regolarla e memorizzarla in base alle necessità. L'ora corrente è l'ora di sistema.  
  
 Le routine `_ftime` e `localtime` usano la variabile di ambiente `TZ` . Se il valore `TZ` non è impostato, la libreria run-time prova a usare le informazioni del fuso orario specificate dal sistema operativo. Se tali informazioni non sono disponibili, queste funzioni usano il valore predefinito di PST8PDT. Per altre informazioni su `TZ`, vedere [_tzset](../c-runtime-library/reference/tzset.md). Vedere anche [_daylight, _dstbias, _timezone e _tzname](../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).  
  
### <a name="time-routines"></a>Routine per data ed ora  
  
|Funzione|Uso|  
|--------------|---------|  
|[asctime, _wasctime](../c-runtime-library/reference/asctime-wasctime.md), [asctime_s, _wasctime_s](../c-runtime-library/reference/asctime-s-wasctime-s.md)|Converte l'ora dal tipo `struct tm` in una stringa di caratteri. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|  
|[clock](../c-runtime-library/reference/clock.md)|Restituisce il tempo trascorso per il processo.|  
|[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md), [_ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)|Converte l'ora dal tipo `time_t`, `__time32_t` o `__time64_t` in una stringa di caratteri. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|  
|[difftime, _difftime32, _difftime64](../c-runtime-library/reference/difftime-difftime32-difftime64.md)|Calcola la differenza tra due orari.|[System::DateTime::Subtract](https://msdn.microsoft.com/en-us/library/system.datetime.subtract.aspx)|  
|[_ftime, _ftime32, _ftime64](../c-runtime-library/reference/ftime-ftime32-ftime64.md),[_ftime_s, _ftime32_s, _ftime64_s](../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md)|Memorizza l'ora di sistema corrente nella variabile di tipo `struct _timeb` o `struct``__timeb64` Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|  
|[_futime, _futime32, _futime64](../c-runtime-library/reference/futime-futime32-futime64.md)|Imposta la data della modifica su un file aperto|  
|[gmtime, _gmtime32, _gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md), [gmtime_s, _gmtime32_s, _gmtime64_s](../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)|Converte l'ora dal tipo `time_t` a `struct tm` o dal tipo `__time64_t` a `struct tm`. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|  
|[localtime, _localtime32, _localtime64](../c-runtime-library/reference/localtime-localtime32-localtime64.md), [localtime_s, _localtime32_s, _localtime64_s](../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)|Converte l'ora dal tipo `time_t` a `struct tm` o dal tipo `__time64_t` a `struct tm`con la correzione locale. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|  
|[_mkgmtime, _mkgmtime32, _mkgmtime64](../c-runtime-library/reference/mkgmtime-mkgmtime32-mkgmtime64.md)|Converte l'ora in un valore del calendario GMT (Greenwich Mean Time).|  
|[mktime, _mktime32, _mktime64](../c-runtime-library/reference/mktime-mktime32-mktime64.md)|Converte l'ora in un valore del calendario.|  
|[_strdate, _wstrdate](../c-runtime-library/reference/strdate-wstrdate.md), [_strdate_s, _wstrdate_s](../c-runtime-library/reference/strdate-s-wstrdate-s.md)|Restituisce una data di sistema come stringa. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|  
|[strftime, wcsftime, _strftime_l, _wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)|Formato della stringa di data e ora per l'uso internazionale.|  
|[_strtime, _wstrtime](../c-runtime-library/reference/strtime-wstrtime.md), [_strtime_s, _wstrtime_s](../c-runtime-library/reference/strtime-s-wstrtime-s.md)|Restituisce una data di sistema corrente come stringa. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|  
|[time, _time32, _time64](../c-runtime-library/reference/time-time32-time64.md)|Ottiene l'ora di sistema corrente come tipo `time_t`, `__time32_t` o come `__time64_t`.|  
|[_tzset](../c-runtime-library/reference/tzset.md)|Imposta le variabili di tempo esterne dalla variabile di data e ora dell'ambiente `TZ`.|  
|[_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md)|Imposta l'ora di modifica per il file specificato usando l'ora corrente o di valore temporale memorizzato nella struttura.|  
  
> [!NOTE]
>  In tutte le versioni di Microsoft C/C++ ad eccezione della versione 7.0 e in tutte le versioni di Visual C++, la funzione ora restituisce l'ora corrente come numero di secondi trascorsi dalla mezzanotte del 1° gennaio 1970. Nella versione 7.0 di Microsoft C/C++, `time` restituiva il tempo corrente come il numero di secondi trascorsi dalla mezzanotte del 31 dicembre 1899.  
  
> [!NOTE]
>  Nelle versioni di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] e Microsoft C/C++ precedenti Visual C++ 2005, `time_t` è un `long int` (a 32 bit) e quindi non può essere usato per esprimere date dopo le 3.14.07 del 19 gennaio 2038, UTC. `time_t` è ora per impostazione predefinita equivalente a `__time64_t`, ma la definizione di `_USE_32BIT_TIME_T` modifica `time_t` in `__time32_t` e forza numerose funzioni a chiamare le versioni che accettano `time_t` a 32 bit. Per altre informazioni, vedere [Tipi standard](../c-runtime-library/standard-types.md) e i commenti della documentazione per le singole funzioni relative all'ora.  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
