---
title: _tzset | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _tzset
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
- _tzset
dev_langs:
- C++
helpviewer_keywords:
- _tzset function
- time environment variables
- environment variables, setting time
ms.assetid: 3f6ed537-b414-444d-b272-5dd377481930
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4f364d1af095e8fb793c2cd01a5b12ce62b9029a
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="tzset"></a>_tzset
Impostare le variabili di ambiente di tempo.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _tzset( void );  
```  
  
## <a name="remarks"></a>Note  
 La funzione `_tzset` usa l'impostazione corrente della variabile di ambiente `TZ` per assegnare valori a tre variabili globali: `_daylight`, `_timezone`e `_tzname`. Queste variabili vengono usate dalle funzioni [_ftime](../../c-runtime-library/reference/ftime-ftime32-ftime64.md) e [localtime](../../c-runtime-library/reference/localtime-localtime32-localtime64.md) per apportare correzioni dall'ora UTC (Coordinated Universal Time) all'ora locale e dalla funzione `time` per calcolare l'ora UTC dall'ora di sistema. Usare la sintassi seguente per impostare la variabile di ambiente `TZ` :  
  
 `set` `TZ`=`tzn`[+ &#124; -]`hh`[`:mm`[`:ss`] ][`dzn`]  
  
 `tzn`  
 Nome del fuso orario di tre lettere, ad esempio PST. È necessario specificare l'offset corretto dall'ora locale all'ora UTC.  
  
 `hh`  
 La differenza in ore tra l'ora UTC e l'ora locale. Segno più (+) facoltativo per i valori positivi.  
  
 `mm`  
 Minuti. Separato da `hh` da due punti (`:`).  
  
 `ss`  
 Secondi. Separato da `mm` da due punti (`:`).  
  
 `dzn`  
 Fuso orario con l'ora legale di tre lettere, ad esempio PDT. Se l'ora legale non è mai attiva nella località, impostare `TZ` senza un valore per `dzn`. La libreria di runtime C presupporrà le regole relative agli Stati Uniti per implementare il calcolo dell'ora legale (DST).  
  
> [!NOTE]
>  Prestare attenzione nel calcolare il segno della differenza di tempo. Dal momento che la differenza di tempo è l'offset dall'ora locale all'ora UTC (anziché viceversa), il relativo segno potrebbe essere l'opposto di quanto ci si potrebbe intuitivamente aspettare. Per i fusi orari avanti rispetto all'ora UTC, la differenza di tempo è negativa; per quelli che sono indietro rispetto all'ora UTC, la differenza è positiva.  
  
 Ad esempio, per impostare la variabile di ambiente `TZ` in modo che corrisponda al fuso orario corrente in Germania, immettere quanto segue nella riga di comando:  
  
```  
set TZ=GST-1GDT  
```  
  
 Questo comando usa GST per indicare l'ora solare tedesca, presuppone che l'ora UTC sia un'ora indietro rispetto alla Germania (o, in altre parole, che la Germania sia un'ora avanti rispetto all'ora UTC) e presuppone che la Germania osservi l'ora legale.  
  
 Se il `TZ` valore non è impostato, `_tzset` tenta di utilizzare le informazioni del fuso orario specificate dal sistema operativo. Nel sistema operativo Windows, queste informazioni vengono specificate nell'applicazione Data/Ora nel Pannello di controllo. Se `_tzset` non riesce a ottenere questa informazioni, per impostazione predefinita usa PST8PDT, che indica il fuso orario Pacifico (Stati Uniti).  
  
 In base al valore della variabile di ambiente `TZ` , i valori seguenti vengono assegnati alle variabili globali `_daylight`, `_timezone`e `_tzname` quando `_tzset` viene chiamato:  
  
|Variabile globale|Descrizione|Valore predefinito|  
|---------------------|-----------------|-------------------|  
|`_daylight`|Valore diverso da zero se è specificato un fuso orario con l'ora legale nell'impostazione `TZ` ; in caso contrario, 0.|1|  
|`_timezone`|La differenza in secondi tra l'ora locale e l'ora UTC.|28800 (28800 secondi equivale a 8 ore)|  
|`_tzname`[0]|Valore stringa del nome del fuso orario dalla variabile di ambiente `TZ` ; vuoto se `TZ` non è stato impostato.|PST|  
|`_tzname`[1]|Valore di stringa del fuso orario con l'ora legale; vuoto se il fuso orario con l'ora legale viene omesso dalla variabile di ambiente `TZ` .|PDT|  
  
 I valori predefiniti illustrati nella tabella precedente per `_daylight` e la matrice `_tzname` corrispondono a "PST8PDT". Se la zona DST viene omessa dalla variabile di ambiente `TZ` , il valore di `_daylight` è 0 e le funzioni `_ftime`, `gmtime`e `localtime` restituiscono 0 per i flag DST.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_tzset`|\<time.h>|  
  
 Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_tzset.cpp  
// This program uses _tzset to set the global variables  
// named _daylight, _timezone, and _tzname. Since TZ is  
// not being explicitly set, it uses the system time.  
  
#include <time.h>  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
    _tzset();  
    int daylight;  
    _get_daylight( &daylight );  
    printf( "_daylight = %d\n", daylight );  
    long timezone;  
    _get_timezone( &timezone );  
    printf( "_timezone = %ld\n", timezone );  
    size_t s;  
    char tzname[100];  
    _get_tzname( &s, tzname, sizeof(tzname), 0 );  
    printf( "_tzname[0] = %s\n", tzname );  
    exit( 0 );  
}  
```  
  
```Output  
_daylight = 1  
_timezone = 28800  
_tzname[0] = Pacific Standard Time  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](../../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md)