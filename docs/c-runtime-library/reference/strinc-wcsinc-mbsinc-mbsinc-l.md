---
title: "_strinc, _wcsinc, _mbsinc, _mbsinc_l | Microsoft Docs"
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
  - "_mbsinc"
  - "_wcsinc"
  - "_mbsinc_l"
  - "_strinc"
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
  - "mbsinc_l"
  - "_strinc"
  - "strinc"
  - "_mbsinc"
  - "_wcsinc"
  - "wcsinc"
  - "mbsinc"
  - "_mbsinc_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsinc (funzione)"
  - "_mbsinc_l (funzione)"
  - "_strinc (funzione)"
  - "_tcsinc (funzione)"
  - "_wcsinc (funzione)"
  - "mbsinc (funzione)"
  - "mbsinc_l (funzione)"
  - "strinc (funzione)"
  - "tcsinc (funzione)"
  - "wcsinc (funzione)"
ms.assetid: 54685943-8e2c-45e9-a559-2d94930dc6b4
caps.latest.revision: 23
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strinc, _wcsinc, _mbsinc, _mbsinc_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sposta un puntatore di stringa in avanti di un carattere.  
  
> [!IMPORTANT]
>  `_mbsinc` e `_mbsinc_l` non possono essere usati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *_strinc(    const char *current,    _locale_t locale ); wchar_t *_wcsinc(    const wchar_t *current,    _locale_t locale ); unsigned char *_mbsinc(    const unsigned char *current  ); unsigned char *_mbsinc_l(    const unsigned char *current,    _locale_t locale );   
```  
  
#### Parametri  
 `current`  
 Puntatore di caratteri.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Ognuna di queste routine restituisce un puntatore al carattere che segue immediatamente `current`.  
  
## Note  
 La funzione `_mbsinc` restituisce un puntatore al primo byte del carattere multibyte che segue immediatamente `current`.  `_mbsinc` riconosce le sequenze di caratteri multibyte in base alla [tabella codici multibyte](../../c-runtime-library/code-pages.md) attualmente in uso. `_mbsinc_l` La funzione è identica ma usa il parametro passato relativo alle impostazioni locali.  Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 La funzione di testo generico `_tcsinc`, definita in Tchar.h, è mappata a `_mbsinc` se è stato definito `_MBCS` oppure a `_wcsinc` se è stato definito `_UNICODE`.  In caso contrario, `_tcsinc` è mappata a `_strinc`.  `_strinc` e `_wcsinc` sono versioni con caratteri a byte singolo e caratteri wide di `_mbsinc`.  `_strinc` e `_wcsinc` sono forniti solo per questo mapping e non devono essere usate in altre circostanze.  Per altre informazioni, vedere [Utilizzo di mapping testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mapping testo generico](../../c-runtime-library/generic-text-mappings.md).  
  
 Se `current` è `NULL`, sarà richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`.  
  
> [!IMPORTANT]
>  Queste funzioni potrebbero essere vulnerabili a rischi di sovraccarico del buffer.  I sovraccarichi del buffer possono essere utilizzati per gli attacchi di sistema perché possono causare un'elevazione dei privilegi non autorizzata.  Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsinc`|\<mbstring.h\>|  
|`_mbsinc_l`|\<mbstring.h\>|  
|`_strinc`|\<tchar.h\>|  
|`_wcsinc`|\<tchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [\_strdec, \_wcsdec, \_mbsdec, \_mbsdec\_l](../../c-runtime-library/reference/strdec-wcsdec-mbsdec-mbsdec-l.md)   
 [\_strnextc, \_wcsnextc, \_mbsnextc, \_mbsnextc\_l](../../c-runtime-library/reference/strnextc-wcsnextc-mbsnextc-mbsnextc-l.md)   
 [\_strninc, \_wcsninc, \_mbsninc, \_mbsninc\_l](../../c-runtime-library/reference/strninc-wcsninc-mbsninc-mbsninc-l.md)