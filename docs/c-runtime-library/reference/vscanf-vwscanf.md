---
title: vscanf, vwscanf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- vscanf
- vwscanf
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
apitype: DLLExport
f1_keywords:
- vscanf
- vwscanf
- _vtscanf
dev_langs:
- C++
ms.assetid: d1df595b-11bc-4682-9441-a92616301e3b
caps.latest.revision: 6
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 8f122fc5d04b603fa654d0515287cd0b48f51434
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="vscanf-vwscanf"></a>vscanf, vwscanf
Legge i dati formattati dal flusso di input standard. Sono disponibili versioni più sicure di queste funzioni. Vedere [vscanf_s, vwscanf_s](../../c-runtime-library/reference/vscanf-s-vwscanf-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int vscanf(  
   const char *format,  
   va_list arglist  
);  
int vwscanf(  
   const wchar_t *format,  
   va_list arglist  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `format`  
 Stringa di formato controllo.  
  
 `arglist`  
 Elenco di argomenti variabili.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il numero di campi che vengono convertiti ed assegnati correttamente. Il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato.  
  
 Se `format` è un puntatore `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `EOF` e impostano `errno` su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `vscanf` legge i dati dal flusso di input standard `stdin` e scrive i dati nelle posizioni specificate dall'elenco di argomenti `arglist`. Ogni argomento nell'elenco deve essere un puntatore a una variabile di un tipo corrispondente a un identificatore di tipo in `format`. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
> [!IMPORTANT]
>  Quando si usa `vscanf` per leggere una stringa, specificare sempre una larghezza per il formato `%s`, ad esempio, `"%32s"` anziché `"%s"`. In caso contrario, l'input formattato in modo non corretto può causare un sovraccarico del buffer. In alternativa, è possibile usare [vscanf_s, vwscanf_s](../../c-runtime-library/reference/vscanf-s-vwscanf-s.md) o [fgets](../../c-runtime-library/reference/fgets-fgetws.md).  
  
 `vwscanf` è una versione a caratteri wide di `vscanf`; l'argomento `format` in `vwscanf` è una stringa di caratteri wide. `vwscanf` e `vscanf` si comportano in modo analogo, se il flusso viene aperto in modalità ANSI. `vscanf` non supporta l'input da un flusso UNICODE.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vtscanf`|`vscanf`|`vscanf`|`vwscanf`|  
  
 Per altre informazioni, vedere [Campi di specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`vscanf`|\<stdio.h>|  
|`vwscanf`|\<stdio.h> o \<wchar.h>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Gli handle del flusso standard associati alla console, `stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime del linguaggio C nelle app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_vscanf.c  
// compile with: /W3  
// This program uses the vscanf and vwscanf functions  
// to read formatted input.  
  
#include <stdio.h>  
#include <stdarg.h>  
  
int call_vscanf(char *format, ...)  
{  
    int result;  
    va_list arglist;  
    va_start(arglist, format);  
    result = vscanf(format, arglist);  
    va_end(arglist);  
    return result;  
}  
  
int call_vwscanf(wchar_t *format, ...)  
{  
    int result;  
    va_list arglist;  
    va_start(arglist, format);  
    result = vwscanf(format, arglist);  
    va_end(arglist);  
    return result;  
}  
  
int main( void )  
{  
    int   i, result;  
    float fp;  
    char  c, s[81];  
    wchar_t wc, ws[81];  
    result = call_vscanf( "%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws );  
    printf( "The number of fields input is %d\n", result );  
    printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);  
    result = call_vwscanf( L"%d %f %hc %lc %80S %80ls", &i, &fp, &c, &wc, s, ws );  
    wprintf( L"The number of fields input is %d\n", result );  
    wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);  
}  
  
```  
  
```Output  
  
      71 98.6 h z Byte characters  
36 92.3 y n Wide charactersThe number of fields input is 6  
The contents are: 71 98.599998 h z Byte characters  
The number of fields input is 6  
The contents are: 36 92.300003 y n Wide characters  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [fscanf, _fscanf_l, fwscanf, _fwscanf_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [sscanf, _sscanf_l, swscanf, _swscanf_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)   
 [vscanf_s, vwscanf_s](../../c-runtime-library/reference/vscanf-s-vwscanf-s.md)
