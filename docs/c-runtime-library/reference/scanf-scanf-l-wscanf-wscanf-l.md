---
title: "scanf, _scanf_l, wscanf, _wscanf_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wscanf_l"
  - "scanf"
  - "_scanf_l"
  - "wscanf"
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
apitype: "DLLExport"
f1_keywords: 
  - "_tscanf"
  - "_scanf_l"
  - "wscanf"
  - "_wscanf_l"
  - "scanf"
  - "_tscanf_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_scanf_l (funzione)"
  - "_tscanf (funzione)"
  - "_tscanf_l (funzione)"
  - "_wscanf_l (funzione)"
  - "dati [C++], lettura dal flusso di input"
  - "dati formattati [C++], flussi di input"
  - "lettura di dati [C++], flussi di input"
  - "scanf (funzione)"
  - "scanf_l (funzione)"
  - "tscanf (funzione)"
  - "tscanf_l (funzione)"
  - "wscanf (funzione)"
  - "wscanf_l (funzione)"
ms.assetid: 73eac607-117f-4be4-9ff0-4afd9cf3c848
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 25
---
# scanf, _scanf_l, wscanf, _wscanf_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati formattatati dal flusso di input standard.  Sono disponibili versioni più sicure di questa funzione; vedere [scanf\_s, \_scanf\_s\_l, wscanf\_s, \_wscanf\_s\_l](../../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md).  
  
## Sintassi  
  
```  
int scanf(  
   const char *format [,  
   argument]...   
);  
int _scanf_l(  
   const char *format,  
   locale_t locale [,  
   argument]...   
);  
int wscanf(  
   const wchar_t *format [,  
   argument]...   
);  
int _wscanf_l(  
   const wchar_t *format,  
   locale_t locale [,  
   argument]...   
);  
```  
  
#### Parametri  
 `format`  
 Stringa di controllo del formato.  
  
 `argument`  
 Argomenti facoltativi.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce il numero di campi che vengono convertiti correttamente e assegnati; nel valore restituito non sono inclusi i campi che sono stati letti, ma non assegnati.  Un valore restituito pari a 0 indica che nessun campo è stato assegnato.  
  
 Se `format` è un `NULL` puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `EOF` e impostano `errno` su `EINVAL`.  
  
 Per ulteriori informazioni su questi, e altri, codici di errore vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .  
  
## Note  
 La funzione `scanf` legge i dati dal flusso di input standard `stdin` e scrive i dati nella locazione che è data da `argument`.  Ogni `argument` deve essere un puntatore alla variabile di un tipo che corrisponde ad un tipo specificato in `format`.  Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
> [!IMPORTANT]
>  Quando si legge una stringa con `scanf` specificare sempre una larghezza per il formato `%s` \(ad esempio, `"%32s"` anziché `"%s"`\); in caso contrario, un input inappropriato può facilmente causare un sovraccarico del buffer.  In alternativa, considerare l'utilizzo di [scanf\_s, \_scanf\_s\_l, wscanf\_s, \_wscanf\_s\_l](../../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) o [fgets](../../c-runtime-library/reference/fgets-fgetws.md).  
  
 `wscanf` è una versione a caratteri estesi di `scanf`; l'argomento `format` in `wscanf` è una stringa di caratteri estesi.  `wscanf` e `scanf` si comportano in modo identico se il flusso viene aperto in modalità ANSI.  `scanf` attualmente non supporta l'input da un flusso di UNICODE.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare quelle del thread corrente.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|---------------------------------------|---------------------|------------------------|  
|`_tscanf`|`scanf`|`scanf`|`wscanf`|  
|`_tscanf_l`|`_scanf_l`|`_scanf_l`|`_wscanf_l`|  
  
 Per ulteriori informazioni, vedere [Specifiche formato dei campi \- funzioni scanf e funzioni wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`scanf`, `_scanf_l`|\<stdio.h\>|  
|`wscanf`, `_wscanf_l`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_scanf.c  
// compile with: /W3  
 /* This program uses the scanf and wscanf functions  
  * to read formatted input.  
  */  
  
#include <stdio.h>  
  
int main( void )  
{  
   int   i, result;  
   float fp;  
   char  c, s[81];  
   wchar_t wc, ws[81];  
   result = scanf( "%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws ); // C4996  
   // Note: scanf and wscanf are deprecated; consider using scanf_s and wscanf_s  
   printf( "The number of fields input is %d\n", result );  
   printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);  
   result = wscanf( L"%d %f %hc %lc %80S %80ls", &i, &fp, &c, &wc, s, ws ); // C4996  
   wprintf( L"The number of fields input is %d\n", result );  
   wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);  
}  
```  
  
  **`71 98,6 di caratteri byte h z 36 92,3 di caratteri wide y n`Il numero di input dei campi è 6**  
**Il contenuto è: 71 98,599998 di caratteri byte h z**  
**Il numero dell'input di campi è 6.**  
**Il contenuto è: 36 92,300003 di caratteri wide y n**   
## Equivalente .NET Framework  
  
-   [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
-   [System::Console::ReadLine](https://msdn.microsoft.com/en-us/library/system.console.readline.aspx)  
  
-   Vedere anche i metodi `Parse`, come [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [fscanf, \_fscanf\_l, fwscanf, \_fwscanf\_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [sscanf, \_sscanf\_l, swscanf, \_swscanf\_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)