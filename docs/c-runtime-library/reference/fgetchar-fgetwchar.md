---
title: _fgetchar, _fgetwchar | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _fgetchar
- _fgetwchar
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
- fgetwchar
- _fgettchar
- _fgetchar
- _fgetwchar
- fgettchar
dev_langs:
- C++
helpviewer_keywords:
- fgetwchar function
- _fgetchar function
- fgettchar function
- _fgetwchar function
- _fgettchar function
- standard input, reading from
- fgetchar function
ms.assetid: 8bce874c-701a-41a3-b1b2-feff266fb5b9
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 194ac613cbb783d0327ce1ce7c53138c5c67bc49
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="fgetchar-fgetwchar"></a>_fgetchar, _fgetwchar
Legge un carattere da un flusso `stdin`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _fgetchar( void );  
wint_t _fgetwchar( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 `_fgetchar` restituisce il carattere letto come `int` o restituisce `EOF` per indicare un errore o la fine del file. **_**`fgetwchar` restituisce, come [wint_t](../../c-runtime-library/standard-types.md), il carattere wide che corrisponde al carattere letto o restituisce `WEOF` per indicare un errore o la fine del file. Per entrambe le funzioni, usare `feof` o `ferror` per distinguere tra un errore e una condizione di fine del file.  
  
## <a name="remarks"></a>Note  
 Queste funzioni leggono un singolo carattere da `stdin`. La funzione quindi incrementa il puntatore del file associato (se definito) per puntare al carattere successivo. Se il flusso è alla fine del file, viene impostato l'indicatore di fine del file per il flusso.  
  
 `_fgetchar` è equivalente a `fgetc( stdin )`. È anche equivalente a `getchar`, ma implementata solo come funzione, anziché come funzione e macro. `_fgetwchar` è la versione a caratteri wide di `_fgetchar`.  
  
 Queste funzioni non sono compatibili con gli standard ANSI.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_fgettchar`|`_fgetchar`|`_fgetchar`|`_fgetwchar`|  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_fgetchar`|\<stdio.h>|  
|`_fgetwchar`|\<stdio.h> o \<wchar.h>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Gli handle del flusso standard associati alla console, `stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime del linguaggio C nelle app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fgetchar.c  
// This program uses _fgetchar to read the first  
// 80 input characters (or until the end of input)  
// and place them into a string named buffer.  
//  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   char buffer[81];  
   int  i, ch;  
  
   // Read in first 80 characters and place them in "buffer":  
   ch = _fgetchar();  
   for( i=0; (i < 80 ) && ( feof( stdin ) == 0 ); i++ )  
   {  
      buffer[i] = (char)ch;  
      ch = _fgetchar();  
   }  
  
   // Add null to end string   
   buffer[i] = '\0';  
   printf( "%s\n", buffer );  
}  
```  
  
```Output  
  
      Line one.  
Line two.Line one.  
Line two.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fputc, fputwc](../../c-runtime-library/reference/fputc-fputwc.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)
