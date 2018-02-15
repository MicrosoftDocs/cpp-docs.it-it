---
title: _strtime_s, _wstrtime_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _wstrtime_s
- _strtime_s
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
- _wstrtime_s
- strtime_s
- wstrtime_s
- _strtime_s
dev_langs:
- C++
helpviewer_keywords:
- wstrtime_s function
- copying time to buffers
- strtime_s function
- _wstrtime_s function
- time, copying
- _strtime_s function
ms.assetid: 42acf013-c334-485d-b610-84c0af8a46ec
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c93a98d7be13b19357b1308183519650411ec775
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="strtimes-wstrtimes"></a>_strtime_s, _wstrtime_s
Copia l'ora corrente in un buffer. Queste sono versioni di [_strtime, _wstrtime](../../c-runtime-library/reference/strtime-wstrtime.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _strtime_s(  
   char *buffer,  
   size_t numberOfElements  
);  
errno_t _wstrtime_s(  
   wchar_t *buffer,  
   size_t numberOfElements  
);  
template <size_t size>  
errno_t _strtime_s(  
   char (&buffer)[size]  
); // C++ only  
template <size_t size>  
errno_t _wstrtime_s(  
   wchar_t (&buffer)[size]  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `buffer`  
 Buffer con una lunghezza di almeno 10 byte in cui verrà scritta l'ora.  
  
 [in] `numberOfElements`  
 Dimensione del buffer.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo.  
  
 Se si verifica una condizione di errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in ERRNO.H. Vedere la tabella seguente per gli errori esatti generati da questa funzione. Per altre informazioni sui codici di errore, vedere [Costanti errno](../../c-runtime-library/errno-constants.md).  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`buffer`|`numberOfElements`|INVIO|Contenuto di `buffer`|  
|--------------|------------------------|------------|--------------------------|  
|`NULL`|(qualsiasi)|`EINVAL`|Non modificato|  
|Non `NULL` (che punta a un buffer valido)|0|`EINVAL`|Non modificato|  
|Non `NULL` (che punta a un buffer valido)|0 < dimensioni < 9|`EINVAL`|Stringa vuota|  
|Non `NULL` (che punta a un buffer valido)|Dimensioni > 9|0|Ora corrente, formattata come specificato nella sezione Note|  
  
## <a name="security-issues"></a>Problemi relativi alla sicurezza  
 Il passaggio di un valore non NULL non valido per il buffer causerà una violazione di accesso se il parametro `numberOfElements` è maggiore di 9.  
  
 Il passaggio di un valore per `numberOfElements` maggiore delle dimensioni effettive del buffer causerà un sovraccarico del buffer.  
  
## <a name="remarks"></a>Note  
 Queste funzioni sono versioni più sicure di `_strtime` e `_wstrtime`. Il `_strtime_s` funzione Copia l'ora locale corrente nel buffer a cui puntato `timestr`. Per l'ora viene usato il formato `hh:mm:ss`, dove `hh` sono le due cifre che rappresentano l'ora nella notazione 24 ore, `mm` sono le due cifre che rappresentano i minuti trascorsi dopo l'ora e `ss` sono le due cifre che rappresentano i secondi. Ad esempio, la stringa `18:23:44` rappresenta 23 minuti e 44 secondi dopo le 18. Il buffer deve avere una lunghezza di almeno 9 byte. Le dimensioni effettive sono specificate dal secondo parametro.  
  
 `_wstrtime` è una versione a caratteri wide di `_strtime`. L'argomento e il valore restituito di `_wstrtime` sono stringhe a caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico:  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tstrtime_s`|`_strtime_s`|`_strtime_s`|`_wstrtime_s`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_strtime_s`|\<time.h>|  
|`_wstrtime_s`|\<time.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// strtime_s.c  
  
#include <time.h>  
#include <stdio.h>  
  
int main()  
{  
    char tmpbuf[9];  
    errno_t err;  
  
    // Set time zone from TZ environment variable. If TZ is not set,  
    // the operating system is queried to obtain the default value   
    // for the variable.   
    //  
    _tzset();  
  
    // Display operating system-style date and time.   
    err = _strtime_s( tmpbuf, 9 );  
    if (err)  
    {  
       printf("_strdate_s failed due to an invalid argument.");  
      exit(1);  
    }  
    printf( "OS time:\t\t\t\t%s\n", tmpbuf );  
    err = _strdate_s( tmpbuf, 9 );  
    if (err)  
    {  
       printf("_strdate_s failed due to an invalid argument.");  
       exit(1);  
    }  
    printf( "OS date:\t\t\t\t%s\n", tmpbuf );  
  
}  
```  
  
```Output  
OS time:            14:37:49  
OS date:            04/25/03  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Time Management](../../c-runtime-library/time-management.md)  (Gestione del tempo)  
 [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)   
 [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [mktime, _mktime32, _mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [_tzset](../../c-runtime-library/reference/tzset.md)