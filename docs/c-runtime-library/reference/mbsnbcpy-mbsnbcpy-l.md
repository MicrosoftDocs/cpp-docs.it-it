---
title: "_mbsnbcpy, _mbsnbcpy_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsnbcpy"
  - "_mbsnbcpy_l"
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
  - "mbsnbcpy"
  - "_ftcsncpy"
  - "_mbsnbcpy"
  - "mbsnbcpy_l"
  - "_mbsnbcpy_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsnbcpy (funzione)"
  - "_mbsnbcpy_l (funzione)"
  - "_tcsncpy (funzione)"
  - "_tcsncpy_l (funzione)"
  - "mbsnbcpy (funzione)"
  - "mbsnbcpy_l (funzione)"
  - "tcsncpy (funzione)"
  - "tcsncpy_l (funzione)"
ms.assetid: 83d17b50-3cbf-4df9-bce8-3b6d52f85d04
caps.latest.revision: 30
caps.handback.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mbsnbcpy, _mbsnbcpy_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copia `n` byte di una stringa in una stringa di destinazione.  Sono disponibili versioni più sicure di queste funzioni. Vedere [\_mbsnbcpy\_s, \_mbsnbcpy\_s\_l](../../c-runtime-library/reference/mbsnbcpy-s-mbsnbcpy-s-l.md).  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/en-us/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
unsigned char * _mbsnbcpy(  
   unsigned char * strDest,  
   const unsigned char * strSource,  
   size_t count  
);  
unsigned char * _mbsnbcpy_l(  
   unsigned char * strDest,  
   const unsigned char * strSource,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
unsigned char * _mbsnbcpy(  
   unsigned char (&strDest)[size],  
   const unsigned char * strSource,  
   size_t count  
); // C++ only  
template <size_t size>  
unsigned char * _mbsnbcpy_l(  
   unsigned char (&strDest)[size],  
   const unsigned char * strSource,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `strDest`  
 Destinazione per la stringa di caratteri da copiare.  
  
 `strSource`  
 Stringa di caratteri da copiare.  
  
 `count`  
 Numero di byte da copiare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 `_mbsnbcpy` restituisce un puntatore alla stringa di caratteri di destinazione.  Nessun valore restituito è riservato per indicare un errore.  
  
## Note  
 La funzione `_mbsnbcpy` copia `count` byte da `strSource` a `strDest`.  Se `count` supera la dimensione di `strDest` o le stringhe di origine e destinazione si sovrappongono, il comportamento di `_mbsnbcpy` è indefinito.  
  
 Se `strSource` o `strDest` è un puntatore Null, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
 Il valore di output è interessato dalla configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali. Per altre informazioni, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le versioni di queste funzioni sono identiche, ad eccezione che quelle che non dispongono del suffisso `_l` usano le impostazioni locali correnti, mentre le versioni che dispongono del suffisso `_l` usano il parametro delle impostazioni locali passato.  Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
> [!IMPORTANT]
>  Queste funzioni potrebbero essere vulnerabili a rischi di sovraccarico del buffer.  I sovraccarichi del buffer possono essere usati per eseguire codice di attacco arbitrario che può provocare un'elevazione dei privilegi non autorizzata e compromettere il sistema.  Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 In C\+\+, queste funzioni presentano overload di modello che richiamano le relative controparti più sicure e più recenti.  Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsncpy`|[strncpy](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)|`_mbsnbcpy`|[wcsncpy](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)|  
|`_tcsncpy_l`|`_strncpy_l`|`_mbsnbcp_l`|`_wcsncpy_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsnbcpy`|\<mbstring.h\>|  
|`_mbsnbcpy_l`|\<mbstring.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [\_mbsnbcat, \_mbsnbcat\_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [\_mbsnbcmp, \_mbsnbcmp\_l](../../c-runtime-library/reference/mbsnbcmp-mbsnbcmp-l.md)   
 [\_strncnt, \_wcsncnt, \_mbsnbcnt, \_mbsnbcnt\_l, \_mbsnccnt, \_mbsnccnt\_l](../../c-runtime-library/reference/strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)   
 [\_mbsnbset, \_mbsnbset\_l](../../c-runtime-library/reference/mbsnbset-mbsnbset-l.md)   
 [strncpy, \_strncpy\_l, wcsncpy, \_wcsncpy\_l, \_mbsncpy, \_mbsncpy\_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)