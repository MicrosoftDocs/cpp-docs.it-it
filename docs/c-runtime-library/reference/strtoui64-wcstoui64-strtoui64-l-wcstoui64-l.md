---
title: "_strtoui64, _wcstoui64, _strtoui64_l, _wcstoui64_l | Microsoft Docs"
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
  - "_strtoui64"
  - "_strtoui64_l"
  - "_wcstoui64"
  - "_wcstoui64_l"
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
  - "_wcstoui64_l"
  - "strtoui64_l"
  - "wcstoui64"
  - "_wcstoui64"
  - "_strtoui64_l"
  - "strtoui64"
  - "_strtoui64"
  - "wcstoui64_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_strtoui64 (funzione)"
  - "_strtoui64_l (funzione)"
  - "_wcstoui64 (funzione)"
  - "_wcstoui64_l (funzione)"
  - "conversione di stringhe, in integer"
  - "strtoui64 (funzione)"
  - "strtoui64_l (funzione)"
  - "wcstoui64 (funzione)"
  - "wcstoui64_l (funzione)"
ms.assetid: 7fcb537e-4554-4ceb-a5b6-bc09244e72ef
caps.latest.revision: 19
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strtoui64, _wcstoui64, _strtoui64_l, _wcstoui64_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire una stringa in un valore senza segno `__int64`.  
  
## Sintassi  
  
```  
unsigned __int64 _strtoui64(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
unsigned __int64 _wcstoui64(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
unsigned __int64 _strtoui64_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
unsigned __int64 _wcstoui64(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `nptr`  
 Stringa con terminazione null da convertire.  
  
 `endptr`  
 Puntatore al carattere che arresta la scansione.  
  
 `base`  
 Base numerica da utilizzare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `_strtoui64` restituisce il valore rappresentato nella stringa `nptr`, tranne quando la rappresentazione può provocare un overflow, in tal caso restituisce `_UI64_MAX`. `strtoui64`restituisce 0 se non può essere eseguita alcuna conversione.  
  
 `_UI64_MAX` è definito in. LIMITS.H.  
  
 Se `nptr` è `NULL` o `base` è diverso da zero e inferiore a 2 o maggiore di 36, `errno` è impostato su `EINVAL`.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici restituiti.  
  
## Note  
 La funzione `_strtoui64`converte `nptr` in un `unsigned` `__int64`.  `_wcstoui64` è una versione a caratteri estesi di `_strtoui64`; l'argomento `nptr` è una stringa di caratteri estesi.  In caso contrario queste funzioni si comportano in modo identico.  
  
 Entrambe le funzioni arrestano la lettura della stringa `nptr` al primo carattere che non riconoscono come parte di un numero.  Questo può essere dovuto ad un carattere di terminazione null, oppure al primo carattere numerico maggiore o uguale a `base`.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcstoui64`|`_strtoui64`|`_strtoui64`|`_wstrtoui64`|  
|`_tcstoui64_l`|`_strtoui64_l`|`_strtoui64_l`|`_wstrtoui64_l`|  
  
 L'impostazione locale corrente di categoria `LC_NUMERIC` determina il riconoscimento del carattere radice in `nptr` per ulteriori informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le funzioni senza il suffisso \_l utilizzano le impostazioni locali correnti; `_strtoui64_l` e`_wcstoui64_l` sono identiche alle corrispondenti funzioni senza il suffisso `_l` con la differenza che utilizzano le impostazioni locali che gli sono state passate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, il puntatore al carattere che arresta la scansione viene memorizzato nella locazione di memoria indicata da `endptr`.  Se nessuna conversione può essere eseguita \(nessuna cifra valida è stata trovata o è stata specificata una base non valida\), il valore di `nptr` viene archiviato all'indirizzo puntato da `endptr`.  
  
 `_strtoui64` richiede che `nptr` punti ad una stringa nel seguente formato:  
  
 \[`whitespace`\] \[{`+` &#124; `–`}\] \[`0` \[{ `x` &#124; `X` }\]\] \[`digits`\]  
  
 Un `whitespace` può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati; `digits` sono una o più cifre decimali.  Il primo carattere non idoneo arresta la scansione.  Se `base` è compreso tra 2 e 36, allora viene utilizzato come base del numero.  Se `base` è 0, i caratteri iniziali della stringa puntata da `nptr` vengono utilizzati per determinare la base.  Se il primo carattere è 0 e il secondo carattere non è 'x' o 'X', la stringa viene interpretata come Integer ottale.  Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come Integer esadecimale.  Se il primo carattere è '1' e '9', la stringa viene interpretata come Integer decimale.  Alle lettere da 'a' a 'z' \(o da 'A' a 'Z'\) sono assegnati i valori da 10 a 35; solo lettere con valori assegnati minori della `base` sono permesse.  Il primo carattere non compreso nell'intervallo di base arresta la scansione.  Ad esempio, se `base` è 0 e il primo carattere analizzato è "0", si presuppone un numero intero ottale e il carattere "8" o "9" arresterà l'analisi.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strtoui64`|\<stdlib.h\>|  
|`_wcstoui64`|\<stdlib.h\> o \<wchar.h\>|  
|`_strtoui64_l`|\<stdlib.h\>|  
|`_wcstoui64_l`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_strtoui64.c  
#include <stdio.h>  
  
unsigned __int64 atoui64(const char *szUnsignedInt) {  
   return _strtoui64(szUnsignedInt, NULL, 10);  
}  
  
int main() {  
   unsigned __int64 u = atoui64("18446744073709551615");  
   printf( "u = %I64u\n", u );  
}  
```  
  
  **u \= 18446744073709551615**   
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, \_strtod\_l, wcstod, \_wcstod\_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtoul, \_strtoul\_l, wcstoul, \_wcstoul\_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)