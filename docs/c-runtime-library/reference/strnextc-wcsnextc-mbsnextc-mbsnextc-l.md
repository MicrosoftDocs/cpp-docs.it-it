---
title: "_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l | Microsoft Docs"
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
  - "_strnextc"
  - "_mbsnextc_l"
  - "_mbsnextc"
  - "_wcsnextc"
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
  - "strnextc"
  - "tcsnextc"
  - "_mbsnextc_l"
  - "_mbsnextc"
  - "mbsnextc_l"
  - "ftcsnextc"
  - "mbsnextc"
  - "_tcsnextc"
  - "_wcsnextc"
  - "_ftcsnextc"
  - "_strnextc"
  - "wcsnextc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsnextc (funzione)"
  - "_mbsnextc_l (funzione)"
  - "_strnextc (funzione)"
  - "_tcsnextc (funzione)"
  - "_wcsnextc (funzione)"
  - "mbsnextc (funzione)"
  - "mbsnextc_l (funzione)"
  - "strnextc (funzione)"
  - "tcsnextc (funzione)"
  - "wcsnextc (funzione)"
ms.assetid: e3086173-9eb5-4540-a23a-5d866bd05340
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cerca il carattere successivo in una stringa.  
  
> [!IMPORTANT]
>  `_mbsnextc` e `_mbsnextc_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
unsigned int _strnextc(  
   const char *str  
);  
unsigned int _wscnextc(  
   const wchar_t *str  
);   
unsigned int _mbsnextc(  
   const unsigned char *str   
);  
unsigned int _mbsnextc_l(  
   const unsigned char *str,  
   _locale_t locale  
);  
  
```  
  
#### Parametri  
 `str`  
 Stringa di origine.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce il numero intero del carattere successivo in `str`*.*  
  
## Note  
 La funzione `_mbsnextc` restituisce il numero intero del prossimo carattere multibyte in `str`, senza spostare in avanti il puntatore della stringa.  `_mbsnextc` riconosce le sequenze di caratteri multibyte come indicato dalla [tabella codici multibyte](../../c-runtime-library/code-pages.md) in uso.  
  
 Se `str` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` è impostata su `EINVAL` e la funzione restituisce 0.  
  
 **Nota sulla sicurezza** Questa API comporta una potenziale minaccia determinata da un problema di sovraccarico del buffer.  Problemi di sovraccarico del buffer sono un metodo frequente di attacco al sistema, con conseguente elevazione dei privilegi non autorizzata.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsnextc`|`_strnextc`|`_mbsnextc`|`_wcsnextc`|  
  
 `_strnextc` e `_wcsnextc` sono stringhe di caratteri a singolo byte e stringhe di caratteri di tipo "wide" versioni di `_mbsnextc`.  `_wcsnextc` restituisce il numero intero del seguente carattere wide in `string`; `_strnextc` restituisce il numero intero del seguente carattere a byte singolo in `string`.  `_strnextc` e `_wcsnextc` vengono forniti solo per il mapping e in caso contrario non devono essere utilizzati.  Per ulteriori informazioni, vedere [Utilizzo delle mappature di Testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mappature di Testo generico](../../c-runtime-library/generic-text-mappings.md).  
  
 `_mbsnextc_l` è identico con la differenza che utilizza il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsnextc`|\<mbstring.h\>|  
|`_mbsnextc_l`|\<mbstring.h\>|  
|`_strnextc`|\<tchar.h\>|  
|`_wcsnextc`|\<tchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [\_strdec, \_wcsdec, \_mbsdec, \_mbsdec\_l](../../c-runtime-library/reference/strdec-wcsdec-mbsdec-mbsdec-l.md)   
 [\_strinc, \_wcsinc, \_mbsinc, \_mbsinc\_l](../../c-runtime-library/reference/strinc-wcsinc-mbsinc-mbsinc-l.md)   
 [\_strninc, \_wcsninc, \_mbsninc, \_mbsninc\_l](../../c-runtime-library/reference/strninc-wcsninc-mbsninc-mbsninc-l.md)