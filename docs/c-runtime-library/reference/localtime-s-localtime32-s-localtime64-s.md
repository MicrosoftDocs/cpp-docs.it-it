---
title: localtime_s, _localtime32_s, _localtime64_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _localtime64_s
- _localtime32_s
- localtime_s
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
- _localtime32_s
- localtime32_s
- localtime_s
- localtime64_s
- _localtime64_s
dev_langs:
- C++
helpviewer_keywords:
- _localtime64_s function
- localtime32_s function
- _localtime32_s function
- localtime64_s function
- time, converting values
- localtime_s function
ms.assetid: 842d1dc7-d6f8-41d3-b340-108d4b90df54
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: bde781215787a1d39a58c69b344eb8d41f7b3c52
ms.lasthandoff: 02/24/2017

---
# <a name="localtimes-localtime32s-localtime64s"></a>localtime_s, _localtime32_s, _localtime64_s
Converte un valore di ora e lo corregge per il fuso orario locale. Queste sono versioni di [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t localtime_s(  
   struct tm* _tm,  
   const time_t *time   
);  
errno_t _localtime32_s(  
   struct tm* _tm,  
   const time32_t *time   
);  
errno_t _localtime64_s(  
   struct tm* _tm,  
   const _time64_t *time   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `_tm`  
 Puntatore alla struttura dell'ora da compilare.  
  
 `time`  
 Puntatore all'ora archiviata.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in Errno.h. Per un elenco di questi errori, vedere [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`_tm`|`time`|Valore restituito|Valore in `_tm`|Richiama il gestore di parametri non validi|  
|-----------|------------|------------------|--------------------|---------------------------------------|  
|`NULL`|qualsiasi|`EINVAL`|Non modificato|Sì|  
|Non `NULL` (punta alla memoria valida)|`NULL`|`EINVAL`|Tutti i campi impostati su -1|Sì|  
|Non `NULL` (punta alla memoria valida)|minore di 0 o maggiore di `_MAX__TIME64_T`|`EINVAL`|Tutti i campi impostati su -1|No|  
  
 Nel caso delle prime due condizioni di errore viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La funzione `_localtime32_s` converte un'ora archiviata come valore [time_t](../../c-runtime-library/standard-types.md) e archivia il risultato in una struttura di tipo `tm`. Il valore `long` `timer` rappresenta i secondi trascorsi dalla mezzanotte (00.00.00) del 1 gennaio 1970 nel formato UTC. Questo valore viene in genere ottenuto dalla funzione `time`.  
  
 `_localtime32_s` applica una correzione per il fuso orario locale se l'utente imposta innanzitutto la variabile di ambiente globale `TZ`. Quando si imposta `TZ`, vengono impostate automaticamente anche altre tre variabili di ambiente (`_timezone`, `_daylight` e `_tzname`). Se la variabile `TZ` non viene impostata, `localtime32_s` prova a usare le informazioni sul fuso orario specificate nell'applicazione Data e ora nel Pannello di controllo. Se non è possibile ottenere queste informazioni, viene usato il valore PST8PDT per impostazione predefinita, che indica il fuso orario Pacifico (Stati Uniti). Vedere [_tzset](../../c-runtime-library/reference/tzset.md) per una descrizione di queste variabili. `TZ` è un'estensione Microsoft e non fa parte della definizione standard ANSI di `localtime`.  
  
> [!NOTE]
>  L'ambiente di destinazione deve provare a determinare se è in vigore l'ora legale.  
  
 `_localtime64_s`, che usa la struttura `__time64_t`, consente di esprimere le date fino alle 23.59.59 del 18 gennaio 3001 UTC (Coordinated Universal Time), mentre `_localtime32_s` rappresenta le date fino alle 23.59.59 del 18 gennaio 2038 UTC.  
  
 `localtime_s` è una funzione inline equivalente a `_localtime64_s` e `time_t` è equivalente a `__time64_t`. Se è necessario forzare il compilatore in modo che interpreti `time_t` come il vecchio `time_t` a 32 bit, è possibile definire `_USE_32BIT_TIME_T`. In questo modo `localtime_s` verrà valutata come `_localtime32_s`. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.  
  
 I campi del tipo di struttura [tm](../../c-runtime-library/standard-types.md) archiviano i valori seguenti, ognuno dei quali è un `int`.  
  
 `tm_sec`  
 Secondi dopo il minuto (0 - 59).  
  
 `tm_min`  
 Minuti dopo l'ora (0 - 59).  
  
 `tm_hour`  
 Ore dopo la mezzanotte (0 - 23).  
  
 `tm_mday`  
 Giorno del mese (1 - 31).  
  
 `tm_mon`  
 Mese (0 - 11; gennaio = 0).  
  
 `tm_year`  
 Anno (anno corrente meno 1900).  
  
 `tm_wday`  
 Giorno della settimana (0 - 6; domenica = 0).  
  
 `tm_yday`  
 Giorno dell'anno (0 - 365; 1 gennaio = 0).  
  
 `tm_isdst`  
 Valore positivo se è in vigore l'ora legale. 0 se l'ora legale non è in vigore. Valore negativo se lo stato dell'ora legale è sconosciuto. Se viene impostata la variabile di ambiente `TZ`, la libreria di runtime C presuppone l'uso delle regole relative agli Stati Uniti per implementare il calcolo dell'ora legale.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`localtime_s`|\<time.h>|  
|`_localtime32_s`|\<time.h>|  
|`_localtime64_s`|\<time.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_localtime_s.c  
/* This program uses _time64 to get the current time   
 * and then uses _localtime64_s() to convert this time to a structure   
 * representing the local time. The program converts the result   
 * from a 24-hour clock to a 12-hour clock and determines the   
 * proper extension (AM or PM).  
 */  
  
#include <stdio.h>  
#include <string.h>  
#include <time.h>  
  
int main( void )  
{  
        struct tm newtime;  
        char am_pm[] = "AM";  
        __time64_t long_time;  
        char timebuf[26];  
        errno_t err;  
  
        // Get time as 64-bit integer.  
        _time64( &long_time );   
        // Convert to local time.  
        err = _localtime64_s( &newtime, &long_time );   
        if (err)  
        {  
            printf("Invalid argument to _localtime64_s.");  
            exit(1);  
        }  
        if( newtime.tm_hour > 12 )        // Set up extension.   
                strcpy_s( am_pm, sizeof(am_pm), "PM" );  
        if( newtime.tm_hour > 12 )        // Convert from 24-hour   
                newtime.tm_hour -= 12;    // to 12-hour clock.   
        if( newtime.tm_hour == 0 )        // Set hour to 12 if midnight.  
                newtime.tm_hour = 12;  
  
        // Convert to an ASCII representation.   
        err = asctime_s(timebuf, 26, &newtime);  
        if (err)  
        {  
           printf("Invalid argument to asctime_s.");  
           exit(1);  
        }  
        printf( "%.19s %s\n", timebuf, am_pm );  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
Fri Apr 25 01:19:27 PM  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 [System::DateTime::ToLocalTime](https://msdn.microsoft.com/en-us/library/system.datetime.tolocaltime.aspx)  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [_tzset](../../c-runtime-library/reference/tzset.md)

