---
title: asctime, _wasctime | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _wasctime
- asctime
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
- _tasctime
- asctime
- _wasctime
dev_langs:
- C++
helpviewer_keywords:
- asctime function
- tasctime function
- wasctime function
- _tasctime function
- _wasctime function
- time structure conversion
- time, converting
ms.assetid: 974f1727-10ff-4ed4-8cac-2eb2d681f576
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c89b43613e1eb82eb35876ea733e13c5d2995352
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="asctime-wasctime"></a>asctime, _wasctime
Convertire una struttura temporale `tm` in una stringa di caratteri. Sono disponibili versioni più sicure di queste funzioni. Vedere [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *asctime(   
   const struct tm *timeptr   
);  
wchar_t *_wasctime(   
   const struct tm *timeptr   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `timeptr`  
 Struttura di data e ora.  
  
## <a name="return-value"></a>Valore restituito  
 `asctime` restituisce un puntatore al risultato della stringa di caratteri; `_wasctime` restituisce un puntatore al risultato della stringa di caratteri wide. Non vengono restituiti valori di errore.  
  
## <a name="remarks"></a>Note  
 Sono disponibili versioni più sicure di queste funzioni. Vedere [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md).  
  
 La funzione `asctime` converte un'ora archiviata come struttura in una stringa di caratteri. Il valore `timeptr` viene in genere ottenuto da una chiamata a `gmtime` o `localtime` che restituiscono un puntatore a una struttura `tm` definita in TIME.H.  
  
|membro timeptr|Valore|  
|--------------------|-----------|  
|`tm_hour`|Ore da mezzanotte (0-23)|  
|`tm_isdst`|Positivo se è in vigore l'ora legale. 0 se l'ora legale non è in vigore. Negativo se lo stato dell'ora legale è sconosciuto. La libreria di runtime C presuppone le regole relative agli Stati Uniti per implementare il calcolo dell'ora legale (DST).|  
|`tm_mday`|Giorno del mese (1-31)|  
|`tm_min`|Minuti dopo l'ora (0-59)|  
|`tm_mon`|Mese (da 0 a 11; Gennaio = 0)|  
|`tm_sec`|Secondi dopo il minuto (0-59)|  
|`tm_wday`|Giorno della settimana (0-6. Domenica = 0)|  
|`tm_yday`|Giorno dell'anno (365-0; Il 1 ° gennaio = 0)|  
|`tm_year`|Anno (anno corrente meno 1900)|  
  
 La stringa di caratteri convertita viene anche modificata in base alle impostazioni di fuso orario locale. Vedere le funzioni [time](../../c-runtime-library/reference/time-time32-time64.md), [_ftime](../../c-runtime-library/reference/ftime-ftime32-ftime64.md) e [localtime](../../c-runtime-library/reference/localtime-localtime32-localtime64.md) per informazioni sulla configurazione dell'ora locale e la funzione [_tzset](../../c-runtime-library/reference/tzset.md) per informazioni sulla definizione delle variabili di ambiente e globali del fuso orario.  
  
 Il risultato stringa prodotto da `asctime` contiene esattamente 26 caratteri e ha il formato `Wed Jan 02 02:03:55 1980\n\0`. Viene usato un formato 24 ore. Tutti i campi hanno una larghezza costante. Il carattere di nuova riga e il carattere null occupano le ultime due posizioni della stringa. `asctime` usa un singolo buffer allocato in modo statico per contenere la stringa restituita. Ogni chiamata a questa funzione elimina definitivamente il risultato della chiamata precedente.  
  
 `_wasctime` è una versione a caratteri wide di `asctime`. In caso contrario, `_wasctime` e `asctime` si comportano in modo identico.  
  
 Queste funzioni convalidano i relativi parametri. Se `timeptr` è un puntatore null o contiene valori fuori intervallo, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tasctime`|`asctime`|`asctime`|`_wasctime`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`asctime`|\<time.h>|  
|`_wasctime`|\<time.h> or \<wchar.h>|  
  
## <a name="example"></a>Esempio  
 Questo programma inserisce l'ora di sistema in `aclock` long integer, la traduce nella struttura `newtime` e quindi la converte in stringa per l'output usando la funzione `asctime`.  
  
```  
// crt_asctime.c  
// compile with: /W3  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
    struct tm   *newTime;  
    time_t      szClock;  
  
    // Get time in seconds  
    time( &szClock );  
  
    // Convert time to struct tm form   
    newTime = localtime( &szClock );  
  
    // Print local time as a string.  
    printf_s( "Current date and time: %s", asctime( newTime ) ); // C4996  
    // Note: asctime is deprecated; consider using asctime_s instead  
}  
```  
  
```Output  
Current date and time: Sun Feb 03 11:38:58 2002  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Time Management](../../c-runtime-library/time-management.md)  (Gestione del tempo)  
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [_tzset](../../c-runtime-library/reference/tzset.md)   
 [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)