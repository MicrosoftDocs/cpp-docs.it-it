---
title: putchar, putwchar | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- putchar
- putwchar
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
- putchar
- putwchar
- _puttchar
dev_langs: C++
helpviewer_keywords:
- putchar function
- _puttchar function
- characters, writing
- standard output, writing to
- putwchar function
ms.assetid: 93657c7f-cca1-4032-8e3a-cd6ab6193748
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f3320f40f822c9559b411144ecc621824eedbd3f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="putchar-putwchar"></a>putchar, putwchar
Scrive un carattere in **stdout**.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int putchar(  
   int c   
);  
wint_t putwchar(  
   wchar_t c   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Carattere da scrivere.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il carattere scritto. Per indicare un errore o una condizione di fine file, `putc` e `putchar` restituiscono`EOF`; `putwc` e `putwchar` restituiscono **WEOF**. Per tutte e quattro le routine, usare [ferror](../../c-runtime-library/reference/ferror.md) o [feof](../../c-runtime-library/reference/feof.md) per verificare la presenza di un errore o della fine del file. Se viene passato un puntatore Null per `stream`, queste funzioni generano un'eccezione di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, restituiscono `EOF` o **WEOF** e impostano `errno` su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La routine `putc` scrive il carattere singolo `c` nell'elemento `stream` di output in corrispondenza della posizione corrente. È possibile passare qualsiasi intero a `putc`, ma vengono scritti solo gli 8 bit inferiori. La routine `putchar` è identica a **putc(** `c`**, stdout )**. Per ogni routine, se si verifica un errore di lettura, viene impostato l'indicatore di errore per il flusso. `putc` e `putchar` sono rispettivamente simili a `fputc` e `_fputchar`, ma vengono implementati sia come funzioni che come macro (vedere [Raccomandazioni per la scelta tra funzioni e macro](../../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md)). `putwc` e `putwchar` sono versioni a caratteri wide di `putc` e `putchar` rispettivamente.  
  
 Le versioni con suffisso **_nolock** sono identiche, ad eccezione del fatto che non sono protette da interferenze da parte di altri thread. Potrebbero essere più veloci perché non comportano il sovraccarico dovuto al blocco degli altri thread. Utilizzare queste funzioni solo in contesti thread-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_puttchar`|`putchar`|`putchar`|**putwchar**|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`putchar`|\<stdio.h>|  
|`putwchar`|\<stdio.h> o \<wchar.h>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Gli handle del flusso standard associati alla console, `stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime del linguaggio C nelle app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_putchar.c  
/* This program uses putc to write buffer  
 * to a stream. If an error occurs, the program  
 * stops before writing the entire buffer.  
 */  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE *stream;  
   char *p, buffer[] = "This is the line of output\n";  
   int  ch;  
  
   ch = 0;  
  
   for( p = buffer; (ch != EOF) && (*p != '\0'); p++ )  
      ch = putchar( *p );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
This is the line of output  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fputc, fputwc](../../c-runtime-library/reference/fputc-fputwc.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)