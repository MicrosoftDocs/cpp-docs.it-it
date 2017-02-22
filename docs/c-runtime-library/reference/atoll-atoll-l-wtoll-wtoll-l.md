---
title: "atoll, _atoll_l, _wtoll, _wtoll_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wtoll"
  - "_atoll_l"
  - "_wtoll_l"
  - "atoll"
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
  - "_tstoll_l"
  - "_wtoll"
  - "_atoll_l"
  - "_ttoll"
  - "_tstoll"
  - "_wtoll_l"
  - "atoll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_atoll_l (funzione)"
  - "_wtoll (funzione)"
  - "_wtoll_l (funzione)"
  - "atoll (funzione)"
ms.assetid: 5e85fcac-b351-4882-bff2-6e7c469b7fa8
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# atoll, _atoll_l, _wtoll, _wtoll_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una stringa in un Integer `long long`.  
  
## Sintassi  
  
```  
long long atoll(  
   const char *str   
);  
long long _wtoll(  
   const wchar_t *str   
);  
long long _atoll_l(  
   const char *str,  
   _locale_t locale  
);  
long long _wtoll_l(  
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
 Ogni funzione restituisce il valore `long long` che viene prodotto interpretando i caratteri di input come numero.  Il valore restituito per `atoll` è 0 se l'input non può essere convertito in un valore di tale tipo.  
  
 In caso di overflow con valori integrali positivi grandi, tramite `atoll` viene restituito `LLONG_MAX` e, in caso di overflow con valori integrali negativi grandi, viene restituito `LLONG_MIN`.  
  
 In tutti i casi esterni all'intervallo, `errno` è impostato su `ERANGE`.  Se il parametro passato è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono 0.  
  
## Note  
 Queste funzioni consentono di convertire una stringa di caratteri in un valore integer `long long`.  
  
 La stringa di input è una sequenza di caratteri che può essere interpretata come valore numerico del tipo specificato.  La funzione arresta la lettura della stringa di input al primo carattere che non riconosce come parte di un numero.  Questo carattere potrebbe essere il carattere null \("\\0" o L"\\0"\) che termina la stringa.  
  
 L'argomento `str` per `atoll` ha la seguente forma:  
  
```  
[whitespace] [sign] [digits]  
```  
  
 Un `whitespace` è costituito dallo spazio o dai caratteri di tabulazione, che vengono ignorati; `sign` può essere più \(\+\) o meno \(–\); e `digits` sono costituite da una o più cifre.  
  
 `_wtoll` è identico a `atoll`, con la differenza che accetta come parametro una stringa di caratteri "wide".  
  
 Le versioni di queste funzioni che hanno il suffisso `_l` sono identiche alle versioni che non l'hanno, ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali che è stato passato invece di utilizzare le impostazioni locali correnti.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstoll`|`atoll`|`atoll`|`_wtoll`|  
|`_tstoll_l`|`_atoll_l`|`_atoll_l`|`_wtoll_l`|  
|`_ttoll`|`_atoll`|`_atoll`|`_wtoll`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`atoll`, `_atoll_l`|\<stdlib.h\>|  
|`_wtoll`, `_wtoll_l`|\<stdlib.h\> o \<wchar.h\>|  
  
## Esempio  
 Questo programma mostra come utilizzare le funzioni `atoll` per convertire i numeri archiviati come stringhe in valori numerici.  
  
```  
// crt_atoll.c  
// Build with: cl /W4 /Tc crt_atoll.c  
// This program shows how to use the atoll   
// functions to convert numbers stored as   
// strings to numeric values.  
#include <stdlib.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main(void)  
{  
    char *str = NULL;  
    long long value = 0;  
  
    // An example of the atoll function  
    // with leading and trailing white spaces.  
    str = "  -27182818284 ";  
    value = atoll(str);  
    printf("Function: atoll(\"%s\") = %lld\n", str, value);  
  
    // Another example of the atoll function   
    // with an arbitrary decimal point.  
    str = "314127.64";  
    value = atoll(str);  
    printf("Function: atoll(\"%s\") = %lld\n", str, value);  
  
    // Another example of the atoll function  
    // with an overflow condition occurring.  
    str = "3336402735171707160320";  
    value = atoll(str);  
    printf("Function: atoll(\"%s\") = %lld\n", str, value);  
    if (errno == ERANGE)  
    {  
       printf("Overflow condition occurred.\n");  
    }  
}  
```  
  
  **Funzione: atoll\("  \-27182818284 "\) \= \-27182818284**  
**Funzione: atoll\("314127.64"\) \= 314127**  
**Funzione: atoll\("3336402735171707160320"\) \= 9223372036854775807**  
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