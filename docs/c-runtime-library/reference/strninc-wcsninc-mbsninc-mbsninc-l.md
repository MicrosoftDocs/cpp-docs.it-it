---
title: "_strninc, _wcsninc, _mbsninc, _mbsninc_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsninc"
  - "_mbsninc_l"
  - "_wcsninc"
  - "_strninc"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "strninc"
  - "wcsninc"
  - "mbsninc_l"
  - "_strninc"
  - "_tcsninc"
  - "mbsninc"
  - "_mbsninc_l"
  - "_ftcsninc"
  - "_wcsninc"
  - "_mbsninc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsninc (funzione)"
  - "_mbsninc_l (funzione)"
  - "_strninc (funzione)"
  - "_tcsninc (funzione)"
  - "_wcsninc (funzione)"
  - "mbsninc (funzione)"
  - "mbsninc_l (funzione)"
  - "strninc (funzione)"
  - "tcsninc (funzione)"
  - "wcsninc (funzione)"
ms.assetid: 6caace64-f9e4-48c0-afa8-ea51824ad723
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strninc, _wcsninc, _mbsninc, _mbsninc_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sposta un puntatore della stringa avanti di `n` caratteri.  
  
> [!IMPORTANT]
>  `_mbsninc` e `_mbsninc_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *_strninc(  
   const char *str,  
   size_t count   
);  
wchar_t *_wcsninc(  
   const wchar_t *str,  
   size_t count   
);  
unsigned char *_mbsninc(  
   const unsigned char *str,  
   size_t count   
);  
unsigned char *_mbsninc(  
   const unsigned char *str,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `str`  
 Stringa di origine.  
  
 `count`  
 Numero di caratteri per incrementare il puntatore di stringa.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ognuna di queste routine ritorna un puntatore a `str` dopo che `str` è stato incrementato di `count` caratteri o `NULL` se il puntatore fornito è `NULL`.  Se `count` è maggiore o uguale al numero di caratteri in `str`, il risultato è indefinito.  
  
## Note  
 La funzione `_mbsninc` incrementa `str` di `count` caratteri multibyte.  `_mbsninc` riconosce le sequenze di caratteri multibyte come indicato dalla [tabella codici multibyte](../../c-runtime-library/code-pages.md) in uso.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsninc`|`_strninc`|`_mbsninc`|`_wcsninc`|  
  
 `_strninc` e `_wcsninc` sono stringhe di caratteri a singolo byte e stringhe di caratteri di tipo "wide" versioni di `_mbsninc`.  `_wcsninc` e `_strninc` vengono forniti solo per il mapping e in caso contrario non devono essere utilizzati.  Per ulteriori informazioni, vedere [Utilizzo delle mappature di Testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mappature di Testo generico](../../c-runtime-library/generic-text-mappings.md).  
  
 `_mbsninc_l` è identico con la differenza che utilizza il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsninc`|\<mbstring.h\>|  
|`_mbsninc_l`|\<mbstring.h\>|  
|`_strninc`|\<tchar.h\>|  
|`_wcsninc`|\<tchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [\_strdec, \_wcsdec, \_mbsdec, \_mbsdec\_l](../../c-runtime-library/reference/strdec-wcsdec-mbsdec-mbsdec-l.md)   
 [\_strinc, \_wcsinc, \_mbsinc, \_mbsinc\_l](../../c-runtime-library/reference/strinc-wcsinc-mbsinc-mbsinc-l.md)   
 [\_strnextc, \_wcsnextc, \_mbsnextc, \_mbsnextc\_l](../../c-runtime-library/reference/strnextc-wcsnextc-mbsnextc-mbsnextc-l.md)