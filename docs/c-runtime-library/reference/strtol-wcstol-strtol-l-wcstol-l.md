---
title: "strtol, wcstol, _strtol_l, _wcstol_l | Microsoft Docs"
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
  - "strtol"
  - "wcstol"
  - "_strtol_l"
  - "_wcstol_l"
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
  - "_wcstol_l"
  - "strtol"
  - "_tcstol"
  - "wcstol"
  - "_strtol_l"
  - "_tcstol_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_strtol_l (funzione)"
  - "_tcstol (funzione)"
  - "_wcstol_l (funzione)"
  - "conversione di stringhe, in integer"
  - "strtol (funzione)"
  - "strtol_l (funzione)"
  - "tcstol (funzione)"
  - "wcstol (funzione)"
  - "wcstol_l (funzione)"
ms.assetid: 1787c96a-f283-4a83-9325-33cfc1c7e240
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strtol, wcstol, _strtol_l, _wcstol_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte le stringhe in un valore long integer.  
  
## Sintassi  
  
```  
long strtol(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
long wcstol(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
long _strtol_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
long _wcstol_l(  
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
 `strtol` restituisce il valore rappresentato nella stringa `nptr`, tranne quando la rappresentazione può provocare un overflow, nel qual caso restituisce `LONG_MAX` o `LONG_MIN`.  `strtol` restituisce 0 se non può essere eseguita alcuna conversione.  `wcstol` restituisce i valori analogamente a `strtol`.  Per entrambe le funzioni, `errno` viene impostato su `ERANGE` se si verifica un overflow o un underflow.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici restituiti.  
  
## Note  
 La funzione `strtol` converte `nptr` in un `long`.  La funzione `strtol` arresta la lettura della stringa `nptr` al primo carattere che non riconosce come parte di un numero.  Questo può essere dovuto ad un carattere di terminazione null, oppure al primo carattere numerico maggiore o uguale a `base`.  
  
 `wcstol` è una versione a caratteri estesi di `strtol`; l'argomento `nptr` è una stringa di caratteri estesi.  Altrimenti queste funzioni si comportano in modo identico.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcstol`|`strtol`|`strtol`|`wcstol`|  
|`_tcstol_l`|`_strtol_l`|`_strtol_l`|`_wcstol_l`|  
  
 L'impostazione locale corrente di categoria `LC_NUMERIC` determina il riconoscimento del carattere radice in `nptr`*;* per ulteriori informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti, `_strtol_l` e `_wcstol_l` sono identiche alle corrispondenti funzioni senza il suffisso `_l` con la differenza che utilizzano le impostazioni locali passategli.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, il puntatore al carattere che arresta la scansione viene memorizzato nella locazione di memoria indicata da `endptr`.  Se nessuna conversione può essere eseguita \(nessuna cifra valida è stata trovata o è stata specificata una base non valida\), il valore di `nptr` viene archiviato all'indirizzo puntato da `endptr`.  
  
 `strtol` richiede che `nptr` punti ad una stringa nel seguente formato:  
  
 \[`whitespace`\] \[{`+` &#124; `–`}\] \[`0` \[{ `x` &#124; `X` }\]\] \[`digits`\]  
  
 Un `whitespace` può consistere di caratteri di spazio e di tab, che vengono ignorati; `digits` sono una o più cifre decimali.  Il primo carattere non idoneo arresta la scansione.  Se `base` è compreso tra 2 e 36, allora viene utilizzato come base del numero.  Se `base` è 0, i caratteri iniziali della stringa puntata da `nptr` vengono utilizzati per determinare la base.  Se il primo carattere è 0 e il secondo carattere non è 'x' o 'X', la stringa viene interpretata come Integer ottale.  Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come Integer esadecimale.  Se il primo carattere è '1' e '9', la stringa viene interpretata come Integer decimale.  Alle lettere da 'a' a 'z' \(o da 'A' a 'Z'\) sono assegnati i valori da 10 a 35; solo lettere con valori assegnati minori della `base` sono permesse.  Il primo carattere non compreso nell'intervallo di base arresta la scansione.  Ad esempio, se `base` è 0 e il primo carattere analizzato è "0", si presuppone un numero intero ottale e il carattere "8" o "9" arresterà l'analisi.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strtol`|\<stdlib.h\>|  
|`wcstol`|\<stdlib.h\> o \<wchar.h\>|  
|`_strtol_l`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [strtod](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md).  
  
## Equivalente .NET Framework  
 [System::Convert::ToInt64](https://msdn.microsoft.com/en-us/library/system.convert.toint64.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, \_strtod\_l, wcstod, \_wcstod\_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtoul, \_strtoul\_l, wcstoul, \_wcstoul\_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)