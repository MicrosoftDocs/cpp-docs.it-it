---
title: "_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l | Microsoft Docs"
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
  - "_strupr_s"
  - "_strupr_s_l"
  - "_mbsupr_s"
  - "_wcsupr_s_l"
  - "_mbsupr_s_l"
  - "_wcsupr_s"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "strupr_s"
  - "mbsupr_s"
  - "wcsupr_s"
  - "_mbsupr_s_l"
  - "mbsupr_s_l"
  - "wcsupr_s_l"
  - "_wcsupr_s"
  - "_tcsupr_s_l"
  - "_mbsupr_s"
  - "_tcsupr_s"
  - "strupr_s_l"
  - "_wcsupr_s_l"
  - "_strupr_s"
  - "_strupr_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsupr_s (funzione)"
  - "_mbsupr_s_l (funzione)"
  - "_strupr_s (funzione)"
  - "_strupr_s_l (funzione)"
  - "_tcsupr_s (funzione)"
  - "_tcsupr_s_l (funzione)"
  - "_wcsupr_s (funzione)"
  - "_wcsupr_s_l (funzione)"
  - "conversione di maiuscole e minuscole, funzioni CRT"
  - "mbsupr_s (funzione)"
  - "mbsupr_s_l (funzione)"
  - "stringhe (conversione) [C++], maiuscole e minuscole"
  - "stringhe [C++], maiuscole e minuscole"
  - "stringhe [C++], conversione di maiuscole e minuscole"
  - "strupr_s (funzione)"
  - "strupr_s_l (funzione)"
  - "tcsupr_s (funzione)"
  - "tcsupr_s_l (funzione)"
  - "maiuscole, conversione di stringhe"
  - "wcsupr_s (funzione)"
  - "wcsupr_s_l (funzione)"
ms.assetid: 82d3a273-9f6f-4a26-9560-919d891e4581
caps.latest.revision: 30
caps.handback.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una stringa in lettere maiuscole, utilizzando le impostazioni locali correnti o delle impostazioni locali specificate.  Queste versioni di [\_strupr, \_strupr\_l, \_mbsupr, \_mbsupr\_l, \_wcsupr\_l, \_wcsupr](../../c-runtime-library/reference/strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md) contengono i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  `_mbsupr_s` e `_mbsupr_s_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
errno_t _strupr_s(  
   char *str,  
   size_t numberOfElements  
);  
errno_t _wcsupr_s(  
   wchar_t * str,  
   size_t numberOfElements  
);  
errno_t _strupr_s_l(  
   char * str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
errno_t _wcsupr_s_l(  
   wchar_t * str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
errno_t _mbsupr_s(  
   unsigned char *str,  
   size_t numberOfElements  
);  
errno_t _mbsupr_s_l(  
   unsigned char *str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
template <size_t size>  
errno_t _strupr_s(  
   char (&str)[size]  
); // C++ only  
template <size_t size>  
errno_t _wcsupr_s(  
   wchar_t (&str)[size]  
); // C++ only  
template <size_t size>  
errno_t _strupr_s_l(  
   char (&str)[size],  
   _locale_t locale  
); // C++ only  
template <size_t size>  
errno_t _wcsupr_s_l(  
   wchar_t (&str)[size],  
   _locale_t locale  
); // C++ only  
template <size_t size>  
errno_t _mbsupr_s(  
   unsigned char (&str)[size]  
); // C++ only  
template <size_t size>  
errno_t _mbsupr_s_l(  
   unsigned char (&str)[size],  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `str`  
 Stringa da scrivere in lettere minuscole.  
  
 `numberOfElements`  
 Dimensione del buffer.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Zero se ha esito positivo; un codice diverso da zero in caso di errore.  
  
 Queste funzioni convalidano i parametri.  Se `str` è un puntatore `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`.  Se `numberOfElements` è inferiore alla lunghezza della stringa, le funzioni restituiscono `ERANGE` e impostano `errno` su `ERANGE`.  
  
## Note  
 La funzione `_strupr_s` converte sul posto tutte le lettere minuscole in `str` in maiuscole.  `_wcsupr_s` è la versione a caratteri di tipo "wide" di `_strupr_s`.  `_mbsupr_s` è la versione a caratteri multibyte di `_strupr_s`.  
  
 La conversione è determinata dall'impostazione di categoria `LC_CTYPE` delle impostazioni locali.  Altri caratteri non sono interessati.  Per ulteriori informazioni su `LC_CTYPE`, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti; le viste con il suffisso `_l` sono identiche ad eccezione del fatto che utilizzano le impostazioni locali passate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 In C\+\+, l'utilizzo di queste funzioni è semplificato dagli overload dei modelli; gli overload possono dedurre la lunghezza del buffer automaticamente \(che elimina la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti, quelle non sicure alle più recenti e le controparti sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 La versione di debug di queste funzioni per prima cosa riempiono il buffer con il valore 0xFD.  Per disattivare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsupr_s`|`_strupr_s`|`_mbsupr_s`|`_wcsupr_s`|  
|`_tcsupr_s_l`|`_strupr_s_l`|`_mbsupr_s_l`|`_wcsupr_s_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strupr_s`, `_strupr_s_l`|\<string.h\>|  
|`_wcsupr_s`, `_wcsupr_s_l`, `_mbsupr_s`, `_mbsupr_s_l`|\<string.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio per [\_strlwr\_s, \_strlwr\_s\_l, \_mbslwr\_s, \_mbslwr\_s\_l, \_wcslwr\_s, \_wcslwr\_s\_l](../../c-runtime-library/reference/strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md) .  
  
## Equivalente .NET Framework  
 [System::String::ToUpper](https://msdn.microsoft.com/en-us/library/system.string.toupper.aspx)  
  
## Vedere anche  
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [\_strlwr\_s, \_strlwr\_s\_l, \_mbslwr\_s, \_mbslwr\_s\_l, \_wcslwr\_s, \_wcslwr\_s\_l](../../c-runtime-library/reference/strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md)