---
title: "putchar, putwchar | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "putchar"
  - "putwchar"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "putchar"
  - "putwchar"
  - "_puttchar"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_puttchar (funzione)"
  - "caratteri, scrittura"
  - "putchar (funzione)"
  - "putwchar (funzione)"
  - "output standard, scrittura"
ms.assetid: 93657c7f-cca1-4032-8e3a-cd6ab6193748
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# putchar, putwchar
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive un carattere nel **stdout**.  
  
## Sintassi  
  
```  
  
      int putchar(  
   int c   
);  
wint_t putwchar(  
   wchar_t c   
);  
```  
  
#### Parametri  
 `c`  
 Carattere da scrivere.  
  
## Valore restituito  
 Restituisce il carattere scritto.  Per indicare un errore o una condizione di fine del file, `putc` e `putchar` restituiscono `EOF`; `putwc` e `putwchar` restituisce **WEOF**.  Per tutte quattro le routine, utilizzare [ferror](../../c-runtime-library/reference/ferror.md) o [feof](../../c-runtime-library/reference/feof.md) per verificare la presenza di un errore o di fine del file.  Se viene passato un puntatore a null per `stream`, queste funzioni generano un'eccezione di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `EOF` o **WEOF** e impostano `errno` su `EINVAL`.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici di errore.  
  
## Note  
 La routine `putc` scrive il singolo carattere `c` sullo `stream` di output alla posizione corrente.  Qualsiasi integer può essere passato a `putc`, ma solo gli 8 bit più significativi vengono scritti.  La routine `putchar` è identica a **putc\(** `c`**, stdout \)**.  Per ogni routine, se si verifica un errore di lettura, viene impostato l'indicatore dell'errore per il flusso.  `putc` e `putchar` sono simili a `fputc` e di `_fputchar`, rispettivamente, ma vengono implementati sia come funzioni che come macro \(vedere [Scelta tra le funzioni e le macro](../../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md)\).  `putwc` e `putwchar` sono versioni a caratteri estesi rispettivamente di `putc` e `putchar`.  
  
 Le versioni con il suffisso  sono identiche ma non sono protette da interferenze da parte di altre thread.  Potrebbero essere più veloci poiché non comportano un sovraccarico che blocca le altre thread.  Utilizzare queste funzioni solo in contesti thread\-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_puttchar`|`putchar`|`putchar`|**putwchar**|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`putchar`|\<stdio.h\>|  
|`putwchar`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
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
  
## Output  
  
```  
This is the line of output  
```  
  
## Equivalente .NET Framework  
  
-   [System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)  
  
-   [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fputc, fputwc](../../c-runtime-library/reference/fputc-fputwc.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)