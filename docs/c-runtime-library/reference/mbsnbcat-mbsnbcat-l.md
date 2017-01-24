---
title: "_mbsnbcat, _mbsnbcat_l | Microsoft Docs"
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
  - "_mbsnbcat_l"
  - "_mbsnbcat"
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
  - "mbsnbcat"
  - "mbsnbcat_l"
  - "_mbsnbcat"
  - "_mbsnbcat_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsnbcat (funzione)"
  - "_mbsnbcat_l (funzione)"
  - "_tcsncat (funzione)"
  - "_tcsncat_l (funzione)"
  - "mbsnbcat (funzione)"
  - "mbsnbcat_l (funzione)"
  - "tcsncat (funzione)"
  - "tcsncat_l (funzione)"
ms.assetid: aa0f1d30-0ddd-48d1-88eb-c6884b20fd91
caps.latest.revision: 29
caps.handback.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mbsnbcat, _mbsnbcat_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge, al massimo, il primo byte `n` di una stringa di caratteri multibyte ad un altro.  Sono disponibili versioni più sicure di queste funzioni; vedere [\_mbsnbcat\_s, \_mbsnbcat\_s\_l](../../c-runtime-library/reference/mbsnbcat-s-mbsnbcat-s-l.md).  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
unsigned char *_mbsnbcat(  
   unsigned char *dest,  
   const unsigned char *src,  
   size_t count   
);  
unsigned char *_mbsnbcat_l(  
   unsigned char *dest,  
   const unsigned char *src,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
unsigned char *_mbsnbcat(  
   unsigned char (&dest)[size],  
   const unsigned char *src,  
   size_t count   
); // C++ only  
template <size_t size>  
unsigned char *_mbsnbcat_l(  
   unsigned char (&dest)[size],  
   const unsigned char *src,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `dest`  
 Stringa di destinazione a caratteri multibyte con terminazione null.  
  
 `src`  
 Stringa di origine con caratteri multibyte con terminazione null.  
  
 `count`  
 Numero di byte della `src` da aggiungere a `dest`.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `_mbsnbcat` restituisce un puntatore alla stringa di destinazione.  Nessun valore restituito è riservato per indicare un errore.  
  
## Note  
 La funzione `_mbsnbcat` aggiunge, al massimo, il primo byte `count` `src` a `dest`.  Se il byte immediatamente prima del carattere null in `dest` è un byte di apertura, il byte iniziale di `src` sovrascrive il byte di apertura.  In caso contrario, il byte iniziale `src` sovrascrive il carattere di terminazione null di `dest`.  Se un byte null viene visualizzato in `src` prima che il byte `count` vengano aggiunti, \_`mbsnbcat` aggiunge tutti i byte da `src` fino al carattere null.  Se `count` è maggiore della lunghezza di `src`, la lunghezza `src` viene utilizzata al posto di `count`.  La stringa risultante termina con un carattere null.  Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  La versione `_mbsnbcat` della funzione utilizza le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; la versione `_mbsnbcat_l` è identica ad eccezione che utilizza il parametro delle impostazioni locali che gli sono state passate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 **Nota sulla sicurezza** Utilizza una stringa con terminazione null.  La stringa con terminazione null non deve superare la dimensione del buffer di destinazione.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 Se `dest` o `src` è `NULL`, la funzione genera un errore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'errore viene gestito, la funzione restituisce `EINVAL` e imposta `errno` a `EINVAL`.  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsncat`|[strncat](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)|`_mbsnbcat`|[wcsncat](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)|  
|`_tcsncat_l`|`_strncat_l`|`_mbsnbcat_l`|`_wcsncat_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsnbcat`|\<mbstring.h\>|  
|`_mbsnbcat_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [\_mbsnbcmp, \_mbsnbcmp\_l](../../c-runtime-library/reference/mbsnbcmp-mbsnbcmp-l.md)   
 [\_strncnt, \_wcsncnt, \_mbsnbcnt, \_mbsnbcnt\_l, \_mbsnccnt, \_mbsnccnt\_l](../../c-runtime-library/reference/strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)   
 [\_mbsnbcpy, \_mbsnbcpy\_l](../../c-runtime-library/reference/mbsnbcpy-mbsnbcpy-l.md)   
 [\_mbsnbicmp, \_mbsnbicmp\_l](../../c-runtime-library/reference/mbsnbicmp-mbsnbicmp-l.md)   
 [\_mbsnbset, \_mbsnbset\_l](../../c-runtime-library/reference/mbsnbset-mbsnbset-l.md)   
 [strncat, \_strncat\_l, wcsncat, \_wcsncat\_l, \_mbsncat, \_mbsncat\_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [\_mbsnbcat\_s, \_mbsnbcat\_s\_l](../../c-runtime-library/reference/mbsnbcat-s-mbsnbcat-s-l.md)