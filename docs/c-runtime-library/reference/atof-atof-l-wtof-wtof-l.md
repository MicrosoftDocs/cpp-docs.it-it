---
title: "atof, _atof_l, _wtof, _wtof_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wtof_l"
  - "atof"
  - "_atof_l"
  - "_wtof"
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
  - "_tstof"
  - "_ttof"
  - "atof"
  - "stdlib/atof"
  - "math/atof"
  - "_atof_l"
  - "stdlib/_atof_l"
  - "math/_atof_l"
  - "_wtof"
  - "corecrt_wstdlib/_wtof"
  - "_wtof_l"
  - "corecrt_wstdlib/_wtof_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tstof (funzione)"
  - "atof_l (funzione)"
  - "_atof_l (funzione)"
  - "atof (funzione)"
  - "_tstof (funzione)"
  - "_ttof (funzione)"
  - "wtof (funzione)"
  - "_wtof_l (funzione)"
  - "ttof (funzione)"
  - "wtof_l (funzione)"
  - "_wtof (funzione)"
  - "conversione di stringhe, in valori a virgola mobile"
ms.assetid: eb513241-c9a9-4f5c-b7e7-a49b14abfb75
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 26
---
# atof, _atof_l, _wtof, _wtof_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire una stringa in double.  
  
## Sintassi  
  
```  
double atof(  
   const char *str   
);  
double _atof_l(  
   const char *str,  
   _locale_t locale  
);  
double _wtof(  
   const wchar_t *str   
);  
double _wtof_l(  
   const wchar_t *str,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `str`  
 Stringa da convertire.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ogni funzione restituisce il valore `double` che viene prodotto interpretando i caratteri di input come un numero.  Il valore restituito è 0.0 se l'input non può essere convertito in un valore di tale tipo.  
  
 In tutti i casi esterni all'intervallo, errno viene impostato su `ERANGE`.  Se il parametro passato è `NULL`, viene invocato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono 0.  
  
## Note  
 Queste funzioni consentono di convertire una stringa di caratteri in un valore a precisione doppia e virgola mobile.  
  
 La stringa di input è una sequenza di caratteri che può essere interpretata come valore numerico del tipo specificato.  La funzione arresta la lettura della stringa di input al primo carattere che non riconosce come parte di un numero.  Questo carattere può essere il carattere null \('\\0' or L'\\0'\) che termina la stringa.  
  
 L'argomento `str` per `atof` e `_wtof` ha la seguente forma:  
  
 \[`whitespace`\] \[`sign`\] \[`digits`\] \[`.digits`\] \[ {`d` &#124; `D` &#124; `e` &#124; `E` }\[`sign`\]`digits`\]  
  
 Un `whitespace` è costituito dallo spazio o dai caratteri di tabulazione, i quali vengono ignorati; `sign` può essere più \(\+\) o meno \(–\); e `digits` sono una o più cifre decimali.  Se nessuna cifra viene visualizzata prima del separatore decimale, almeno uno deve apparire dopo il separatore decimale.  Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva \(`d`, `D`, `e`, o `E`\) e opzionalmente da un numero decimale intero con segno.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare le impostazioni locali correnti.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstof`|`atof`|`atof`|`_wtof`|  
|`_ttof`|`atof`|`atof`|`_wtof`|  
  
## Requisiti  
  
|Routine\(s\)|Intestazione obbligatoria|  
|------------------|-------------------------------|  
|`atof`|\<stdlib.h\> e \<stdlib.h\>|  
|`_atof_l`|\<stdlib.h\> e \<stdlib.h\>|  
|`_wtof`, `_wtof_l`|\<stdlib.h\> o \<wchar.h\>|  
  
## Esempio  
 Questo programma mostra come i numeri memorizzati come stringhe possono essere convertiti in valori numerici usando la funzione `atof`.  
  
```  
// crt_atof.c  
//  
// This program shows how numbers stored as   
// strings can be converted to numeric  
// values using the atof function.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
    char    *str = NULL;  
    double  value = 0;  
  
    // An example of the atof function  
    // using leading and training spaces.  
    str = "  3336402735171707160320 ";  
    value = atof( str );  
    printf( "Function: atof( \"%s\" ) = %e\n", str, value );  
  
    // Another example of the atof function  
    // using the 'd' exponential formatting keyword.  
    str = "3.1412764583d210";  
    value = atof( str );  
    printf( "Function: atof( \"%s\" ) = %e\n", str, value );  
  
    // An example of the atof function  
    // using the 'e' exponential formatting keyword.  
    str = "  -2309.12E-15";  
    value = atof( str );  
    printf( "Function: atof( \"%s\" ) = %e\n", str, value );  
  
}  
```  
  
  **Function: atof\( "  3336402735171707160320 " \) \= 3.336403e\+021**  
**Function: atof\( "3.1412764583d210" \) \= 3.141276e\+210**  
**Function: atof\( "  \-2309.12E\-15" \) \= \-2.309120e\-012**   
## Equivalente .NET Framework  
  
-   [System::Convert::ToSingle](https://msdn.microsoft.com/en-us/library/system.convert.tosingle.aspx)  
  
-   [System::Convert::ToDouble](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [\_ecvt](../../c-runtime-library/reference/ecvt.md)   
 [\_fcvt](../../c-runtime-library/reference/fcvt.md)   
 [\_gcvt](../../c-runtime-library/reference/gcvt.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [\_atodbl, \_atodbl\_l, \_atoldbl, \_atoldbl\_l, \_atoflt, \_atoflt\_l](../../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)