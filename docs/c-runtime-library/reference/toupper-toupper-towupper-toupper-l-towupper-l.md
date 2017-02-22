---
title: "toupper, _toupper, towupper, _toupper_l, _towupper_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_toupper_l"
  - "towupper"
  - "toupper"
  - "_towupper_l"
  - "_toupper"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "towupper"
  - "_toupper"
  - "_totupper"
  - "toupper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_totupper (funzione)"
  - "_toupper (funzione)"
  - "_toupper_l (funzione)"
  - "_towupper_l (funzione)"
  - "maiuscole e minuscole, conversione"
  - "caratteri, conversione"
  - "conversione di stringhe, maiuscole e minuscole"
  - "conversione di stringhe, in caratteri diversi"
  - "totupper (funzione)"
  - "toupper (funzione)"
  - "toupper_l (funzione)"
  - "towupper (funzione)"
  - "towupper_l (funzione)"
  - "maiuscole, conversione di stringhe"
ms.assetid: cdef1b0f-b19c-4d11-b7d2-cf6334c9b6cc
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# toupper, _toupper, towupper, _toupper_l, _towupper_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire caratteri in maiuscolo.  
  
## Sintassi  
  
```  
int toupper(  
   int c   
);  
int _toupper(  
   int c   
);  
int towupper(  
   wint_t c   
);  
int _toupper_l(  
   int c ,  
   _locale_t locale  
);  
int _towupper_l(  
   wint_t c ,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Carattere da convertire.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ognuna di queste routine converte una copia di `c`, se possibile, e restituisce il risultato.  
  
 Se `c` è un carattere di tipo per il quale `iswlower` è diverso da zero ed esiste un tipo di carattere corrispondente per il quale `iswupper` è diverso da zero, `towupper` restituisce il carattere di tipo corrispondente; in caso contrario, `towupper` restituisce `c` invariato.  
  
 Non vi è alcun valore restituito riservato per indicare un errore.  
  
 Affinché `toupper` produca i risultati previsti, [\_\_isascii](../../c-runtime-library/reference/isascii-isascii-iswascii.md) e [islower](../../c-runtime-library/reference/islower-iswlower-islower-l-iswlower-l.md) devono entrambe restituire un valore diverso da zero.  
  
## Note  
 Ognuna di queste routine converte una lettera minuscola data in una lettera maiuscola se è possibile ed appropriato.  La conversione da lettere maiuscole a minuscole `towupper` è specifica delle impostazioni locali.  Solo i caratteri appropriati sulla base delle impostazioni locali correnti vengono modificati da maiuscoli a minuscoli.  Le funzioni senza il suffisso `_l` utilizzano le impostazioni locali attualmente impostate.  Le versioni di queste funzioni con il suffisso `_l` prendono le impostazioni locali come parametro e le utilizzano al posto delle impostazioni locali attualmente impostate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Affinché `toupper` produca i risultati previsti, [\_\_isascii](../../c-runtime-library/reference/isascii-isascii-iswascii.md) e [isupper](../../c-runtime-library/reference/isupper-isupper-l-iswupper-iswupper-l.md) devono entrambe restituire un valore diverso da zero.  
  
 [Routine di conversione dati](../../c-runtime-library/data-conversion.md)  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_totupper`|`toupper`|`_mbctoupper`|`towupper`|  
|`_totupper_l`|`_toupper_l`|`_mbctoupper_l`|`_towupper_l`|  
  
> [!NOTE]
>  `_toupper_l` e `_towupper_l` non hanno dipendenza delle impostazioni locali e non sono destinate per essere chiamate direttamente.  Vengono fornite per un utilizzo interno da `_totupper_l`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`toupper`|\<ctype.h\>|  
|`_toupper`|\<ctype.h\>|  
|`towupper`|\<ctype.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio in [Funzioni to](../../c-runtime-library/to-functions.md).  
  
## Equivalente .NET Framework  
 [System::Char::ToUpper](https://msdn.microsoft.com/en-us/library/system.char.toupper.aspx)  
  
## Vedere anche  
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [Funzioni to](../../c-runtime-library/to-functions.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)