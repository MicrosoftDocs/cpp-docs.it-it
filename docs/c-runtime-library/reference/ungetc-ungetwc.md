---
title: "ungetc, ungetwc | Microsoft Docs"
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
  - "ungetwc"
  - "ungetc"
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
  - "_ungettc"
  - "ungetwc"
  - "ungetc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ungettc (funzione)"
  - "caratteri, push back nel flusso"
  - "ungetc (funzione)"
  - "ungettc (funzione)"
  - "ungetwc (funzione)"
ms.assetid: e0754f3a-b4c6-408f-90c7-e6387b830d84
caps.latest.revision: 16
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ungetc, ungetwc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Reinserisce un carattere nel flusso.  
  
## Sintassi  
  
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
  
#### Parametri  
 `c`  
 Carattere da inserire.  
  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 Se eseguita correttamente, ognuna di queste funzioni restituisce l'argomento `c`*.* Se `c` non può essere reinserito oppure se non è stato letto nessun carattere, il flusso di input è invariato e `ungetc` restituisce `EOF`; `ungetwc` restituisce `WEOF`.  Se `stream` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `EOF` o `WEOF` viene ritornato e `errno` è impostato su `EINVAL`.  
  
 Per ulteriori informazioni su questi, e altri, codici di errore vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .  
  
## Note  
 La funzione `ungetc` respinge il carattere `c` in `stream` e rimuove l'indicatore di fine file.  Il flusso deve essere aperto per essere letto.  Un'operazione di lettura passa a `stream` inizia con `c`*.* Un tentativo di inserire `EOF` nel flusso utilizzando `ungetc` viene ignorato.  
  
 I caratteri inseriti nel flusso da `ungetc` possono essere eliminati se `fflush`, `fseek`, `fsetpos`, o viene chiamato `rewind` prima che il carattere venga letto dal flusso.  L'indicatore della posizione avrà il valore che aveva prima che i caratteri siano spinti indietro.  L'archiviazione esterna che corrisponde al flusso resterà invariata.  In una chiamata corretta `ungetc` in un flusso di testo, l'indicatore di posizione non è specificato fino a quando tutti i caratteri spinti indietro vengono letti o ignorati.  In ogni chiamata corretta `ungetc` in un flusso binario, l'indicatore di posizione è decrementato; se il valore è 0 prima di una chiamata, il valore non è definito dopo la chiamata.  
  
 I risultati sono imprevedibili se `ungetc` viene chiamato due volte oppure se l'operazione della funzione di posizionamento è tra due chiamate.  Dopo che una chiamata a `fscanf`, una chiamata a `ungetc` può avere esito negativo a meno che un'altra operazione di lettura \(ad esempio `getc`\) sia stata eseguita.  Poiché la stessa `fscanf` chiama `ungetc`.  
  
 `ungetwc` è una versione a caratteri di tipo "wide" di `ungetc`.  Tuttavia, in ogni chiamata corretta `ungetwc` su un flusso di testo o binario, il valore dell'indicatore di posizione del file non è specificato fino a quando tutti i caratteri spinti in dietro vengono letti o ignorati.  
  
 Queste funzioni sono dati riservati del blocco e thread\-safe durante l'esecuzione.  Per una versione non bloccante, vedere [\_ungetc\_nolock, \_ungetwc\_nolock](../../c-runtime-library/reference/ungetc-nolock-ungetwc-nolock.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ungettc`|`ungetc`|`ungetc`|`ungetwc`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`ungetc`|\<stdio.h\>|  
|`ungetwc`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
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
  
  **`521a`Number \= 521**  
**Carattere successivo nel flusso \= 'a'**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)   
 [putc, putwc](../../c-runtime-library/reference/putc-putwc.md)