---
title: "printf_s, _printf_s_l, wprintf_s, _wprintf_s_l | Microsoft Docs"
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
  - "_printf_s_l"
  - "wprintf_s"
  - "_wprintf_s_l"
  - "printf_s"
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
  - "wprintf_s"
  - "printf_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_printf_s_l (funzione)"
  - "_tprintf_s (funzione)"
  - "_tprintf_s_l (funzione)"
  - "_wprintf_s_l (funzione)"
  - "testo formattato [C++]"
  - "printf (funzione), campi di specifica di formato"
  - "printf (funzione), utilizzo"
  - "printf_s (funzione)"
  - "printf_s_l (funzione)"
  - "tprintf_s (funzione)"
  - "tprintf_s_l (funzione)"
  - "wprintf_s (funzione)"
  - "wprintf_s_l (funzione)"
ms.assetid: 044ebb2e-5cc1-445d-bb4c-f084b405615b
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# printf_s, _printf_s_l, wprintf_s, _wprintf_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Stampa l'output formattato nel flusso di output standard.  Queste versioni di [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) contengono i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
int printf_s(  
   const char *format [,  
   argument]...   
);  
int _printf_s_l(  
   const char *format,  
   locale_t locale [,  
   argument]...   
);  
int wprintf_s(  
   const wchar_t *format [,  
   argument]...   
);  
int _wprintf_s_l(  
   const wchar_t *format,  
   locale_t locale [,  
   argument]...   
);  
```  
  
#### Parametri  
 `format`  
 Controllo formato.  
  
 `argument`  
 Argomenti facoltativi.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce il numero di caratteri stampati o un valore negativo se si verifica un errore.  
  
## Note  
 La funzione `printf_s` formatta e stampa una serie di caratteri e di valori nel flusso di output standard, `stdout`.  Se gli argomenti seguono il *formato* stringa, la stringa `format` deve contenere le specifiche che determinano il formato di output per gli argomenti.  
  
 La differenza principale tra `printf_s` e `printf` è `printf_s` che controlla la stringa di formato per i caratteri di formattazione validi, mentre controlli `printf` solo se la stringa di formato è un puntatore null.  Se il controllo non riesce, un gestore non valido di parametro viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` su `EINVAL`.  
  
 Per informazioni su `errno` e i codici di errore, vedere [\_doserrno, errno, \_sys\_errlist e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 `printf_s` e `fprintf_s` si comportano in modo identico con la differenza che `printf_s` scrive l'output su `stdout` anziché su una destinazione di tipo `FILE`.  Per ulteriori informazioni, vedere [fprintf\_s, \_fprintf\_s\_l, fwprintf\_s, \_fwprintf\_s\_l](../../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md).  
  
 `wprintf_s` è una versione a caratteri di tipo "wide" di `printf_s`; in `format` è una stringa di caratteri di tipo "wide".  `wprintf_s` e `printf_s` si comportano in modo identico se il flusso viene aperto in modalità ANSI.  `printf_s` non supporta attualmente l'output in un flusso UNICODE.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare quelle del thread corrente.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_unicode definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tprintf_s`|`printf_s`|`printf_s`|`wprintf_s`|  
|`_tprintf_s_l`|`_printf_s_l`|`_printf_s_l`|`_wprintf_s_l`|  
  
 L'argomento `format` è costituito da caratteri ordinari, sequenze di escape e, se gli argomenti seguono `format`, dalle specifiche di formato.  I caratteri ordinari e le sequenze di escape vengono copiati in `stdout` per il relativo aspetto.  Ad esempio, la riga di comando:  
  
```  
printf_s("Line one\n\t\tLine two\n");   
```  
  
 l'output  
  
```  
Line one  
        Line two  
```  
  
 [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md) inizia sempre con un segno di percentuale \(`%`\) e viene letto da sinistra a destra.  Quando `printf_s` incontra la prima specifica del formato \(se esistente\), converte il valore del primo argomento dopo `format` e ne esegue l'output di conseguenza.  La seconda specifica di formato causa la conversione e la restituzione del secondo argomento e così via.  Se sono presenti più argomenti che sono specifiche di formato, gli argomenti aggiuntivi vengono ignorati.  I risultati non sono definiti se non vi sono argomenti sufficienti per tutte le specifiche di formato.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`printf_s`, `_printf_s_l`|\<stdio.h\>|  
|`wprintf_s`, `_wprintf_s_l`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_printf_s.c  
/* This program uses the printf_s and wprintf_s functions  
 * to produce formatted output.  
 */  
  
#include <stdio.h>  
  
int main( void )  
{  
   char   ch = 'h', *string = "computer";  
   int    count = -9234;  
   double fp = 251.7366;  
   wchar_t wch = L'w', *wstring = L"Unicode";  
  
   /* Display integers. */  
   printf_s( "Integer formats:\n"  
           "   Decimal: %d  Justified: %.6d  Unsigned: %u\n",  
           count, count, count );  
  
   printf_s( "Decimal %d as:\n   Hex: %Xh  C hex: 0x%x  Octal: %o\n",  
            count, count, count, count );  
  
   /* Display in different radixes. */  
   printf_s( "Digits 10 equal:\n   Hex: %i  Octal: %i  Decimal: %i\n",  
            0x10, 010, 10 );  
  
   /* Display characters. */  
  
   printf_s("Characters in field (1):\n%10c%5hc%5C%5lc\n", ch, ch, wch, wch);  
   wprintf_s(L"Characters in field (2):\n%10C%5hc%5c%5lc\n", ch, ch, wch, wch);  
  
   /* Display strings. */  
  
   printf_s("Strings in field (1):\n%25s\n%25.4hs\n   %S%25.3ls\n",  
   string, string, wstring, wstring);  
   wprintf_s(L"Strings in field (2):\n%25S\n%25.4hs\n   %s%25.3ls\n",  
       string, string, wstring, wstring);  
  
   /* Display real numbers. */  
   printf_s( "Real numbers:\n   %f %.2f %e %E\n", fp, fp, fp, fp );  
  
   /* Display pointer. */  
   printf_s( "\nAddress as:   %p\n", &count);  
  
}  
```  
  
## Esempio di output  
  
```  
Integer formats:  
   Decimal: -9234  Justified: -009234  Unsigned: 4294958062  
Decimal -9234 as:  
   Hex: FFFFDBEEh  C hex: 0xffffdbee  Octal: 37777755756  
Digits 10 equal:  
   Hex: 16  Octal: 8  Decimal: 10  
Characters in field (1):  
         h    h    w    w  
Characters in field (2):  
         h    h    w    w  
Strings in field (1):  
                 computer  
                     comp  
   Unicode                      Uni  
Strings in field (2):  
                 computer  
                     comp  
   Unicode                      Uni  
Real numbers:  
   251.736600 251.74 2.517366e+002 2.517366E+002  
  
Address as:   0012FF78  
  
```  
  
## Equivalente .NET Framework  
  
-   [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
-   [System::Console::WriteLine](https://msdn.microsoft.com/en-us/library/system.console.writeline.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)