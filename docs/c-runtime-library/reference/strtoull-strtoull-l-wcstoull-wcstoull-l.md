---
title: "strtoull, _strtoull_l, wcstoull, _wcstoull_l | Microsoft Docs"
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
  - "_strtoull_l"
  - "_wcstoull_l"
  - "strtoull"
  - "wcstoull"
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
  - "_wcstoull_l"
  - "_tcstoull"
  - "_tcstoull_l"
  - "wcstoull"
  - "_strtoull_l"
  - "strtoull"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_strtoull_l (funzione)"
  - "_tcstoull (funzione)"
  - "_tcstoull_l (funzione)"
  - "_wcstoull_l (funzione)"
  - "strtoull (funzione)"
  - "wcstoull (funzione)"
ms.assetid: 36dac1cc-e901-40a0-8802-63562d6d01df
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strtoull, _strtoull_l, wcstoull, _wcstoull_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte le stringe in un valore Unsigned Long Integer Long.  
  
## Sintassi  
  
```  
unsigned long long strtoull(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
unsigned long long _strtoull_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
unsigned long long wcstoull(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
unsigned long long _wcstoull_l(  
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
 `strtoull` restituisce il valore convertito, se disponibile, o `ULLONG_MAX` su overflow.  `strtoull` restituisce 0 se non può essere eseguita alcuna conversione.  `wcstoull` restituisce i valori analogamente a `strtoull`.  Per entrambe le funzioni, `errno` viene impostato su `ERANGE` se si verifica un overflow o un underflow.  
  
 Per ulteriori informazioni sui codici restituiti, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Ognuna di queste funzioni consente di convertire la stringa di input `nptr` in un valore integer `unsigned long long`.  
  
 La funzione `strtoull` arresta la lettura della stringa `nptr` al primo carattere che non riconosce come parte di un numero.  Questo può essere dovuto ad un carattere di terminazione null, oppure al primo carattere numerico che è maggiore o uguale a `base`.  L'impostazione di categoria `LC_NUMERIC` delle impostazioni locali correnti determina il riconoscimento del carattere radice in `nptr`; per maggiori informazioni, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  In `strtoull` e `wcstoull` vengono utilizzate le impostazioni locali correnti; in `_strtoull_l` e `_wcstoull_l` vengono invece utilizzate le impostazioni locali passate ma comunque identiche.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, il puntatore al carattere che arresta la scansione viene memorizzato nella locazione di memoria a cui punta `endptr`.  Se nessuna conversione può essere eseguita \(nessuna cifra valida è stata trovata o è stata specificata una base non valida\), il valore di `nptr` viene archiviato all'indirizzo a cui punta `endptr`.  
  
 `wcstoull` è una versione a caratteri estesi di `strtoull` e il relativo argomento `nptr` è una stringa di caratteri estesi.  In caso contrario, queste funzioni si comportano in modo identico.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcstoull`|`strtoull`|`strtoull`|`wcstoull`|  
|`_tcstoull_l`|`strtoull_l`|`_strtoull_l`|`_wcstoull_l`|  
  
 `strtoull` richiede che `nptr` punti ad una stringa nel seguente formato:  
  
 \[`whitespace`\] \[{`+` &#124; `–`}\] \[`0` \[{ `x` &#124; `X` }\]\] \[`digits` &#124; \[`letters`\]\]  
  
 `whitespace` può essere costituito dallo spazio o di caratteri di tabulazione, che vengono ignorati; `digits` sono costituite da una o più cifre decimali; `letters` sono costituite da una o più delle lettere comprese tra "a" e "z" \(o tra "A" e "Z "\).  Il primo carattere non idoneo arresta la scansione.  Se `base` è compreso tra 2 e 36, allora viene utilizzato come base del numero.  Se `base` è 0, i caratteri iniziali della stringa a cui punta `nptr` vengono utilizzati per determinare la base.  Se il primo carattere è '0' e il secondo carattere non è 'x' o 'X', la stringa viene interpretata come Integer ottale.  Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come Integer esadecimale.  Se il primo carattere è '1' e '9', la stringa viene interpretata come Integer decimale.  Alle lettere da 'a' a 'z' \(o da 'A' a 'Z'\) sono assegnati i valori da 10 a 35; solo lettere con valori assegnati minori della `base` sono permesse.  Il primo carattere non compreso nell'intervallo di base arresta la scansione.  Ad esempio, se `base` è 0 e il primo carattere analizzato è "0", si presuppone un numero intero ottale e il carattere "8" o "9" arresta l'analisi.  `strtoull` consente un segno più \(`+`\) o un segno meno \(`–`\) come prefisso; un segno meno iniziale indica che il valore restituito è negato.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strtoull`|\<stdlib.h\>|  
|`wcstoull`|\<stdlib.h\> o \<wchar.h\>|  
|`_strtoull_l`|\<stdlib.h\>|  
|`_wcstoull_l`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio relativo a [strtod](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md).  
  
## Equivalente .NET Framework  
 [System::Convert::ToUInt64](https://msdn.microsoft.com/en-us/library/system.convert.touint32.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, \_strtod\_l, wcstod, \_wcstod\_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtol, wcstol, \_strtol\_l, \_wcstol\_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
 [strtoul, \_strtoul\_l, wcstoul, \_wcstoul\_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [strtoll, \_strtoll\_l, wcstoll, \_wcstoll\_l](../../c-runtime-library/reference/strtoll-strtoll-l-wcstoll-wcstoll-l.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)