---
title: "strtof, _strtof_l, wcstof, _wcstof_l | Microsoft Docs"
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
  - "_strtof_l"
  - "wcstof"
  - "strtof"
  - "_wcstof_l"
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
  - "_tcstof"
  - "_tcstof_l"
  - "stdlib/strtof"
  - "strtof"
  - "stdlib/_strtof_l"
  - "_strtof_l"
  - "corecrt_wstdlib/wcstof"
  - "wcstof"
  - "corecrt_wstdlib/_wcstof_l"
  - "_wcstof_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_strtof_l (funzione)"
  - "_tcstof (funzione)"
  - "_tcstof_l (funzione)"
  - "_wcstof_l (funzione)"
  - "strtof (funzione)"
  - "wcstof (funzione)"
ms.assetid: 52221b46-876d-4fcc-afb1-97512c17a43b
caps.latest.revision: 9
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strtof, _strtof_l, wcstof, _wcstof_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte le stringhe in un valore in virgola mobile e precisione singola.  
  
## Sintassi  
  
```  
float strtof(  
   const char *nptr,  
   char **endptr   
);  
float _strtof_l(  
   const char *nptr,  
   char **endptr,  
   _locale_t locale  
);  
float wcstof(  
   const wchar_t *nptr,  
   wchar_t **endptr   
);  
float wcstof_l(  
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
 `strtof` restituisce il valore di numeri a virgola mobile, tranne quando la rappresentazione può provocare un overflow, in questo caso la funzione restituisce \+\/\-`HUGE_VALF`.  Il segno `HUGE_VALF` corrisponde al segno del valore che non può essere rappresentato.  `strtof` restituisce 0 se nessuna conversione può essere eseguita o se un underflow si verifica.  
  
 `wcstof` restituisce i valori analogamente a `strtof`.  Per entrambe le funzioni, `errno` è impostato su `ERANGE` se un overflow o un underflow si verificano e il gestore non valido di parametro viene richiamato,la procedura viene descritta in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Per ulteriori informazioni sui codici restituiti, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Ogni funzione converte la stringa di input `nptr` in `float`.  La funzione `strtof` converte `nptr` a un valore a precisione singola.  La funzione `strtof` arresta la lettura della stringa `nptr` al primo carattere che non riconosce come parte di un numero.  Questo può rappresentare il carattere di terminazione null.  `wcstof` è una versione a caratteri estesi di `strtof`; l'argomento `nptr` è una stringa di caratteri estesi.  In caso contrario, queste funzioni si comportano in modo identico.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcstof`|`strtof`|`strtof`|`wcstof`|  
|`_tcstof_l`|`_strtof_l`|`_strtof_l`|`_wcstof_l`|  
  
 L'impostazione di categoria `LC_NUMERIC` delle impostazioni locali correnti determina il riconoscimento del carattere radice in `nptr`; per maggiori informazioni, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le funzioni che non hanno il suffisso `_l` utilizzano le impostazioni locali correnti; quelle che hanno il suffisso sono identiche, con la differenza che utilizzano il parametro delle impostazioni locali che è stato passato, a differenza delle altre.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, il puntatore al carattere che arresta la scansione viene memorizzato nella locazione di memoria a cui punta `endptr`.  Se nessuna conversione può essere eseguita \(nessuna cifra valida è stata trovata o è stata specificata una base non valida\), il valore di `nptr` viene archiviato all'indirizzo a cui punta `endptr`.  
  
 `strtof` richiede che `nptr` punti ad una stringa nel seguente formato:  
  
 \[`whitespace`\] \[`sign`\] \[`digits`\] \[`.digits`\] \[ {`d` &#124; `D` &#124; `e` &#124; `E`}\[`sign`\]`digits`\]  
  
 Uno `whitespace` può essere costituito dallo spazio o di caratteri di tabulazione, che vengono ignorati; `sign` è sia più \(`+`\) che meno \(`–`\); e `digits` è una o più cifre decimali.  Se nessuna cifra viene visualizzata prima del carattere radice, almeno uno deve apparire dopo il carattere di base.  Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva \(`d`, `D`, `e`, o `E`\) e opzionalmente da un numero Signed Integer.  Se né una parte dell'esponente né un carattere di base viene visualizzato, un carattere di base viene utilizzato per seguire l'ultima cifra nella stringa.  Il primo carattere non idoneo arresta la scansione.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strtof`, `_strtof_l`|\<stdlib.h\>|  
|`wcstof`, `_wcstof_l`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strtof.c  
// This program uses strtof to convert a  
// string to a single-precision value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char *string;  
   char *stopstring;  
   float x;  
  
   string = "3.14159This stopped it";  
   x = strtof(string, &stopstring);  
   printf("string = %s\n", string);  
   printf("   strtof = %f\n", x);  
   printf("   Stopped scan at: %s\n\n", stopstring);  
}  
```  
  
  **string \= 3.14159This stopped it**  
 **strtof \= 3.141590**  
 **Scansione arrestata a: Operazione arrestata**   
## Equivalente .NET Framework  
 [System::Convert::ToSingle](https://msdn.microsoft.com/en-us/library/system.convert.tosingle.aspx)  
  
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