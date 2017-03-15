---
title: "scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wscanf_s"
  - "_wscanf_s_l"
  - "scanf_s"
  - "_scanf_s_l"
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
  - "wscanf_s"
  - "_tscanf_s_l"
  - "_wscanf_s_l"
  - "scanf_s"
  - "_tscanf_s"
  - "_scanf_s_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lettura da flussi di input dei dati [C++]"
  - "buffer [C++], sovraccarichi"
  - "_scanf_s_l (funzione)"
  - "_wscanf_s_l (funzione)"
  - "tscanf_s_l (funzione)"
  - "tscanf_s (funzione)"
  - "scanf_s (funzione)"
  - "lettura dal flusso di input dei dati [C++]"
  - "wscanf_s (funzione)"
  - "_tscanf_s_l (funzione)"
  - "_tscanf_s (funzione)"
  - "scanf_s_l (funzione)"
  - "dati formattati [C++], flussi di input"
  - "wscanf_s_l (funzione)"
  - "buffer [C++], evitare i sovraccarichi"
ms.assetid: 42cafcf7-52d6-404a-80e4-b056a7faf2e5
caps.latest.revision: 33
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 33
---
# scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati formattati dal flusso di input standard. Queste versioni di [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md) con miglioramenti della sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
int scanf_s(  
   const char *format [,  
   argument]...   
);  
int _scanf_s_l(  
   const char *format,  
   locale_t locale [,  
   argument]...   
);  
int wscanf_s(  
   const wchar_t *format [,  
   argument]...   
);  
int _wscanf_s_l(  
   const wchar_t *format,  
   locale_t locale [,  
   argument]...   
);  
```  
  
#### Parametri  
 `format`  
 Stringa di formato controllo.  
  
 `argument`  
 Argomenti facoltativi.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Restituisce il numero di campi che vengono convertiti ed assegnati correttamente; il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Il valore restituito è`EOF` per un errore o se viene rilevato il carattere di fine del file o il carattere di fine della stringa durante il primo tentativo di leggere un carattere. Se `format` è un `NULL` puntatore, il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `scanf_s` e `wscanf_s` restituiscono `EOF` e impostano `errno` su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `scanf_s` legge i dati dal flusso di input standard `stdin` e scrive i dati nella posizione che è data da `argument`. Ogni `argument` deve essere un puntatore a una variabile di un tipo che corrisponde a un identificatore di tipo in `format`. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
 `wscanf_s` è una versione a caratteri wide di `scanf_s`; l'argomento `format` in `wscanf_s` è una stringa di caratteri wide.`wscanf_s` e `scanf_s` si comportano in modo analogo, se il flusso viene aperto in modalità ANSI.`scanf_s` non supporta attualmente l'input da un flusso UNICODE.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.  
  
 A differenza di `scanf` e `wscanf`, per `scanf_s` e `wscanf_s` è necessario specificare la dimensione del buffer di tutti i parametri di input `c`, `C`, `s`, `S` o set di controllo stringa inclusi in `[]`. La dimensione del buffer in caratteri viene passata come parametro aggiuntivo segue immediatamente dopo il puntatore del buffer o della variabile. Ad esempio, se si sta leggendo una stringa, la dimensione del buffer per tale stringa viene passata nel modo seguente:  
  
 `char s[10];`  
  
 `scanf_s("%9s", s, (unsigned)_countof(s)); // buffer size is 10, width specification is 9`  
  
 La dimensione del buffer include il carattere di terminazione null. È possibile utilizzare un campo di specifica della larghezza per assicurare che il token che viene letto possa essere inserito nel buffer. Se non viene utilizzato alcun campo di specifica di larghezza e il token letto è troppo grande per entrare nel buffer, non vengono scritti dati nel buffer.  
  
> [!NOTE]
>  Il parametro di dimensione è di tipo `unsigned` non `size_t`. Utilizzare un cast statico per convertire un `size_t` valore `unsigned` le configurazioni di compilazione a 64 bit.  
  
 L'esempio seguente mostra che il parametro di dimensione del buffer indica il numero massimo di caratteri, non di byte. Nella chiamata a `wscanf_s`, la larghezza del carattere indicata dal tipo di buffer non corrisponde alla larghezza del carattere indicata dall'identificatore di formato.  
  
```  
wchar_t ws[10];  
wscanf_s(L"%9S", ws, (unsigned)_countof(ws));  
```  
  
 L'identificatore di formato `S` indica l'utilizzo della larghezza del carattere che è "opposta" alla larghezza predefinita supportata dalla funzione. La larghezza del carattere è a byte singolo, ma la funziona supporta caratteri a byte doppio. In questo esempio viene letta una stringa con un massimo di 9 caratteri wide a byte singolo e li inserisce in un buffer di caratteri wide a byte doppio. I caratteri vengono trattati come valori a byte singolo; i primi due caratteri vengono archiviati in `ws[0]`, i due successivi vengono archiviati in `ws[1]` e così via.  
  
 Nel caso dei caratteri, un singolo carattere può essere letto come segue:  
  
 `char c;`  
  
 `scanf_s("%c", &c, 1);`  
  
 Quando vengono letti più caratteri per stringhe con terminazione non null, vengono utilizzati interi per specificare la larghezza e la dimensione del buffer.  
  
 `char c[4];`  
  
 `scanf_s("%4c", &c, (unsigned)_countof(c)); // not null terminated`  
  
 Per altre informazioni, vedere [Specifica della larghezza per scanf](../../c-runtime-library/scanf-width-specification.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tscanf_s`|`scanf_s`|`scanf_s`|`wscanf_s`|  
|`_tscanf_s_l`|`_scanf_s_l`|`_scanf_s_l`|`_wscanf_s_l`|  
  
 Per altre informazioni, vedere [Campi per la specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`scanf_s`, `_scanf_s_l`|\<stdio.h\>|  
|`wscanf_s`, `_wscanf_s_l`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Gli handle del flusso standard associati alla console, `stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime del linguaggio C nelle app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_scanf_s.c  
// This program uses the scanf_s and wscanf_s functions  
// to read formatted input.  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   int      i,  
            result;  
   float    fp;  
   char     c,  
            s[80];  
   wchar_t  wc,  
            ws[80];  
  
   result = scanf_s( "%d %f %c %C %s %S", &i, &fp, &c, 1,  
                     &wc, 1, s, (unsigned)_countof(s), ws, (unsigned)_countof(ws) );  
   printf( "The number of fields input is %d\n", result );  
   printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c,  
           wc, s, ws);  
   result = wscanf_s( L"%d %f %hc %lc %S %ls", &i, &fp, &c, 2,  
                      &wc, 1, s, (unsigned)_countof(s), ws, (unsigned)_countof(ws) );  
   wprintf( L"The number of fields input is %d\n", result );  
   wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp,  
            c, wc, s, ws);  
}  
```  
  
 Questo programma produce l'output seguente quando viene fornito questo input:  
  
 `71 98.6 h z Byte characters`  
  
 `36 92.3 y n Wide characters`  
  
```Output  
Il numero di campi input è il contenuto è 6: 71 h 98.599998 z, il numero di campi di input di caratteri a Byte è 6 è il contenuto: 36 92.300003 y n caratteri "Wide"  
```  
  
## Equivalente .NET Framework  
  
-   [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
-   [System::console::ReadLine](https://msdn.microsoft.com/en-us/library/system.console.readline.aspx)  
  
-   Vedere anche `Parse` metodi, ad esempio [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [fscanf, \_fscanf\_l, fwscanf, \_fwscanf\_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [sscanf, \_sscanf\_l, swscanf, \_swscanf\_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)