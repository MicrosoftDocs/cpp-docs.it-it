---
title: "strtold, _strtold_l, wcstold, _wcstold_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wcstold"
  - "strtold"
  - "_strtold_l"
  - "_wcstold_l"
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
  - "_tcstold_l"
  - "_wcstold_l"
  - "_tcstold"
  - "strtold"
  - "_strtold_l"
  - "wcstold"
dev_langs: 
  - "C++"
ms.assetid: 928c0c9a-bc49-445b-8822-100eb5954115
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# strtold, _strtold_l, wcstold, _wcstold_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte le stringhe in un lungo valore in virgola mobile e precisione doppia.  
  
## Sintassi  
  
```  
long double strtold(  
   const char *nptr,  
   char **endptr   
);  
long double _strtold_l(  
   const char *nptr,  
   char **endptr,  
   _locale_t locale  
);  
long double wcstold(  
   const wchar_t *nptr,  
   wchar_t **endptr   
);  
long double wcstold_l(  
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
 `strtold` restituisce il valore di numeri a virgola mobile come un `long double`, tranne quando la rappresentazione può provocare un overflow—in questo caso la funzione restituisce \+\/\-`HUGE_VALL`.  Il segno `HUGE_VALL` corrisponde al segno del valore che non può essere rappresentato.  `strtold` restituisce 0 se nessuna conversione può essere eseguita o se un underflow si verifica.  
  
 `wcstold` restituisce i valori analogamente a `strtold`.  Per entrambe le funzioni, `errno` è impostato su `ERANGE` se un overflow o un underflow si verificano e il gestore non valido di parametro viene richiamato,la procedura viene descritta in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Per ulteriori informazioni sui codici restituiti, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Ogni funzione converte la stringa di input `nptr` in `long double`.  La funzione `strtold` converte `nptr` a un valore long a precisione doppia.  La funzione `strtold` arresta la lettura della stringa `nptr` al primo carattere che non riconosce come parte di un numero.  Questo può rappresentare il carattere di terminazione null.  La versione a caratteri estesi di `strtold` è `wcstold`; il suo argomento `nptr` è una stringa di caratteri estesi.  In caso contrario, queste funzioni si comportano in modo identico.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcstold`|`strtold`|`strtold`|`wcstold`|  
|`_tcstold_l`|`_strtold_l`|`_strtold_l`|`_wcstold_l`|  
  
 L'impostazione di categoria `LC_NUMERIC` delle impostazioni locali correnti determina il riconoscimento del carattere radice in `nptr`.  Per ulteriori informazioni, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti; `_strtold_l` e `_wcstold_l` sono identiche a `_strtold` e `_wcstold` con la differenza che utilizzano le impostazioni locali passate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, il puntatore al carattere che arresta la scansione viene memorizzato nella locazione di memoria a cui punta `endptr`.  Se nessuna conversione può essere eseguita \(nessuna cifra valida è stata trovata o è stata specificata una base non valida\), il valore di `nptr` viene archiviato all'indirizzo a cui punta `endptr`.  
  
 `strtold` richiede che `nptr` punti ad una stringa nel seguente formato:  
  
 \[`whitespace`\] \[`sign`\] \[`digits`\] \[`.digits`\] \[ {`d` &#124; `D` &#124; `e` &#124; `E`}\[`sign`\]`digits`\]  
  
 Uno `whitespace` può essere costituito dallo spazio o di caratteri di tabulazione, che vengono ignorati; `sign` è sia più \(`+`\) che meno \(`–`\); e `digits` è una o più cifre decimali.  Se nessuna cifra viene visualizzata prima del carattere radice, almeno uno deve apparire dopo il carattere di base.  Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva \(`d`, `D`, `e`, o `E`\) e opzionalmente da un numero Signed Integer.  Se né una parte dell'esponente né un carattere di base viene visualizzato, un carattere di base viene utilizzato per seguire l'ultima cifra nella stringa.  Il primo carattere non idoneo arresta la scansione.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strtold`, `_strtold_l`|\<stdlib.h\>|  
|`wcstold`, `_wcstold_l`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strtold.c  
// Build with: cl /W4 /Tc crt_strtold.c  
// This program uses strtold to convert a  
// string to a long double-precision value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char *string;  
   char *stopstring;  
   long double x;  
  
   string = "3.1415926535898This stopped it";  
   x = strtold(string, &stopstring);  
   printf("string = %s\n", string);  
   printf("   strtold = %.13Lf\n", x);  
   printf("   Stopped scan at: %s\n\n", stopstring);  
}  
```  
  
  **string \= 3.1415926535898This stopped it**  
 **strtold \= 3.1415926535898**  
 **Scansione arrestata a: Operazione arrestata**   
## Equivalente .NET Framework  
 [System::Convert::ToDouble](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, \_strtod\_l, wcstod, \_wcstod\_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtol, wcstol, \_strtol\_l, \_wcstol\_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
 [strtoul, \_strtoul\_l, wcstoul, \_wcstoul\_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [\_create\_locale, \_wcreate\_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [\_free\_locale](../../c-runtime-library/reference/free-locale.md)