---
title: "tolower, _tolower, towlower, _tolower_l, _towlower_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_tolower_l"
  - "towlower"
  - "tolower"
  - "_tolower"
  - "_towlower_l"
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
  - "ntdll.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_totlower"
  - "tolower"
  - "_tolower"
  - "towlower"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tolower (funzione)"
  - "_tolower_l (funzione)"
  - "_totlower (funzione)"
  - "_towlower_l (funzione)"
  - "maiuscole e minuscole, conversione"
  - "caratteri, conversione"
  - "minuscole, conversione"
  - "conversione di stringhe, maiuscole e minuscole"
  - "conversione di stringhe, in caratteri diversi"
  - "tolower (funzione)"
  - "tolower_l (funzione)"
  - "totlower (funzione)"
  - "towlower (funzione)"
  - "towlower_l (funzione)"
ms.assetid: 86e0fc02-94ae-4472-9631-bf8e96f67b92
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# tolower, _tolower, towlower, _tolower_l, _towlower_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un carattere in lettere minuscole.  
  
## Sintassi  
  
```  
int tolower(  
   int c   
);  
int _tolower(  
   int c   
);  
int towlower(  
   wint_t c   
);  
int _tolower_l(  
   int c,  
   _locale_t locale   
);  
int _towlower_l(  
   wint_t c,  
   _locale_t locale   
);  
```  
  
#### Parametri  
 \[in\] `c`  
 Carattere da convertire.  
  
 \[in\] `locale`  
 Le impostazioni locali da utilizzare per la conversione specifica delle impostazioni locali.  
  
## Valore restituito  
 Ognuna di queste routine converte una copia di `c` in caratteri minuscoli se la conversione è possibile, e restituisce il risultato.  Non vi è alcun valore restituito riservato per indicare un errore.  
  
## Note  
 Ognuna di queste routine converte una lettera maiuscola data in lettera minuscola se è possibile ed appropriato.  La conversione da lettere maiuscole a minuscole `towlower` è specifica delle impostazioni locali.  Solo i caratteri appropriati sulla base delle impostazioni locali correnti vengono modificati da maiuscoli a minuscoli.  Le funzioni senza il suffisso `_l` utilizzano le impostazioni locali attualmente impostate.  Le versioni di queste funzioni che contengono il suffisso `_l` prendono le impostazioni locali come parametro e le utilizzano al posto delle impostazioni locali attualmente impostate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Affinché `_tolower` produca i risultati previsti, [\_\_isascii](../../c-runtime-library/reference/isascii-isascii-iswascii.md) e [isupper](../../c-runtime-library/reference/isupper-isupper-l-iswupper-iswupper-l.md) devono entrambe restituire un valore diverso da zero.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_totlower`|`tolower`|`_mbctolower`|`towlower`|  
|`_totlower_l`|`_tolower_l`|`_mbctolower_l`|`_towlower_l`|  
  
> [!NOTE]
>  `_tolower_l` e `_towlower_l` non hanno dipendenza delle impostazioni locali e non sono destinate per essere chiamate direttamente.  Vengono fornite per un utilizzo interno da `_totlower_l`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`tolower`|\<ctype.h\>|  
|`_tolower`|\<ctype.h\>|  
|`towlower`|\<ctype.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio in [Funzioni to](../../c-runtime-library/to-functions.md).  
  
## Equivalente .NET Framework  
 [System::Char::ToLower](https://msdn.microsoft.com/en-us/library/system.char.tolower.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [Funzioni to](../../c-runtime-library/to-functions.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)