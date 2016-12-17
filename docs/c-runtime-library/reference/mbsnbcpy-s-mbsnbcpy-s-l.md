---
title: "_mbsnbcpy_s, _mbsnbcpy_s_l | Microsoft Docs"
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
  - "_mbsnbcpy_s_l"
  - "_mbsnbcpy_s"
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
  - "mbsnbcpy_s_l"
  - "_mbsnbcpy_s"
  - "mbsnbcpy_s"
  - "_mbsnbcpy_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsnbcpy_s (funzione)"
  - "_mbsnbcpy_s_l (funzione)"
  - "_tcsncpy_s (funzione)"
  - "_tcsncpy_s_l (funzione)"
  - "mbsnbcpy_s (funzione)"
  - "mbsnbcpy_s_l (funzione)"
  - "tcsncpy_s (funzione)"
  - "tcsncpy_s_l (funzione)"
ms.assetid: dfff64ab-fe6f-49c4-99ba-75014e2b0cd6
caps.latest.revision: 29
caps.handback.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mbsnbcpy_s, _mbsnbcpy_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copia i byte `n` di una stringa in una stringa di destinazione.  Queste versioni di [\_mbsnbcpy, \_mbsnbcpy\_l](../../c-runtime-library/reference/mbsnbcpy-mbsnbcpy-l.md) contengono i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
errno_t _mbsnbcpy_s(  
   unsigned char * strDest,  
   size_t sizeInBytes,  
   const unsigned char * strSource,  
   size_t count   
);  
errno_t _mbsnbcpy_s_l(  
   unsigned char * strDest,  
   size_t sizeInBytes,  
   const unsigned char * strSource,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
errno_t _mbsnbcpy_s(  
   unsigned char (&strDest)[size],  
   const unsigned char * strSource,  
   size_t count   
); // C++ only  
template <size_t size>  
errno_t _mbsnbcpy_s_l(  
   unsigned char (&strDest)[size],  
   const unsigned char * strSource,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `strDest`  
 Destinazione per una stringa di caratteri da copiare.  
  
 `sizeInBytes`  
 Dimensione del buffer di destinazione.  
  
 `strSource`  
 Stringa di caratteri da copiare.  
  
 `count`  
 Numero di byte da copiare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Zero se ha esito positivo; `EINVAL` se viene passato un parametro non valido.  
  
## Note  
 La funzione `_mbsnbcpy_s` copia i byte `count` da `strSource` a `strDest`.  Se `count` supera la dimensione di `strDest`, una delle stringhe di input è un puntatore a null, o `sizeInBytes` oppure `count` è 0, la funzione richiama il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `EINVAL`.  Se le stringhe di origine e di destinazione si sovrappongono., il comportamento di `_mbsnbcpy_s` non è definito.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
> [!NOTE]
>  A differenza della versione non sicura di questa funzione, `_mbsnbcpy_s` non produce alcuna spaziatura interna e sempre termina la stringa con il valore null.  
  
 In C\+\+, l'utilizzo di queste funzioni è semplificato dagli overload dei modelli; gli overload possono dedurre la lunghezza del buffer automaticamente \(che elimina la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti, quelle non sicure alle più recenti e le controparti sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 La versione di debug di queste funzioni per prima cosa riempiono il buffer con il valore 0xFD.  Per disattivare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsncpy_s`|`_strncpy_s`|`_mbsnbcpy_s`|`_wcsncpy_s`|  
|`_tcsncpy_s_l`|`_strncpy_s_l`|`_mbsnbcpy_s_l`|`_wcsncpy_s_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsnbcpy_s`|\<mbstring.h\>|  
|`_mbsnbcpy_s_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [\_mbsnbcat, \_mbsnbcat\_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [\_mbsnbcmp, \_mbsnbcmp\_l](../../c-runtime-library/reference/mbsnbcmp-mbsnbcmp-l.md)   
 [\_strncnt, \_wcsncnt, \_mbsnbcnt, \_mbsnbcnt\_l, \_mbsnccnt, \_mbsnccnt\_l](../../c-runtime-library/reference/strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)   
 [\_mbsnbicmp, \_mbsnbicmp\_l](../../c-runtime-library/reference/mbsnbicmp-mbsnbicmp-l.md)   
 [\_mbsnbset, \_mbsnbset\_l](../../c-runtime-library/reference/mbsnbset-mbsnbset-l.md)   
 [strncpy, \_strncpy\_l, wcsncpy, \_wcsncpy\_l, \_mbsncpy, \_mbsncpy\_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)