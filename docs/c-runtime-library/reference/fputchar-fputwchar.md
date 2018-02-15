---
title: _fputchar, _fputwchar | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _fputchar
- _fputwchar
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
- fputtchar
- _fputwchar
- fputwchar
- _fputtchar
- fputchar
- _fputchar
dev_langs:
- C++
helpviewer_keywords:
- fputchar function
- standard output, writing to
- _fputtchar function
- fputwchar function
- _fputwchar function
- fputtchar function
- _fputchar function
ms.assetid: b92ff600-a924-4f2b-b0e7-3097ee31bdff
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f4b7e510e978bcffb8b3744f63d5da24ec7afc5a
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fputchar-fputwchar"></a>_fputchar, _fputwchar
Scrive un carattere in un `stdout`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _fputchar(  
   int c   
);  
wint_t _fputwchar(  
   wchar_t c   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Carattere da scrivere.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce il carattere scritto. Per `_fputchar` un valore restituito `EOF` indica un errore. Per `_fputwchar` un valore restituito `WEOF` indica un errore. Se c è `NULL`, queste funzioni generano un'eccezione di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, restituiscono `EOF` (o `WEOF`) e impostare `errno` a `EINVAL`.  
  
 Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Entrambe queste funzioni scrivono il carattere singolo `c` in `stdout` e spostano in avanti l'indicatore come appropriato. `_fputchar` è equivalente a `fputc( stdout )`. È anche equivalente a `putchar`, ma implementata solo come funzione, anziché come funzione e macro. A differenza di `fputc` e `putchar`, queste funzioni non sono compatibili con lo standard ANSI.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_fputtchar`|`_fputchar`|`_fputchar`|`_fputwchar`|  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_fputchar`|\<stdio.h>|  
|`_fputwchar`|\<stdio.h> o \<wchar.h>|  
  
 La console non è supportata nelle app di piattaforma UWP (Universal Windows). L'handle del flusso standard associati con la console,`stdin`, `stdout`, e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fputchar.c  
// This program uses _fputchar  
// to send a character array to stdout.  
  
#include <stdio.h>  
  
int main( void )  
{  
    char strptr[] = "This is a test of _fputchar!!\n";  
    char *p = NULL;  
  
    // Print line to stream using _fputchar.   
    p = strptr;  
    while( (*p != '\0') && _fputchar( *(p++) ) != EOF )  
      ;  
}  
```  
  
```Output  
This is a test of _fputchar!!  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fgetc, fgetwc](../../c-runtime-library/reference/fgetc-fgetwc.md)   
 [putc, putwc](../../c-runtime-library/reference/putc-putwc.md)