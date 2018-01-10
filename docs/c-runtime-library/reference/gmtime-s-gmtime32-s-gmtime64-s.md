---
title: gmtime_s, _gmtime32_s, _gmtime64_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _gmtime32_s
- gmtime_s
- _gmtime64_s
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
- _gmtime_s
- gmtime64_s
- gmtime32_s
- _gmtime64_s
- gmtime_s
- _gmtime32_s
dev_langs: C++
helpviewer_keywords:
- gmtime_s function
- gmtime32_s function
- time functions
- gmtime64_s function
- _gmtime64_s function
- time structure conversion
- _gmtime_s function
- _gmtime32_s function
ms.assetid: 261c7df0-2b0c-44ba-ba61-cb83efaec60f
caps.latest.revision: "29"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f0d0fc911c052e58b1f2aeb9b656f737746bd2de
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="gmtimes-gmtime32s-gmtime64s"></a>gmtime_s, _gmtime32_s, _gmtime64_s
Converte un valore di ora in una struttura. Queste sono versioni di [_gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t gmtime_s(  
   struct tm* _tm,  
   const __time_t* time  
);  
errno_t _gmtime32_s(  
   struct tm* _tm,  
   const __time32_t* time  
);  
errno_t _gmtime64_s(  
   struct tm* _tm,  
   const __time64_t* time   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `_tm`  
 Puntatore a una struttura `tm`. I campi della struttura restituita contengono il valore valutato dell'argomento `timer` in formato UTC anziché nell'ora locale.  
  
 `time`  
 Puntatore all'ora archiviata. L'ora è rappresentata come secondi trascorsi dalla mezzanotte (00.00.00) del 1 gennaio 1970 nel formato UTC (Coordinated Universal Time).  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in Errno.h. Per un elenco di questi errori, vedere [errno](../../c-runtime-library/errno-constants.md).  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`_tm`|`time`|INVIO|Valore in `_tm`|  
|-----------|------------|------------|--------------------|  
|`NULL`|qualsiasi|`EINVAL`|Non modificato.|  
|Non `NULL` (punta alla memoria valida)|`NULL`|`EINVAL`|Tutti i campi impostati su -1.|  
|Non `NULL`|< 0|`EINVAL`|Tutti i campi impostati su -1.|  
  
 Nel caso delle prime due condizioni di errore viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La funzione `_gmtime32_s` suddivide il valore `time` e lo archivia in una struttura di tipo `tm`, definita in Time.h. L'indirizzo della struttura viene passato in `_tm`. Il valore di `time` viene in genere ottenuto da una chiamata alla funzione `time`.  
  
> [!NOTE]
>  L'ambiente di destinazione deve provare a determinare se è in vigore l'ora legale. La libreria di runtime C presuppone l'uso delle regole relative agli Stati Uniti per implementare il calcolo dell'ora legale.  
  
 Ognuno dei campi della struttura è di tipo `int`, come mostrato nella tabella seguente.  
  
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
  
 `_gmtime64_s`, che usa la struttura `__time64_t`, consente di esprimere le date fino alle 23.59.59 del 31 dicembre 3000 UTC, mentre `gmtime32_s` rappresenta solo le date fino alle 23.59.59 del 18 gennaio 2038 UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per entrambe queste funzioni.  
  
 `gmtime_s` è una funzione inline equivalente a `_gmtime64_s` e `time_t` è equivalente a `__time64_t`. Se è necessario forzare il compilatore in modo che interpreti `time_t` come il vecchio `time_t`a 32 bit, è possibile definire `_USE_32BIT_TIME_T`. In questo modo `gmtime_s` verrà allineata a `_gmtime32_s`. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`gmtime_s`|\<time.h>|  
|`_gmtime32_s`|\<time.h>|  
|`_gmtime64_s`|\<time.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_gmtime64_s.c  
// This program uses _gmtime64_s to convert a 64-bit  
// integer representation of coordinated universal time  
// to a structure named newtime, then uses asctime_s to  
// convert this structure to an output string.  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   struct tm newtime;  
   __int64 ltime;  
   char buf[26];  
   errno_t err;  
  
   _time64( &ltime );  
  
   // Obtain coordinated universal time:   
   err = _gmtime64_s( &newtime, &ltime );  
   if (err)  
   {  
      printf("Invalid Argument to _gmtime64_s.");  
   }  
  
   // Convert to an ASCII representation   
   err = asctime_s(buf, 26, &newtime);  
   if (err)  
   {  
      printf("Invalid Argument to asctime_s.");  
   }  
  
   printf( "Coordinated universal time is %s\n",   
           buf );  
}  
```  
  
```Output  
Coordinated universal time is Fri Apr 25 20:12:33 2003  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Time Management](../../c-runtime-library/time-management.md)  (Gestione del tempo)  
 [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [_mkgmtime, _mkgmtime32, _mkgmtime64](../../c-runtime-library/reference/mkgmtime-mkgmtime32-mkgmtime64.md)   
 [mktime, _mktime32, _mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)