---
title: "_strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_strtoi64"
  - "_strtoi64_l"
  - "_wcstoi64_l"
  - "_wcstoi64"
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
  - "_strtoi64"
  - "strtoi64"
  - "_stroi64_l"
  - "_wcstoi64_l"
  - "wcstoi64_l"
  - "_wcstoi64"
  - "wcstoi64"
  - "strtoi64_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_strtoi64 (funzione)"
  - "_strtoi64_l (funzione)"
  - "_wcstoi64 (funzione)"
  - "_wcstoi64_l (funzione)"
  - "conversione di stringhe, in integer"
  - "strtoi64 (funzione)"
  - "strtoi64_l (funzione)"
  - "wcstoi64 (funzione)"
  - "wcstoi64_l (funzione)"
ms.assetid: ea2abc50-7bfe-420e-a46b-703c3153593a
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una stringa in un valore `__int64`.  
  
## Sintassi  
  
```  
__int64 _strtoi64(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
__int64 _wcstoi64(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
__int64 _strtoi64_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
__int64 _wcstoi64_l(  
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
 `_strtoi64` restituisce il valore rappresentato nella stringa `nptr`, tranne quando la rappresentazione può provocare un overflow, in quel qual caso restituisce `_I64_MAX` o `_I64_MIN`.  La funzione dovrà restituire 0 se non può essere eseguita alcuna conversione.  `_wcstoi64` restituisce i valori analogamente a `strtoi64`.  
  
 `_I64_MAX` e `_I64_MIN` sono definiti in LIMITS.H.  
  
 Se `nptr` è `NULL` o `base` è diverso da zero e inferiore a 2 o maggiore di 36, `errno` è impostato su `EINVAL`.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici restituiti.  
  
## Note  
 La funzione `_strtoi64`converte `nptr` in un `__int64`.  Entrambe le funzioni arrestano la lettura della stringa `nptr` al primo carattere che non riconoscono come parte di un numero.  Questo può essere dovuto ad un carattere di terminazione null, oppure al primo carattere numerico maggiore o uguale a `base`.  `_wcstoi64` è una versione a caratteri estesi di `_strtoi64`; l'argomento `nptr` è una stringa di caratteri estesi.  Altrimenti queste funzioni si comportano in modo identico.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcstoi64`|`_strtoi64`|`_strtoi64`|`_wcstoi64`|  
|`_tcstoi64_l`|`_strtoi64_l`|`_strtoi64_l`|`_wcstoi64_l`|  
  
 L'impostazione di categoria `LC_NUMERIC` delle impostazioni locali determina il riconoscimento del carattere radice in `nptr`*;* ; per ulteriori informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le funzioni senza il suffisso \_l utilizzano le impostazioni locali correnti; `_strtoi64_l` e`_wcstoi64_l` sono identiche alle corrispondenti funzioni senza il suffisso `_l` con la differenza che utilizzano le impostazioni locali che gli sono state passate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, il puntatore al carattere che arresta la scansione viene memorizzato nella locazione di memoria indicata da `endptr`.  Se nessuna conversione può essere eseguita \(nessuna cifra valida è stata trovata o è stata specificata una base non valida\), il valore di `nptr` viene archiviato all'indirizzo puntato da `endptr`.  
  
 `_strtoi64` eccetto `nptr` punta ad una stringa nel seguente formato:  
  
 \[`whitespace`\] \[{`+` &#124; `–`}\] \[`0` \[{ `x` &#124; `X` }\]\] \[`digits`\]  
  
 Un `whitespace` può consistere di caratteri di spazio e di tab, che vengono ignorati; `digits` sono una o più cifre decimali.  Il primo carattere non idoneo arresta la scansione.  Se `base` è compreso tra 2 e 36, allora viene utilizzato come base del numero.  Se `base` è 0, i caratteri iniziali della stringa puntata da `nptr` vengono utilizzati per determinare la base.  Se il primo carattere è 0 e il secondo carattere non è 'x' o 'X', la stringa viene interpretata come un intero ottale.  Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come Integer esadecimale.  Se il primo carattere è '1' e '9', la stringa viene interpretata come Integer decimale.  Alle lettere da 'a' a 'z' \(o da 'A' a 'Z'\) sono assegnati i valori da 10 a 35; solo lettere con valori assegnati minori della `base` sono permesse.  Il primo carattere non compreso nell'intervallo di base arresta la scansione.  Ad esempio, se `base` è 0 e il primo carattere analizzato è '0', si presuppone un numero intero ottale e il carattere '8' o '9' arresterà l'analisi.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strtoi64`, `_strtoi64_l`|\<stdlib.h\>|  
|`_wcstoi64`, `_wcstoi64_l`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, \_strtod\_l, wcstod, \_wcstod\_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtoul, \_strtoul\_l, wcstoul, \_wcstoul\_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)