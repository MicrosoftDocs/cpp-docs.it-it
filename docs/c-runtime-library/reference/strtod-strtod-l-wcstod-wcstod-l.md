---
title: "strtod, _strtod_l, wcstod, _wcstod_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wcstod"
  - "_wcstod_l"
  - "_strtod_l"
  - "strtod"
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
  - "api-ms-win-crt-convert-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tcstod"
  - "strtod"
  - "wcstod"
  - "_strtod_l"
  - "_wcstod_l"
  - "stdlib/strtod"
  - "corecrt_wstdlib/wcstod"
  - "stdlib/_strtod_l"
  - "corecrt_wstdlib/_wcstod_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_strtod_l (funzione)"
  - "_tcstod (funzione)"
  - "_tcstod_l (funzione)"
  - "_wcstod_l (funzione)"
  - "conversione di stringhe, in valori a virgola mobile"
  - "strtod (funzione)"
  - "strtod_l (funzione)"
  - "tcstod (funzione)"
  - "tcstod_l (funzione)"
  - "wcstod (funzione)"
  - "wcstod_l (funzione)"
ms.assetid: 0444f74a-ba2a-4973-b7f0-1d77ba88c6ed
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# strtod, _strtod_l, wcstod, _wcstod_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte le stringhe in un valore a precisione doppia.  
  
## Sintassi  
  
```  
double strtod(  
   const char *nptr,  
   char **endptr   
);  
double _strtod_l(  
   const char *nptr,  
   char **endptr,  
   _locale_t locale  
);  
double wcstod(  
   const wchar_t *nptr,  
   wchar_t **endptr   
);  
double wcstod_l(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `nptr`  
 Stringa con terminazione null da convertire.  
  
 `endptr`  
 Puntatore al carattere che arresta la scansione.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `strtod` restituisce il valore di numeri a virgola mobile, tranne quando la rappresentazione può provocare un overflow, in questo caso la funzione restituisce \+\/\-`HUGE_VAL`.  Il segno `HUGE_VAL` corrisponde al segno del valore che non può essere rappresentato.  `strtod` restituisce 0 se nessuna conversione può essere eseguita o se un underflow si verifica.  
  
 `wcstod` restituisce i valori analogamente a `strtod`.  Per entrambe le funzioni, `errno` è impostato su `ERANGE` se un overflow o un underflow si verificano e il gestore non valido di parametro viene richiamato,la procedura viene descritta in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questo, e altri, codici restituiti.  
  
## Note  
 Ogni funzione converte la stringa di input `nptr` in `double`.  La funzione `strtod` converte `nptr` a un valore a precisione doppia.  La funzione `strtod` arresta la lettura della stringa `nptr` al primo carattere che non riconosce come parte di un numero.  Questo può rappresentare il carattere di terminazione null.  `wcstod` è una versione a caratteri estesi di `strtod`; l'argomento `nptr` è una stringa di caratteri estesi.  Altrimenti queste funzioni si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcstod`|`strtod`|`strtod`|`wcstod`|  
|`_tcstod_l`|`_strtod_l`|`_strtod_l`|`_wcstod_l`|  
  
 La `LC_NUMERIC` impostazione locale corrente di categoria, determina il riconoscimento del carattere radice in `nptr`*;* per ulteriori informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti, `_strtod_l` è identico a `_strtod_l` con la differenza che utilizzano le impostazioni locali passate in alternativa.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, il puntatore al carattere che arresta la scansione viene memorizzato nella locazione di memoria indicata da `endptr`.  Se nessuna conversione può essere eseguita \(nessuna cifra valida è stata trovata o è stata specificata una base non valida\), il valore di `nptr` viene archiviato all'indirizzo puntato da `endptr`.  
  
 `strtod` richiede che `nptr` punti ad una stringa nel seguente formato:  
  
 \[`whitespace`\] \[`sign`\] \[`digits`\] \[`.digits`\] \[ {`d` &#124; `D` &#124; `e` &#124; `E`}\[`sign`\]`digits`\]  
  
 Uno `whitespace` può essere costituito dallo spazio o di caratteri di tabulazione, che vengono ignorati; `sign` è sia più \(`+`\) che meno \(`–`\); e `digits` è una o più cifre decimali.  Se nessuna cifra viene visualizzata prima del carattere radice, almeno uno deve apparire dopo il carattere di base.  Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva \(`d`, `D`, `e`, o `E`\) e opzionalmente da un numero Signed Integer.  Se né una parte dell'esponente né un carattere di base viene visualizzato, un carattere di base viene utilizzato per seguire l'ultima cifra nella stringa.  Il primo carattere non idoneo arresta la scansione.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strtod`, `_strtod_l`|\<stdlib.h\>|  
|`wcstod`, `_wcstod_l`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_strtod.c  
// This program uses strtod to convert a  
// string to a double-precision value; strtol to  
// convert a string to long integer values; and strtoul  
// to convert a string to unsigned long-integer values.  
//  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char   *string, *stopstring;  
   double x;  
   long   l;  
   int    base;  
   unsigned long ul;  
  
   string = "3.1415926This stopped it";  
   x = strtod( string, &stopstring );  
   printf( "string = %s\n", string );  
   printf("   strtod = %f\n", x );  
   printf("   Stopped scan at: %s\n\n", stopstring );  
  
   string = "-10110134932This stopped it";  
   l = strtol( string, &stopstring, 10 );  
   printf( "string = %s\n", string );  
   printf("   strtol = %ld\n", l );  
   printf("   Stopped scan at: %s\n\n", stopstring );  
  
   string = "10110134932";  
   printf( "string = %s\n", string );  
  
   // Convert string using base 2, 4, and 8:  
   for( base = 2; base <= 8; base *= 2 )  
   {  
      // Convert the string:  
      ul = strtoul( string, &stopstring, base );  
      printf( "   strtol = %ld (base %d)\n", ul, base );  
      printf( "   Stopped scan at: %s\n", stopstring );  
   }  
}  
```  
  
  **string \= 3.1415926This stopped it**  
 **strtod \= 3.141593**  
 **Scansione arrestata a: Operazione arrestata**  
**string \= \-10110134932This stopped it**  
 **strtol \= \-2147483648**  
 **Scansione arrestata a: Operazione arrestata**  
**string \= 10110134932**  
 **strtol \= 45 \(base 2\)**  
 **Stopped scan at: 34932**  
 **strtol \= 4423 \(base 4\)**  
 **Stopped scan at: 4932**  
 **strtol \= 2134108 \(base 8\)**  
 **Stopped scan at: 932**   
## Equivalente .NET Framework  
 [System::Convert::ToDouble](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtol, wcstol, \_strtol\_l, \_wcstol\_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
 [strtoul, \_strtoul\_l, wcstoul, \_wcstoul\_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [\_create\_locale, \_wcreate\_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [\_free\_locale](../../c-runtime-library/reference/free-locale.md)