---
title: "Gestione dell&#39;ora | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.memory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "date, membri di librerie di runtime"
  - "ora, gestione dell'ora"
  - "funzioni data"
  - "funzioni ora"
ms.assetid: 93599220-c011-45d5-978f-12182abfdd2f
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Gestione dell&#39;ora
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Usare queste funzioni per ottenere l'ora corrente e convertirla, regolarla e memorizzarla in base alle necessità. L'ora corrente è l'ora di sistema.  
  
 Le routine `_ftime`  e `localtime` usano la variabile di ambiente `TZ`. Se il valore `TZ` non è impostato, la libreria run\-time prova a usare le informazioni del fuso orario specificate dal sistema operativo. Se tali informazioni non sono disponibili, queste funzioni usano il valore predefinito di PST8PDT. Per altre informazioni su `TZ`, vedere [\_tzset](../c-runtime-library/reference/tzset.md); vedere anche [\_daylight, fuso orario e \_tzname.](../c-runtime-library/daylight-dstbias-timezone-and-tzname.md)  
  
### Routine per data ed ora  
  
|Funzione|Uso|Equivalente .NET Framework|  
|--------------|---------|--------------------------------|  
|[asctime, \_wasctime](../c-runtime-library/reference/asctime-wasctime.md), [asctime\_s, \_wasctime\_s](../c-runtime-library/reference/asctime-s-wasctime-s.md)|Converte l'ora dal tipo `struct tm` in una stringa di caratteri. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|[System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx), [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx), [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx), [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx), [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)|  
|[clock](../c-runtime-library/reference/clock.md)|Restituisce il tempo trascorso per il processo.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md), [\_ctime\_s, \_ctime32\_s, \_ctime64\_s, \_wctime\_s, \_wctime32\_s, \_wctime64\_s](../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)|Converte l'ora dal tipo `time_t`, `__time32_t` o `__time64_t` in una stringa di caratteri. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|[System::DateTime::GetDateTimeFormats](https://msdn.microsoft.com/en-us/library/system.datetime.getdatetimeformats.aspx), [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx), [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx), [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx)|  
|[difftime, \_difftime32, \_difftime64](../c-runtime-library/reference/difftime-difftime32-difftime64.md)|Calcola la differenza tra due orari.|[System::DateTime::Subtract](https://msdn.microsoft.com/en-us/library/system.datetime.subtract.aspx)|  
|[\_ftime, \_ftime32, \_ftime64](../c-runtime-library/reference/ftime-ftime32-ftime64.md),[\_ftime\_s, \_ftime32\_s, \_ftime64\_s](../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md)|Memorizza l'ora di sistema corrente nella variabile di tipo `struct _timeb` o `struct` `__timeb64`. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|[System::DateTime::Now](https://msdn.microsoft.com/en-us/library/system.datetime.now.aspx)|  
|[\_futime, \_futime32, \_futime64](../c-runtime-library/reference/futime-futime32-futime64.md)|Imposta la data della modifica su un file aperto|[System::IO::File::SetLastAccessTime](https://msdn.microsoft.com/en-us/library/system.io.file.setlastaccesstime.aspx), [System::IO::File::SetLastWriteTime](https://msdn.microsoft.com/en-us/library/system.io.file.setlastwritetime.aspx), [System::IO::File::SetCreationTime](https://msdn.microsoft.com/en-us/library/system.io.file.setcreationtime.aspx)|  
|[gmtime, \_gmtime32, \_gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md), [gmtime\_s, \_gmtime32\_s, \_gmtime64\_s](../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)|Converte l'ora dal tipo `time_t` a `struct tm` o dal tipo `__time64_t` a `struct tm`.Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|[System::DateTime::UtcNow](https://msdn.microsoft.com/en-us/library/system.datetime.utcnow.aspx), [System::DateTime::ToUniversalTime](https://msdn.microsoft.com/en-us/library/system.datetime.touniversaltime.aspx)|  
|[localtime, \_localtime32, \_localtime64](../c-runtime-library/reference/localtime-localtime32-localtime64.md), [localtime\_s, \_localtime32\_s, \_localtime64\_s](../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)|Converte l'ora dal tipo `time_t` a `struct tm` o dal tipo `__time64_t` a `struct tm`con la correzione locale. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|[System::DateTime::ToLocalTime](https://msdn.microsoft.com/en-us/library/system.datetime.tolocaltime.aspx)|  
|[\_mkgmtime, \_mkgmtime32, \_mkgmtime64](../c-runtime-library/reference/mkgmtime-mkgmtime32-mkgmtime64.md)|Converte l'ora in un valore del calendario GMT \(Greenwich Mean Time\).|[System::DateTime::ToUniversalTime](https://msdn.microsoft.com/en-us/library/system.datetime.touniversaltime.aspx)|  
|[mktime, \_mktime32, \_mktime64](../c-runtime-library/reference/mktime-mktime32-mktime64.md)|Converte l'ora in un valore del calendario.|[System::DateTime::DateTime](Overload:System.DateTime.)|  
|[\_strdate, \_wstrdate](../c-runtime-library/reference/strdate-wstrdate.md), [\_strdate\_s, \_wstrdate\_s](../c-runtime-library/reference/strdate-s-wstrdate-s.md)|Restituisce una data di sistema come stringa. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[strftime, wcsftime, \_strftime\_l, \_wcsftime\_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)|Formato della stringa di data e ora per l'uso internazionale.|[System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx), [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx), [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx), [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx), [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)|  
|[\_strtime, \_wstrtime](../c-runtime-library/reference/strtime-wstrtime.md), [\_strtime\_s, \_wstrtime\_s](../c-runtime-library/reference/strtime-s-wstrtime-s.md)|Restituisce una data di sistema corrente come stringa. Le versioni di queste funzioni con il suffisso `_s` sono più sicure.|[System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx), [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx), [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx), [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx), [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)|  
|[time, \_time32, \_time64](../c-runtime-library/reference/time-time32-time64.md)|Ottiene l'ora di sistema corrente come tipo `time_t`, `__time32_t` o come `__time64_t`.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_tzset](../c-runtime-library/reference/tzset.md)|Imposta le variabili di tempo esterne dalla variabile di data e ora dell'ambiente `TZ`.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_utime, \_utime32, \_utime64, \_wutime, \_wutime32, \_wutime64](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md)|Imposta l'ora di modifica per il file specificato usando l'ora corrente o di valore temporale memorizzato nella struttura.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).|  
  
> [!NOTE]
>  In tutte le versioni di Microsoft C\/C\+\+ ad eccezione della versione 7.0 e in tutte le versioni di Visual C\+\+, la funzione ora restituisce l'ora corrente come numero di secondi trascorsi dalla mezzanotte del 1° gennaio 1970. Nella versione 7.0 di Microsoft C\/C\+\+, `time`  restituiva il tempo corrente come il numero di secondi trascorsi dalla mezzanotte del 31 dicembre 1899.  
  
> [!NOTE]
>  Nelle versioni di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] e Microsoft C\/C\+\+ prima di Visual C\+\+ 2005, `time_t`  era un `long int`  \(a 32 bit\) e quindi non poteva essere usato per esprimere date dopo le 3:14:07 del 19 Gennaio 2038, UTC.`time_t`  è ora per impostazione predefinita equivalente a `__time64_t`, ma definire `_USE_32BIT_TIME_T`  modifica `time_t`  in `__time32_t`  e forza numerose funzioni ora a chiamare le versioni che accettano `time_t` a 32 bit. Per altre informazioni, vedere [Tipi standard](../c-runtime-library/standard-types.md) e i commenti della documentazione per le singole funzioni ora.  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)