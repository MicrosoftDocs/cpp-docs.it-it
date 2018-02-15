---
title: localtime, _localtime32, _localtime64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _localtime64
- _localtime32
- localtime
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
- localtime64
- _localtime64
- localtime32
- localtime
- _localtime32
dev_langs:
- C++
helpviewer_keywords:
- localtime32 function
- _localtime32 function
- _localtime64 function
- localtime64 function
- localtime function
- time, converting values
ms.assetid: 4260ec3d-43ee-4538-b998-402a282bb9b8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1fa4d1b9c0f33df5f172500195edd4f50321d4e5
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="localtime-localtime32-localtime64"></a>localtime, _localtime32, _localtime64
Converte un valore di ora e lo corregge per il fuso orario locale. Sono disponibili versioni più sicure di queste funzioni. Vedere [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct tm *localtime(  
   const time_t *timer   
);  
struct tm *_localtime32(  
   const __time32_t *timer  
);  
struct tm *_localtime64(  
   const __time64_t *timer   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `timer`  
 Puntatore all'ora archiviata.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al risultato della struttura oppure `NULL` se la data passata alla funzione è:  
  
-   Prima di mezzanotte dell'1 gennaio 1970.  
  
-   Dopo le 03.14.07 del 19 gennaio 2038, UTC (per `_time32` e `time32_t`).  
  
-   Dopo le 23.59.59 del 31 dicembre 3000, UTC (per `_time64` e `__time64_t`).  
  
 `_localtime64`, che usa la struttura `__time64_t`, consente di esprimere le date fino alle 23.59.59 del 31 dicembre 3000 UTC (Coordinated Universal Time), mentre `_localtime32` rappresenta le date fino alle 23.59.59 del 18 gennaio 2038 UTC.  
  
 `localtime` è una funzione inline equivalente a `_localtime64` e `time_t` è equivalente a `__time64_t`. Se è necessario forzare il compilatore in modo che interpreti `time_t` come il vecchio `time_t`a 32 bit, è possibile definire `_USE_32BIT_TIME_T`. In questo modo `localtime` verrà valutata come `_localtime32`. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.  
  
 I campi del tipo di struttura [tm](../../c-runtime-library/standard-types.md) archiviano i valori seguenti, ognuno dei quali è un `int`:  
  
 `tm_sec`  
 Secondi dopo minuto (0 - 59).  
  
 `tm_min`  
 Minuti dopo l'ora (0 - 59).  
  
 `tm_hour`  
 Ore dopo la mezzanotte (0 - 23).  
  
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
 Valore positivo se è in vigore l'ora legale. 0 se l'ora legale non è in vigore. Valore negativo se lo stato dell'ora legale è sconosciuto. Se viene impostata la variabile di ambiente `TZ`, la libreria di runtime C presuppone l'uso delle regole relative agli Stati Uniti per implementare il calcolo dell'ora legale.  
  
## <a name="remarks"></a>Note  
 La funzione `localtime` converte un'ora archiviata come valore [time_t](../../c-runtime-library/standard-types.md) e archivia il risultato in una struttura di tipo `tm`. Il valore `long` `timer` rappresenta i secondi trascorsi dalla mezzanotte (00.00.00) del 1 gennaio 1970 nel formato UTC. Questo valore viene in genere ottenuto dalla funzione `time`.  
  
 Entrambe le versioni a 32 bit e 64 bit di `gmtime`, `mktime`, `mkgmtime` e `localtime` usano una singola struttura `tm` per ogni thread per la conversione. Ogni chiamata a una di queste funzioni elimina il risultato della chiamata precedente.  
  
 `localtime` applica una correzione per il fuso orario locale se l'utente imposta innanzitutto la variabile di ambiente globale `TZ`. Quando si imposta `TZ`, vengono impostate automaticamente anche altre tre variabili di ambiente (`_timezone`, `_daylight` e `_tzname`). Se la variabile `TZ` non viene impostata, `localtime` prova a usare le informazioni sul fuso orario specificate nell'applicazione Data e ora nel Pannello di controllo. Se non è possibile ottenere queste informazioni, viene usato il valore PST8PDT per impostazione predefinita, che indica il fuso orario Pacifico (Stati Uniti). Vedere [_tzset](../../c-runtime-library/reference/tzset.md) per una descrizione di queste variabili. `TZ` è un'estensione Microsoft e non fa parte della definizione standard ANSI di `localtime`.  
  
> [!NOTE]
>  L'ambiente di destinazione deve provare a determinare se è in vigore l'ora legale.  
  
 Queste funzioni convalidano i relativi parametri. Se `timer` è un puntatore Null o se il valore timer è negativo, queste funzioni richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono `NULL` e impostano `errno` su `EINVAL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`localtime`|\<time.h>|  
|`_localtime32`|\<time.h>|  
|`_localtime64`|\<time.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_localtime.cpp  
// compile with: /W3  
/* This program uses _time64 to get the current time   
 * and then uses localtime64() to convert this time to a structure   
 * representing the local time. The program converts the result   
 * from a 24-hour clock to a 12-hour clock and determines the   
 * proper extension (AM or PM).  
 */  
  
#include <stdio.h>  
#include <string.h>  
#include <time.h>  
  
int main( void )  
{  
        struct tm *newtime;  
        char am_pm[] = "AM";  
        __time64_t long_time;  
  
        _time64( &long_time );           // Get time as 64-bit integer.  
                                         // Convert to local time.  
        newtime = _localtime64( &long_time ); // C4996  
        // Note: _localtime64 deprecated; consider _localetime64_s  
  
        if( newtime->tm_hour > 12 )        // Set up extension.  
                strcpy_s( am_pm, sizeof(am_pm), "PM" );  
        if( newtime->tm_hour > 12 )        // Convert from 24-hour  
                newtime->tm_hour -= 12;    //   to 12-hour clock.  
        if( newtime->tm_hour == 0 )        // Set hour to 12 if midnight.  
                newtime->tm_hour = 12;  
  
        char buff[30];  
        asctime_s( buff, sizeof(buff), newtime );  
        printf( "%.19s %s\n", buff, am_pm );  
}  
```  
  
```Output  
Tue Feb 12 10:05:58 AM  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [_tzset](../../c-runtime-library/reference/tzset.md)