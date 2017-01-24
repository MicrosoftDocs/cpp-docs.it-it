---
title: "_atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l | Microsoft Docs"
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
  - "_atoldbl"
  - "_atoldbl_l"
  - "_atodbl"
  - "_atoflt"
  - "_atoflt_l"
  - "_atodbl_l"
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
  - "_atoflt"
  - "_atoflt_l"
  - "atodbl_l"
  - "atoflt_l"
  - "_atoldbl"
  - "_atoldbl_l"
  - "atodbl"
  - "_atodbl_l"
  - "atoldbl"
  - "atoflt"
  - "atoldbl_l"
  - "_atodbl"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_atodbl (funzione)"
  - "_atoldbl_l (funzione)"
  - "atoflt (funzione)"
  - "atoflt_l (funzione)"
  - "atoldbl (funzione)"
  - "_atoldbl (funzione)"
  - "atodbl_l (funzione)"
  - "_atoflt_l (funzione)"
  - "atoldbl_l (funzione)"
  - "atodbl (funzione)"
  - "conversione di stringhe, in valori a virgola mobile"
  - "_atoflt (funzione)"
  - "_atodbl_l (funzione)"
ms.assetid: 2d2530f4-4bd4-42e3-8083-f2d2fbc8432a
caps.latest.revision: 22
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una stringa in un double \(`_atodbl`\), long double \(`_atoldbl`\), o float \(`_atoflt`\).  
  
## Sintassi  
  
```  
int _atodbl(  
   _CRT_DOUBLE * value,  
   char * str  
);  
int _atodbl_l (  
   _CRT_DOUBLE * value,  
   char * str,  
   locale_t locale  
);  
int _atoldbl(  
   _LDOUBLE * value,  
   char * str  
);  
int _atoldbl_l (  
   _LDOUBLE * value,  
   char * str,  
   locale_t locale  
);  
int _atoflt(  
   _CRT_FLOAT * value,  
   const char * str  
);  
int _atoflt_l(  
   _CRT_FLOAT * value,  
   const char * str,  
   locale_t locale  
);  
```  
  
#### Parametri  
 `value`  
 Il valore double, long double o float che viene prodotto convertendo la stringa in un valore a virgola mobile.  Questi valori vengono inseriti in una struttura.  
  
 `str`  
 La stringa da analizzare per convertire in un valore a virgola mobile.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce 0 in caso di esito positivo.  I codici di errore possibili sono `_UNDERFLOW` o `_OVERFLOW`, definiti nel file di intestazione Math.h.  
  
## Note  
 Queste funzioni consentono di convertire una stringa in un valore a virgola mobile.  La differenza tra queste funzioni e la famiglia di funzioni `atof` è che queste funzioni non generano codice a virgola mobile e non causano eccezioni hardware.  Al contrario, le condizioni di errore vengono segnalate come codici di errore.  
  
 Se una stringa non ha un'interpretazione valida come valore a virgola mobile, `value` è impostato su zero e il valore restituito è zero.  
  
 Le versioni di queste funzioni che hanno il suffisso `_l` sono identiche alle versioni che non hanno il suffisso, ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali che è stato passato invece di utilizzare le impostazioni locali della thread.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_atodbl`, `_atoldbl`, `_atoflt`<br /><br /> `_atodbl_l`, `_atoldbl_l`, `_atoflt_l`|\<stdlib.h\>|  
  
## Esempio  
  
```  
// crt_atodbl.c  
// Uses _atodbl to convert a string to a double precision  
// floating point value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main()  
{  
   char str1[256] = "3.141592654";  
   char abc[256] = "abc";  
   char oflow[256] = "1.0E+5000";  
   _CRT_DOUBLE dblval;  
   _CRT_FLOAT fltval;  
   int retval;  
  
   retval = _atodbl(&dblval, str1);  
  
   printf("Double value: %lf\n", dblval.x);  
   printf("Return value: %d\n\n", retval);  
  
   retval = _atoflt(&fltval, str1);  
   printf("Float value: %f\n", fltval.f);  
   printf("Return value: %d\n\n", retval);  
  
   // A non-floating point value: returns 0.  
   retval = _atoflt(&fltval, abc);  
   printf("Float value: %f\n", fltval.f);  
   printf("Return value: %d\n\n", retval);  
  
   // Overflow.  
   retval = _atoflt(&fltval, oflow);  
   printf("Float value: %f\n", fltval.f);  
   printf("Return value: %d\n\n", retval);  
  
   return 0;  
}  
```  
  
  **Valore double: 3.141593**  
**Valore restituito: 0**  
**Valore float: 3,141593**  
**Valore restituito: 0**  
**Valore float: 0,000000**  
**Valore restituito: 0**  
**Valore float: 1.\#INF00**  
**Valore restituito: 3**   
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)