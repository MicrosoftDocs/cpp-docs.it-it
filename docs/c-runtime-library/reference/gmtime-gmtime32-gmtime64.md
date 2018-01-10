---
title: gmtime, _gmtime32, _gmtime64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _gmtime32
- gmtime
- _gmtime64
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-time-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- gmtime
- _gmtime32
- _gmtime64
dev_langs: C++
helpviewer_keywords:
- gmtime32 function
- _gmtime64 function
- gmtime function
- time functions
- _gmtime32 function
- gmtime64 function
- time structure conversion
ms.assetid: 315501f3-477e-475d-a414-ef100ee0db27
caps.latest.revision: "30"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 78213f97021ad1e7c89d5dfde6c1cea8b6e12a7f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="gmtime-gmtime32-gmtime64"></a>gmtime, _gmtime32, _gmtime64
Converte un valore di ora in una struttura. Sono disponibili versioni più sicure di queste funzioni. Vedere [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct tm *gmtime(   
   const time_t *timer   
);  
struct tm *_gmtime32(   
   const __time32_t *timer   
);  
struct tm *_gmtime64(   
   const __time64_t *timer   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `timer`  
 Puntatore all'ora archiviata. L'ora è rappresentata come secondi trascorsi dalla mezzanotte (00.00.00) del 1 gennaio 1970 nel formato UTC (Coordinated Universal Time).  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore a una struttura di tipo [tm](../../c-runtime-library/standard-types.md). I campi della struttura restituita contengono il valore valutato dell'argomento `timer` in formato UTC anziché nell'ora locale. Ognuno dei campi della struttura è di tipo `int`, come segue:  
  
 `tm_sec`  
 Secondi dopo minuto (0 - 59).  
  
 `tm_min`  
 Minuti dopo l'ora (0 - 59).  
  
 `tm_hour`  
 Ore da mezzanotte (0 - 23).  
  
 `tm_mday`  
 Giorno del mese (1-31).  
  
 `tm_mon`  
 Mese (0 - 11; Gennaio = 0).  
  
 `tm_year`  
 Anno (anno corrente meno 1900).  
  
 `tm_wday`  
 Giorno della settimana (0 - 6. Domenica = 0).  
  
 `tm_yday`  
 Giorno dell'anno (0 - 365; Il 1 ° gennaio = 0).  
  
 `tm_isdst`  
 Sempre 0 per `gmtime`.  
  
 Entrambe le versioni a 32 bit e 64 bit di `gmtime`, `mktime`, `mkgmtime` e `localtime` usano una sola struttura `tm` comune per ogni thread per la conversione. Ogni chiamata a una di queste funzioni elimina il risultato di una chiamata precedente. Se `timer` rappresenta una data precedente alla mezzanotte dell'1 gennaio 1970, `gmtime` restituisce `NULL`. Non vi è restituzione di errori.  
  
 `_gmtime64`, che usa la struttura `__time64_t`, consente di esprimere le date fino alle 23.59.59 del 31 dicembre 3000 UTC, mentre `_gmtime32` rappresenta solo le date fino alle 23.59.59 del 18 gennaio 2038 UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per entrambe le funzioni.  
  
 `gmtime` è una funzione inline equivalente a `_gmtime64` e `time_t` è equivalente a `__time64_t` a meno che non sia definito `_USE_32BIT_TIME_T`. Se è necessario forzare il compilatore a interpretare `time_t` come la versione precedente di `time_t` a 32 bit, è possibile definire `_USE_32BIT_TIME_T`, ma in questo modo `gmtime` viene allineata a `_gmtime32` e `time_t` deve essere definita come `__time32_t`. Questa operazione non è consigliabile perché non è consentita nelle piattaforme a 64 bit e in ogni caso potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038.  
  
 Queste funzioni convalidano i relativi parametri. Se `timer` è un puntatore Null o se il valore timer è negativo, queste funzioni richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono `NULL` e impostano `errno` su `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La funzione `_gmtime32` suddivide il valore `timer` e lo archivia in una struttura allocata in modo statico di tipo `tm`, definita in TIME.H. Il valore di `timer` viene in genere ottenuto da una chiamata alla funzione `time`.  
  
> [!NOTE]
>  Nella maggior parte dei casi l'ambiente di destinazione tenta di determinare se è in vigore l'ora legale. La libreria di runtime C presuppone l'uso delle regole relative agli Stati Uniti per implementare il calcolo dell'ora legale.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`gmtime`|\<time.h>|  
|`_gmtime32`|\<time.h>|  
|`_gmtime64`|\<time.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_gmtime.c  
// compile with: /W3  
// This program uses _gmtime64 to convert a long-  
// integer representation of coordinated universal time  
// to a structure named newtime, then uses asctime to  
// convert this structure to an output string.  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   struct tm *newtime;  
   __int64 ltime;  
   char buff[80];  
  
   _time64( &ltime );  
  
   // Obtain coordinated universal time:  
   newtime = _gmtime64( &ltime ); // C4996  
   // Note: _gmtime64 is deprecated; consider using _gmtime64_s  
   asctime_s( buff, sizeof(buff), newtime );  
   printf( "Coordinated universal time is %s\n", buff );  
}  
```  
  
```Output  
Coordinated universal time is Tue Feb 12 23:11:31 2002  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [_mkgmtime, _mkgmtime32, _mkgmtime64](../../c-runtime-library/reference/mkgmtime-mkgmtime32-mkgmtime64.md)   
 [mktime, _mktime32, _mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)