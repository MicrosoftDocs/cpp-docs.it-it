---
title: "_atoi64, _atoi64_l, _wtoi64, _wtoi64_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_atoi64_l"
  - "_wtoi64"
  - "_atoi64"
  - "_wtoi64_l"
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
  - "_atoi64"
  - "_tstoi64"
  - "_ttoi64"
  - "wtoi64"
  - "_tstoi64_l"
  - "atoi64"
  - "_wtoi64_l"
  - "_wtoi64"
  - "wtoi64_l"
  - "_atoi64_l"
  - "atoi64_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tstoi64 (funzione)"
  - "wtoi64 (funzione)"
  - "atoi64_l (funzione)"
  - "_ttoi64 (funzione)"
  - "conversione di stringhe, in Integer"
  - "wtoi64_l (funzione)"
  - "atoi64 (funzione)"
  - "_tstoi64 (funzione)"
  - "_atoi64_l (funzione)"
  - "_wtoi64_l (funzione)"
  - "ttoi64 (funzione)"
  - "_wtoi64 (funzione)"
  - "_atoi64 (funzione)"
ms.assetid: 2c3e30fd-545d-4222-8364-0c5905df9526
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# _atoi64, _atoi64_l, _wtoi64, _wtoi64_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una stringa in un integer a 64 bit.  
  
## Sintassi  
  
```  
__int64 _atoi64(  
   const char *str   
);  
__int64 _wtoi64(  
   const wchar_t *str   
);  
__int64 _atoi64_l(  
   const char *str,  
   _locale_t locale  
);  
__int64 _wtoi64_l(  
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
 Ogni funzione restituisce il valore `__int64` che viene prodotto interpretando i caratteri di input come un numero.  Il valore di ritorno è 0 per `_atoi64` se l'input non può essere convertito in un valore di quel tipo.  
  
 In caso di overflow con i valori integrali positivi grandi, `_atoi64` restituisce `I64_MAX` e `I64_MIN` in caso di overflow con i valori integrali negativi grandi.  
  
 In tutti i casi esterni all'intervallo, `errno` è impostato su `ERANGE`.  Se il parametro passato è `NULL`, viene invocato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono 0.  
  
## Note  
 Queste funzioni consentono di convertire una stringa di caratteri in un valore integer a 64 bit.  
  
 La stringa di input è una sequenza di caratteri che può essere interpretata come valore numerico del tipo specificato.  La funzione arresta la lettura della stringa di input al primo carattere che non riconosce come parte di un numero.  Questo carattere potrebbe essere il carattere null \("\\0" o L"\\0"\) che termina la stringa.  
  
 L'argomento `str` per `_atoi64` ha la seguente forma:  
  
```  
[whitespace] [sign] [digits]]  
```  
  
 Un `whitespace` è costituito dallo spazio o dai caratteri di tabulazione, che vengono ignorati; `sign` può essere più \(\+\) o meno \(–\); e `digits` sono costituite da una o più cifre.  
  
 `_wtoi64` è identico a `_atoi64`, con la differenza che accetta come parametro una stringa di caratteri "wide".  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare le impostazioni locali correnti.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstoi64`|`_atoi64`|`_atoi64`|`_wtoi64`|  
|`_ttoi64`|`_atoi64`|`_atoi64`|`_wtoi64`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_atoi64`, `_atoi64_l`|\<stdlib.h\>|  
|`_wtoi64`, `_wtoi64_l`|\<stdlib.h\> o \<wchar.h\>|  
  
## Esempio  
 Questo programma mostra come i numeri memorizzati come stringhe possono essere convertiti in valori numerici usando le funzioni `_atoi64`.  
  
```  
// crt_atoi64.c  
// This program shows how numbers stored as  
// strings can be converted to numeric values  
// using the _atoi64 functions.  
#include <stdlib.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( void )  
{  
    char    *str = NULL;  
    __int64 value = 0;  
  
    // An example of the _atoi64 function  
    // with leading and trailing white spaces.  
    str = "  -2309 ";  
    value = _atoi64( str );  
    printf( "Function: _atoi64( \"%s\" ) = %d\n", str, value );  
  
    // Another example of the _atoi64 function   
    // with an arbitrary decimal point.  
    str = "314127.64";  
    value = _atoi64( str );  
    printf( "Function: _atoi64( \"%s\" ) = %d\n", str, value );  
  
    // Another example of the _atoi64 function  
    // with an overflow condition occurring.  
    str = "3336402735171707160320";  
    value = _atoi64( str );  
    printf( "Function: _atoi64( \"%s\" ) = %d\n", str, value );  
    if (errno == ERANGE)  
    {  
       printf("Overflow condition occurred.\n");  
    }  
}  
```  
  
  **Funzione: \_atoi64\( "  \-2309 " \) \= \-2309**  
**Funzione: \_atoi64\( "314127.64" \) \= 314127**  
**Funzione: \_atoi64\( "3336402735171707160320" \) \= \-1**  
**Si è verificata una condizione di overflow.**   
## Equivalente .NET Framework  
  
-   [System::Convert::ToInt64](https://msdn.microsoft.com/en-us/library/system.convert.toint64.aspx)  
  
-   [System::Convert::ToUInt64](https://msdn.microsoft.com/en-us/library/system.convert.touint64.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [\_ecvt](../../c-runtime-library/reference/ecvt.md)   
 [\_fcvt](../../c-runtime-library/reference/fcvt.md)   
 [\_gcvt](../../c-runtime-library/reference/gcvt.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [\_atodbl, \_atodbl\_l, \_atoldbl, \_atoldbl\_l, \_atoflt, \_atoflt\_l](../../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)