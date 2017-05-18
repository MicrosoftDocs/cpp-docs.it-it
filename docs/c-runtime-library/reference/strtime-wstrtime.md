---
title: _strtime, _wstrtime | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wstrtime
- _strtime
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
- _wstrtime
- _strtime
- wstrtime
- strtime
- _tstrtime
dev_langs:
- C++
helpviewer_keywords:
- strtime function
- _strtime function
- _wstrtime function
- copying time to buffers
- wstrtime function
- tstrtime function
- _tstrtime function
- time, copying
ms.assetid: 9e538161-cf49-44ec-bca5-c0ab0b9e4ca3
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: d442d5d1d32fe7ab1a6dfe4e16e64b3dd994b73e
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="strtime-wstrtime"></a>_strtime, _wstrtime
Copia l'ora in un buffer. Sono disponibili versioni più sicure di queste funzioni. Vedere [_strtime_s, _wstrtime_s](../../c-runtime-library/reference/strtime-s-wstrtime-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *_strtime(  
   char *timestr   
);  
wchar_t *_wstrtime(  
   wchar_t *timestr   
);  
template <size_t size>  
char *_strtime(  
   char (&timestr)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_wstrtime(  
   wchar_t (&timestr)[size]  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `timestr`  
 Stringa dell'ora.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore alla stringa di caratteri risultante `timestr`.  
  
## <a name="remarks"></a>Note  
 Il `_strtime` funzione Copia l'ora locale corrente nel buffer a cui puntato `timestr`. Per l'ora viene usato il formato `hh:mm:ss`, dove `hh` sono le due cifre che rappresentano l'ora nella notazione 24 ore, `mm` sono le due cifre che rappresentano i minuti trascorsi dopo l'ora e `ss` sono le due cifre che rappresentano i secondi. Ad esempio, la stringa `18:23:44` rappresenta 23 minuti e 44 secondi dopo le 18. La lunghezza del buffer deve essere di almeno 9 byte.  
  
 `_wstrtime` è una versione a caratteri wide di `_strtime`. L'argomento e il valore restituito di `_wstrtime` sono stringhe a caratteri wide. Queste funzioni hanno altrimenti un comportamento identico. Se `timestr` è un puntatore `NULL` oppure se la formattazione di `timestr` non è corretta, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono un valore NULL e impostano `errno` su `EINVAL` se `timestr` era NULL oppure impostano `errno` su `ERANGE` se la formattazione di `timestr` non è corretta.  
  
 In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tstrtime`|`_strtime`|`_strtime`|`_wstrtime`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_strtime`|\<time.h>|  
|`_wstrtime`|\<time.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_strtime.c  
// compile with: /W3  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char tbuffer [9];  
   _strtime( tbuffer ); // C4996  
   // Note: _strtime is deprecated; consider using _strtime_s instead  
   printf( "The current time is %s \n", tbuffer );  
}  
```  
  
```Output  
The current time is 14:21:44  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [mktime, _mktime32, _mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [_tzset](../../c-runtime-library/reference/tzset.md)
