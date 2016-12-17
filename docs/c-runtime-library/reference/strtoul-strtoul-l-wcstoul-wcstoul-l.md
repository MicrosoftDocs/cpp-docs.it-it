---
title: "strtoul, _strtoul_l, wcstoul, _wcstoul_l | Microsoft Docs"
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
  - "_wcstoul_l"
  - "_strtoul_l"
  - "strtoul"
  - "wcstoul"
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
  - "strtoul"
  - "_tcstoul"
  - "wcstoul"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_strtoul_l (funzione)"
  - "_tcstoul (funzione)"
  - "_wcstoul_l (funzione)"
  - "conversione di stringhe, in integer"
  - "strtoul (funzione)"
  - "strtoul_l (funzione)"
  - "tcstoul (funzione)"
  - "wcstoul (funzione)"
  - "wcstoul_l (funzione)"
ms.assetid: 38f2afe8-8178-4e0b-8bbe-d5c6ad66e3ab
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strtoul, _strtoul_l, wcstoul, _wcstoul_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire le stringe in un valore long integer senza segno.  
  
## Sintassi  
  
```  
unsigned long strtoul(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
unsigned long _strtoul_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
unsigned long wcstoul(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
unsigned long _wcstoul_l(  
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
 `strtoul` restituisce il valore convertito, se disponibile, o `ULONG_MAX` su overflow.  `strtoul` restituisce 0 se non può essere eseguita alcuna conversione.  `wcstoul` restituisce i valori analogamente a `strtoul`.  Per entrambe le funzioni, `errno` viene impostato su `ERANGE` se si verifica un overflow o un underflow.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questo, e altri, codici restituiti.  
  
## Note  
 Ognuna di queste funzioni converte la stringa di input `nptr` in un `unsigned` `long`.  
  
 La funzione `strtoul` arresta la lettura della stringa `nptr` al primo carattere che non riconosce come parte di un numero.  Questo può essere dovuto ad un carattere di terminazione null, oppure al primo carattere numerico maggiore o uguale a `base`.  L'impostazione di categoria `LC_NUMERIC` delle impostazioni locali determina il riconoscimento del carattere radice in `nptr`; per maggiori informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  `strtoul` e `wcstoul` utilizzano le impostazioni locali correnti; `_strtoul_l` e `_wcstoul_l` sono identici, eccetto per il fatto che in essi vengono utilizzate le impostazioni locali passate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, il puntatore al carattere che arresta la scansione viene memorizzato nella locazione di memoria indicata da `endptr`.  Se nessuna conversione può essere eseguita \(nessuna cifra valida è stata trovata o è stata specificata una base non valida\), il valore di `nptr` viene archiviato all'indirizzo puntato da `endptr`.  
  
 `wcstoul` è una versione a caratteri estesi di `strtoul`; l'argomento `nptr` è una stringa di caratteri estesi.  In caso contrario queste funzioni si comportano in modo identico.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcstoul`|`strtoul`|`strtoul`|`wcstoul`|  
|`_tcstoul_l`|`strtoul_l`|`_strtoul_l`|`_wcstoul_l`|  
  
 `strtoul` richiede che `nptr` punti ad una stringa nel seguente formato:  
  
 \[`whitespace`\] \[{`+` &#124; `–`}\] \[`0` \[{ `x` &#124; `X` }\]\] \[`digits`\]  
  
 Un `whitespace` può consistere di caratteri di spazio e di tab, che vengono ignorati; `digits` sono una o più cifre decimali.  Il primo carattere non idoneo arresta la scansione.  Se `base` è compreso tra 2 e 36, allora viene utilizzato come base del numero.  Se `base` è 0, i caratteri iniziali della stringa puntata da `nptr` vengono utilizzati per determinare la base.  Se il primo carattere è 0 e il secondo carattere non è 'x' o 'X', la stringa viene interpretata come Integer ottale.  Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come Integer esadecimale.  Se il primo carattere è '1' e '9', la stringa viene interpretata come Integer decimale.  Alle lettere da 'a' a 'z' \(o da 'A' a 'Z'\) sono assegnati i valori da 10 a 35; solo lettere con valori assegnati minori della `base` sono permesse.  Il primo carattere non compreso nell'intervallo di base arresta la scansione.  Ad esempio, se `base` è 0 e il primo carattere analizzato è '0', si presuppone un numero intero ottale e il carattere '8' o '9' arresterà l'analisi.  `strtoul` consente un segno più \(`+`\) o un segno meno \(`–`\) come prefisso; un segno meno iniziale indica che il valore restituito è negato.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strtoul`|\<stdlib.h\>|  
|`wcstoul`|\<stdlib.h\> o \<wchar.h\>|  
|`_strtoul_l`|\<stdlib.h\>|  
|`_wcstoul_l`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
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
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)