---
title: ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ctime64
- _wctime32
- ctime
- _wctime64
- _ctime32
- _wctime
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
- _wctime64
- _ctime32
- _tctime
- _wctime
- _wctime32
- _tctime64
- _ctime64
- ctime
dev_langs: C++
helpviewer_keywords:
- tctime64 function
- _ctime32 function
- ctime32 function
- _wctime function
- wctime64 function
- _tctime64 function
- _tctime32 function
- _ctime64 function
- _wctime64 function
- ctime function
- wctime32 function
- ctime64 function
- _wctime32 function
- _tctime function
- tctime32 function
- tctime function
- wctime function
- time, converting
ms.assetid: 2423de37-a35c-4f0a-a378-3116bc120a9d
caps.latest.revision: "25"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 97c6f5f4c827ca315eb1de36ee8d4f19d94214bd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ctime-ctime32-ctime64-wctime-wctime32-wctime64"></a>ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64
Convertono un valore di tempo in una stringa e lo regolano per le impostazioni di fuso orario locale. Sono disponibili versioni più sicure di queste funzioni. Vedere [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *ctime(   
   const time_t *timer   
);  
char *_ctime32(   
   const __time32_t *timer )  
;  
char *_ctime64(   
   const __time64_t *timer )  
;  
wchar_t *_wctime(   
   const time_t *timer   
);  
wchar_t *_wctime32(   
   const __time32_t *timer  
);  
wchar_t *_wctime64(   
   const __time64_t *timer   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `timer`  
 Puntatore all'ora archiviata.  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore al risultato della stringa di caratteri. Verrà restituito `NULL` se:  
  
-   `time` rappresenta una data precedente alla mezzanotte dell'1 gennaio 1970 (ora UTC).  
  
-   Se si usa `_ctime32` o `_wctime32` e `time` rappresenta una data successiva alle 23.59.59 del 18 gennaio 2038 (ora UTC).  
  
-   Se si usa `_ctime64` o `_wctime64` e `time` rappresenta una data successiva alle 23.59.59 del 31 dicembre 3000 (ora UTC).  
  
 `ctime` è una funzione inline equivalente a `_ctime64` e `time_t` è equivalente a `__time64_t`. Se è necessario forzare il compilatore in modo che interpreti `time_t` come il precedente `time_t` a 32 bit, è possibile definire `_USE_32BIT_TIME_T`. In questo modo `ctime` verrà valutata come `_ctime32`. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.  
  
## <a name="remarks"></a>Note  
 La funzione `ctime` converte un valore di tempo archiviato come valore [time_t](../../c-runtime-library/standard-types.md) in una stringa di caratteri. Il valore `timer` viene in genere ottenuto da una chiamata a [time](../../c-runtime-library/reference/time-time32-time64.md), che restituisce il numero di secondi trascorsi dalla mezzanotte (00.00.00), dell'1 gennaio 1970 (ora UTC). La stringa del valore restituito contiene esattamente 26 caratteri e ha il formato:  
  
```  
Wed Jan 02 02:03:55 1980\n\0  
```  
  
 Viene usato un formato 24 ore. Tutti i campi hanno una larghezza costante. Il carattere di nuova riga ('\n') e il carattere null ('\0') occupano le ultime due posizioni della stringa.  
  
 La stringa di caratteri convertita viene anche regolata in base alle impostazioni di fuso orario locale. Vedere le funzioni `time`, [ftime](../../c-runtime-library/reference/ftime-ftime32-ftime64.md) e [localtime](../../c-runtime-library/reference/localtime-localtime32-localtime64.md) per informazioni sulla configurazione dell'ora locale e la funzione [tzset](../../c-runtime-library/reference/tzset.md) per informazioni dettagliate sulla definizione dell'ambiente di fuso orario e variabili globali.  
  
 Una chiamata a `ctime` consente di modificare un singolo buffer allocato in modo statico usato dalle funzioni `gmtime` e `localtime`. Ogni chiamata a una di queste routine elimina definitivamente i risultati della chiamata precedente. `ctime` condivide un buffer statico con la funzione `asctime`. Pertanto, una chiamata a `ctime` elimina i risultati di qualsiasi chiamata precedente a `asctime`, `localtime`, o `gmtime`.  
  
 `_wctime` e `_wctime64` sono la versione a caratteri wide di `ctime` e `_ctime64`; restituiscono un puntatore alla stringa di caratteri wide. In caso contrario, `_ctime64`, `_wctime` e `_wctime64` si comportano in modo identico a `ctime`.  
  
 Queste funzioni convalidano i relativi parametri. Se `timer` è un puntatore Null o se il valore di timer è negativo, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono `NULL` e impostano `errno` su `EINVAL`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tctime`|`ctime`|`ctime`|`_wctime`|  
|`_tctime32`|`_ctime32`|`_ctime32`|`_wctime32`|  
|`_tctime64`|`_ctime64`|`_ctime64`|`_wctime64`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`ctime`|\<time.h>|  
|`_ctime32`|\<time.h>|  
|`_ctime64`|\<time.h>|  
|`_wctime`|\<time.h> or \<wchar.h>|  
|`_wctime32`|\<time.h> or \<wchar.h>|  
|`_wctime64`|\<time.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_ctime64.c  
// compile with: /W3  
/* This program gets the current  
 * time in _time64_t form, then uses ctime to  
 * display the time in string form.  
 */  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   __time64_t ltime;  
  
   _time64( &ltime );  
   printf( "The time is %s\n", _ctime64( &ltime ) ); // C4996  
   // Note: _ctime64 is deprecated; consider using _ctime64_s  
}  
```  
  
```Output  
The time is Wed Feb 13 16:04:43 2002  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)