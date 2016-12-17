---
title: "atol, _atol_l, _wtol, _wtol_l | Microsoft Docs"
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
  - "atol"
  - "_wtol_l"
  - "_wtol"
  - "_atol_l"
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
  - "_atol_l"
  - "_ttol_l"
  - "_tstol_l"
  - "_tstol"
  - "_wtol"
  - "_ttol"
  - "_wtol_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tstol (funzione)"
  - "atol (funzione)"
  - "ttol (funzione)"
  - "_atol_l (funzione)"
  - "_tstol_l (funzione)"
  - "conversione di stringhe, in Integer"
  - "_tstol (funzione)"
  - "_ttol (funzione)"
  - "_ttol_l (funzione)"
  - "atol_l (funzione)"
  - "wtol_l (funzione)"
  - "_wtol_l (funzione)"
  - "wtol (funzione)"
  - "_wtol (funzione)"
ms.assetid: cedfc21c-2d64-4e9c-bd04-bdf60b12db46
caps.latest.revision: 22
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# atol, _atol_l, _wtol, _wtol_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire una stringa in un long integer.  
  
## Sintassi  
  
```  
long atol(  
   const char *str   
);  
long _atol_l(  
   const char *str,  
   _locale_t locale  
);  
long _wtol(  
   const wchar_t *str   
);  
long _wtol_l(  
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
 Ogni funzione restituisce il valore `long` che viene prodotto interpretando i caratteri di input come un numero.  Il valore restituito è 0L per `atol` se l'input non può essere convertito in un valore di tale tipo.  
  
 Nel caso di overflow con i valori integrali positivi, `atol` restituisce `LONG_MAX`; nel caso di overflow con i valori integrali negativi, viene restituito `LONG_MIN`.  In tutti i casi esterni all'intervallo, `errno` è impostato su `ERANGE`.  Se il parametro passato è `NULL`, viene invocato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono 0.  
  
## Note  
 Queste funzioni consentono di convertire una stringa di caratteri in un valore long integer \(`atol`\).  
  
 La stringa di input è una sequenza di caratteri che può essere interpretata come valore numerico del tipo specificato.  La funzione arresta la lettura della stringa di input al primo carattere che non riconosce come parte di un numero.  Questo carattere può essere il carattere `NULL` \('\\0' o L'\\0'\) che termina la stringa.  
  
 L'argomento `str` per `atol` ha la seguente forma:  
  
 \[`whitespace`\] \[`sign`\] \[`digits`\]\]  
  
 Un `whitespace` è costituito dallo spazio o dai caratteri di tabulazione, che vengono ignorati; `sign` può essere più \(\+\) o meno \(–\); e `digits` sono costituite da una o più cifre.  
  
 `_wtol` è identico ad `atol`, con la differenza che accetta come parametro una stringa di caratteri "wide".  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare le impostazioni locali correnti.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstol`|`atol`|`atol`|`_wtol`|  
|`_ttol`|`atol`|`atol`|`_wtol`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`atol`|\<stdlib.h\>|  
|`_atol_l`, `_wtol`, `_wtol_l`|\<stdlib.h\> e \<wchar.h\>|  
  
## Esempio  
 Questo programma mostra come i numeri memorizzati come stringhe possono essere convertiti in valori numerici usando la funzione `atol`.  
  
```  
// crt_atol.c  
// This program shows how numbers stored as  
// strings can be converted to numeric values  
// using the atol functions.  
#include <stdlib.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( void )  
{  
    char    *str = NULL;  
    long    value = 0;  
  
    // An example of the atol function  
    // with leading and trailing white spaces.  
    str = "  -2309 ";  
    value = atol( str );  
    printf( "Function: atol( \"%s\" ) = %d\n", str, value );  
  
    // Another example of the atol function   
    // with an arbitrary decimal point.  
    str = "314127.64";  
    value = atol( str );  
    printf( "Function: atol( \"%s\" ) = %d\n", str, value );  
  
    // Another example of the atol function  
    // with an overflow condition occurring.  
    str = "3336402735171707160320";  
    value = atol( str );  
    printf( "Function: atol( \"%s\" ) = %d\n", str, value );  
    if (errno == ERANGE)  
    {  
       printf("Overflow condition occurred.\n");  
    }  
}  
```  
  
  **Function: atol\( "  \-2309 " \) \= \-2309**  
**Function: atol\( "314127.64" \) \= 314127**  
**Function: atol\( "3336402735171707160320" \) \= 2147483647**  
**Si è verificata una condizione di overflow.**   
## Equivalente .NET Framework  
  
-   [System::Convert::ToInt32](https://msdn.microsoft.com/en-us/library/system.convert.toint32.aspx)  
  
-   [System::Convert::ToUInt32](https://msdn.microsoft.com/en-us/library/system.convert.touint32.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [\_ecvt](../../c-runtime-library/reference/ecvt.md)   
 [\_fcvt](../../c-runtime-library/reference/fcvt.md)   
 [\_gcvt](../../c-runtime-library/reference/gcvt.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [\_atodbl, \_atodbl\_l, \_atoldbl, \_atoldbl\_l, \_atoflt, \_atoflt\_l](../../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)