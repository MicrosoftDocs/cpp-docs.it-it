---
title: "sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__swprintf_l"
  - "sprintf"
  - "_sprintf_l"
  - "_swprintf_l"
  - "swprintf"
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
  - "_stprintf_l"
  - "__swprintf_l"
  - "sprintf_l"
  - "swprintf"
  - "_sprintf_l"
  - "sprintf"
  - "_stprintf"
  - "stprintf_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__swprintf_l (funzione)"
  - "_CRT_NON_CONFORMING_SWPRINTFS"
  - "_sprintf_l (funzione)"
  - "_stprintf (funzione)"
  - "_stprintf_l (funzione)"
  - "_swprintf_l (funzione)"
  - "testo formattato [C++]"
  - "sprintf (funzione)"
  - "sprintf_l (funzione)"
  - "stprintf (funzione)"
  - "stprintf_l (funzione)"
  - "stringhe [C++], scrittura"
  - "swprintf (funzione)"
  - "swprintf_l (funzione)"
ms.assetid: f6efe66f-3563-4c74-9455-5411ed939b81
caps.latest.revision: 36
caps.handback.revision: 34
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrivere dati formattati in una stringa.  Sono disponibili versioni più sicure di alcune di queste funzioni; vedere [sprintf\_s, \_sprintf\_s\_l, swprintf\_s, \_swprintf\_s\_l](../../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md).  Le versioni sicure di `swprintf` e `_swprintf_l` non accettano un parametro `count`.  
  
## Sintassi  
  
```  
int sprintf(  
   char *buffer,  
   const char *format [,  
   argument] ...   
);  
int _sprintf_l(  
   char *buffer,  
   const char *format,  
   locale_t locale [,  
   argument] ...   
);  
int swprintf(  
   wchar_t *buffer,  
   size_t count,  
   const wchar_t *format [,  
   argument]...  
);  
int _swprintf_l(  
   wchar_t *buffer,  
   size_t count,  
   const wchar_t *format,  
   locale_t locale [,  
   argument] ...   
);  
int __swprintf_l(  
   wchar_t *buffer,  
   const wchar_t *format,  
   locale_t locale [,  
   argument] ...   
);  
template <size_t size>  
int sprintf(  
   char (&buffer)[size],  
   const char *format [,  
   argument] ...   
); // C++ only  
template <size_t size>  
int _sprintf_l(  
   char (&buffer)[size],  
   const char *format,  
   locale_t locale [,  
   argument] ...   
); // C++ only  
  
```  
  
#### Parametri  
 `buffer`  
 Percorso di archiviazione per l'output  
  
 `count`  
 Numero massimo di caratteri da archiviare nella versione Unicode di questa funzione.  
  
 `format`  
 Stringa di controllo del formato  
  
 `argument`  
 Argomenti facoltativi  
  
 `locale`  
 Impostazioni locali da usare.  
  
 Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Valore restituito  
 Numero di caratteri scritti o –1 se si è verificato un errore.  Se `buffer` o `format` è un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono \-1 e impostano `errno` su `EINVAL`.  
  
 `sprintf` restituisce il numero di byte archiviato in `buffer`, senza contare il carattere Null terminale.  `swprintf` restituisce il numero di caratteri wide archiviati in `buffer`, senza contare il carattere wide del Null di terminazione.  
  
## Note  
 La funzione `sprintf` formatta e archivia una serie di caratteri e di valori in `buffer`.  Ogni funzione `argument` \(se presente\) viene convertita e restituita in base al formato specificato in `format`.  Il formato è costituito da caratteri ordinari e ha lo stesso formato e la stessa funzione dell'argomento `format` per la funzione [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  Un carattere Null viene aggiunto dopo l'ultimo carattere scritto.  Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
> [!IMPORTANT]
>  Se si usa `sprintf`, non è possibile limitare il numero di caratteri scritti, ovvero codice che usa `sprintf` è soggetto a sovraccarichi del buffer.  È consigliabile usare la funzione correlata [\_snprintf](../../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md), che consente di specificare un numero massimo di caratteri da scrivere nel `buffer` oppure usare [\_scprintf](../../c-runtime-library/reference/scprintf-scprintf-l-scwprintf-scwprintf-l.md) per determinare le dimensioni richieste di un buffer.  Assicurarsi anche che `format` non sia una stringa definita dall'utente.  
  
 `swprintf` è una versione a caratteri "wide" di `sprintf`. Gli argomenti puntatori per `swprintf` sono stringhe a caratteri "wide".  Il rilevamento degli errori di codifica in `swprintf` può essere diverso da quello di `sprintf`.  `swprintf` e `fwprintf` si comportano in modo identico con la differenza che `swprintf` scrive l'output in una stringa anziché in una destinazione di tipo `FILE` e `swprintf` richiede il parametro `count` per specificare il numero massimo di caratteri da scrivere.  Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
 `swprintf` è conforme allo standard ISO C che richiede il secondo parametro, `count`, di tipo `size_t`.  Per forzare il comportamento non standard precedente, definire `_CRT_NON_CONFORMING_SWPRINTFS`.  In una versione futura, il comportamento precedente potrebbe venire rimosso, quindi il codice dovrebbe essere modificato per usare il nuovo comportamento conforme.  
  
 In C\+\+ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure.  Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_stprintf`|`sprintf`|`sprintf`|`_swprintf`|  
|`_stprintf_l`|`_sprintf_l`|`_sprintf_l`|`__swprintf_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`sprintf`, `_sprintf_l`|\<stdio.h\>|  
|`swprintf`, `_swprintf_l`|\<stdio.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_sprintf.c  
// compile with: /W3  
// This program uses sprintf to format various  
// data and place them in the string named buffer.  
  
#include <stdio.h>  
  
int main( void )  
{  
   char  buffer[200], s[] = "computer", c = 'l';  
   int   i = 35, j;  
   float fp = 1.7320534f;  
  
   // Format and print various data:   
   j  = sprintf( buffer,     "   String:    %s\n", s ); // C4996  
   j += sprintf( buffer + j, "   Character: %c\n", c ); // C4996  
   j += sprintf( buffer + j, "   Integer:   %d\n", i ); // C4996  
   j += sprintf( buffer + j, "   Real:      %f\n", fp );// C4996  
   // Note: sprintf is deprecated; consider using sprintf_s instead  
  
   printf( "Output:\n%s\ncharacter count = %d\n", buffer, j );  
}  
```  
  
  **Output:**  
 **String:    computer**  
 **Character: l**  
 **Integer:   35**  
 **Real:      1.732053**  
**character count \= 79**   
## Esempio  
  
```  
// crt_swprintf.c  
// wide character example  
// also demonstrates swprintf returning error code  
#include <stdio.h>  
  
int main( void )  
{  
   wchar_t buf[100];  
   int len = swprintf( buf, 100, L"%s", L"Hello world" );  
   printf( "wrote %d characters\n", len );  
   len = swprintf( buf, 100, L"%s", L"Hello\xffff world" );  
   // swprintf fails because string contains WEOF (\xffff)  
   printf( "wrote %d characters\n", len );  
}  
```  
  
  **wrote 11 characters**  
**wrote \-1 characters**   
## Equivalente .NET Framework  
 [System::String::Format](https://msdn.microsoft.com/en-us/library/system.string.format.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sscanf, \_sscanf\_l, swscanf, \_swscanf\_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)