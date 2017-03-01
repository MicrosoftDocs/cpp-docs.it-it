---
title: ungetc, ungetwc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- ungetwc
- ungetc
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _ungettc
- ungetwc
- ungetc
dev_langs:
- C++
helpviewer_keywords:
- ungetwc function
- ungettc function
- characters, pushing back onto stream
- _ungettc function
- ungetc function
ms.assetid: e0754f3a-b4c6-408f-90c7-e6387b830d84
caps.latest.revision: 16
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 9f33416614f18a5a1cd7a61ccf4acfb9276de8e5
ms.lasthandoff: 02/24/2017

---
# <a name="ungetc-ungetwc"></a>ungetc, ungetwc
Reinserisce un carattere nel flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int ungetc(  
   int c,  
   FILE *stream   
);  
wint_t ungetwc(  
   wint_t c,  
   FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Carattere da inserire.  
  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito negativo, ognuna di queste funzioni restituisce l'argomento del carattere `c`*.* Se non è possibile reinserire `c` oppure se non è stato letto alcun carattere, il flusso di input rimane invariato e `ungetc` restituisce `EOF`. `ungetwc` restituisce `WEOF`. Se `stream` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, viene restituito `EOF` o `WEOF` e `errno` viene impostato su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `ungetc` reinserisce il carattere `c` in `stream` e cancella l'indicatore di fine del file. Il flusso deve essere aperto per la lettura. Un'operazione di lettura successiva su `stream` inizia con `c`*.* Un tentativo di inserire `EOF` nel flusso tramite `ungetc` viene ignorato.  
  
 I caratteri inseriti nel flusso da `ungetc` possono essere cancellati se viene chiamata la funzione `fflush`, `fseek`, `fsetpos` o `rewind` prima che il carattere venga letto dal flusso. L'indicatore di posizione del file avrà il valore esistente prima del reinserimento dei caratteri. Lo spazio di archiviazione esterno corrispondente al flusso rimane invariato. In caso di una chiamata a `ungetc` con esito positivo su un flusso di testo, l'indicatore di posizione del file non è specificato fino a quando non vengono letti o rimossi tutti i caratteri reinseriti. Per ogni chiamata `ungetc` con esito positivo successiva su un flusso binario, l'indicatore di posizione del file viene decrementato. Se il valore è 0 prima della chiamata, il valore è indefinito dopo la chiamata.  
  
 I risultati sono imprevedibili se la funzione `ungetc` viene chiamata due volte senza un'operazione di lettura o posizionamento di file tra le due chiamate. Dopo una chiamata a `fscanf`, una chiamata a `ungetc` potrebbe avere esito negativo a meno che non sia stata eseguita un'altra operazione di lettura (ad esempio `getc`). Il motivo è che la funzione `fscanf` stessa chiama `ungetc`.  
  
 `ungetwc` è una versione a caratteri wide di `ungetc`. Per ogni chiamata a `ungetwc` con esito positivo successiva su un flusso di testo o binario, tuttavia, l'indicatore di posizione del file non è specificato fino a quando non vengono letti o rimossi tutti i caratteri reinseriti.  
  
 Queste funzioni sono thread-safe e bloccano i dati sensibili durante l'esecuzione. Per una versione che non blocca i thread, vedere [_ungetc_nolock, _ungetwc_nolock](../../c-runtime-library/reference/ungetc-nolock-ungetwc-nolock.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_ungettc`|`ungetc`|`ungetc`|`ungetwc`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`ungetc`|\<stdio.h>|  
|`ungetwc`|\<stdio.h> o \<wchar.h>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Gli handle del flusso standard associati alla console, `stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime del linguaggio C nelle app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_ungetc.c  
// This program first converts a character  
// representation of an unsigned integer to an integer. If  
// the program encounters a character that is not a digit,  
// the program uses ungetc to replace it in the  stream.  
//  
  
#include <stdio.h>  
#include <ctype.h>  
  
int main( void )  
{  
   int ch;  
   int result = 0;  
  
   // Read in and convert number:  
   while( ((ch = getchar()) != EOF) && isdigit( ch ) )  
      result = result * 10 + ch - '0';    // Use digit.  
   if( ch != EOF )  
      ungetc( ch, stdin );                // Put nondigit back.  
   printf( "Number = %d\nNext character in stream = '%c'",   
            result, getchar() );  
}  
```  
  
```Output  
  
      521aNumber = 521  
Next character in stream = 'a'  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)   
 [putc, putwc](../../c-runtime-library/reference/putc-putwc.md)
