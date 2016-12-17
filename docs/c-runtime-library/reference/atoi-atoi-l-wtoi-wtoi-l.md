---
title: "atoi, _atoi_l, _wtoi, _wtoi_l | Microsoft Docs"
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
  - "_wtoi"
  - "_wtoi_l"
  - "atoi"
  - "_atoi_l"
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
  - "_tstoi"
  - "_wtoi"
  - "_ttoi"
  - "atoi"
  - "_atoi_l"
  - "_wtoi_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_atoi_l (funzione)"
  - "ttoi (funzione)"
  - "atoi_l (funzione)"
  - "conversione di stringhe, in Integer"
  - "_wtoi (funzione)"
  - "wtoi_l (funzione)"
  - "tstoi (funzione)"
  - "_ttoi (funzione)"
  - "_tstoi (funzione)"
  - "_wtoi_l (funzione)"
  - "atoi (funzione)"
  - "wtoi (funzione)"
ms.assetid: ad7fda30-28ab-421f-aaad-ef0b8868663a
caps.latest.revision: 22
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# atoi, _atoi_l, _wtoi, _wtoi_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una stringa in un intero.  
  
## Sintassi  
  
```  
int atoi(  
   const char *str   
);  
int _wtoi(  
   const wchar_t *str   
);  
int _atoi_l(  
   const char *str,  
   _locale_t locale  
);  
int _wtoi_l(  
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
 Ogni funzione restituisce il valore `int` che viene prodotto interpretando i caratteri di input come un numero.  Il valore restituito è 0 per `atoi` e `_wtoi`, se l'input non può essere convertito in un valore di questo tipo.  
  
 Nel caso di overflow con i valori interi negativi, viene restituito `LONG_MIN`.  `atoi` e `_wtoi` restituiscono `INT_MAX` e `INT_MIN` su queste condizioni.  In tutti i casi esterni all'intervallo, `errno` è impostato su `ERANGE`.  Se il parametro passato è `NULL`, viene invocato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono 0.  
  
## Note  
 Queste funzioni consentono di convertire una stringa di caratteri in un valore integer \(`atoi` e `_wtoi`\).  La stringa di input è una sequenza di caratteri che può essere interpretata come valore numerico del tipo specificato.  La funzione arresta la lettura della stringa di input al primo carattere che non riconosce come parte di un numero.  Questo carattere può essere il carattere null \('\\0' or L'\\0'\) che termina la stringa.  
  
 L'argomento `str` a `atoi` `` e `_wtoi` ha la seguente forma:  
  
 \[`whitespace`\] \[`sign`\] \[`digits`\]\]  
  
 Un `whitespace` è costituito dallo spazio o dai caratteri di tabulazione, che vengono ignorati; `sign` può essere più \(\+\) o meno \(–\); e `digits` sono costituite da una o più cifre.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare le impostazioni locali correnti.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstoi`|`atoi`|`atoi`|`_wtoi`|  
|`_ttoi`|`atoi`|`atoi`|`_wtoi`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`atoi`|\<stdlib.h\>|  
|`_atoi_l`, `_wtoi`, `_wtoi_l`|\<stdlib.h\> o \<wchar.h\>|  
  
## Esempio  
 Questo programma mostra come i numeri memorizzati come stringhe possono essere convertiti in valori numerici usando le funzioni `atoi`.  
  
```  
// crt_atoi.c  
// This program shows how numbers   
// stored as strings can be converted to  
// numeric values using the atoi functions.  
  
#include <stdlib.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( void )  
{  
    char    *str = NULL;  
    int     value = 0;  
  
    // An example of the atoi function.  
    str = "  -2309 ";  
    value = atoi( str );  
    printf( "Function: atoi( \"%s\" ) = %d\n", str, value );  
  
    // Another example of the atoi function.  
    str = "31412764";  
    value = atoi( str );  
    printf( "Function: atoi( \"%s\" ) = %d\n", str, value );  
  
    // Another example of the atoi function   
    // with an overflow condition occuring.  
    str = "3336402735171707160320";  
    value = atoi( str );  
    printf( "Function: atoi( \"%s\" ) = %d\n", str, value );  
    if (errno == ERANGE)  
    {  
       printf("Overflow condition occurred.\n");  
    }  
}  
```  
  
  **Function: atoi\( "  \-2309 " \) \= \-2309**  
**Function: atoi\( "31412764" \) \= 31412764**  
**Function: atoi\( "3336402735171707160320" \) \= 2147483647**  
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