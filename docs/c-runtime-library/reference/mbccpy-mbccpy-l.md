---
title: "_mbccpy, _mbccpy_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbccpy"
  - "_mbccpy_l"
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
  - "_mbccpy"
  - "tccpy"
  - "ftccpy"
  - "mbccpy"
  - "_tccpy"
  - "_ftccpy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_mbccpy (funzione)"
  - "_mbccpy_l (funzione)"
  - "_tccpy (funzione)"
  - "_tccpy_l (funzione)"
  - "mbccpy (funzione)"
  - "mbccpy_l (funzione)"
  - "tccpy (funzione)"
  - "tccpy_l (funzione)"
ms.assetid: 13f4de6e-7792-41ac-b319-dd9b135433aa
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# _mbccpy, _mbccpy_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copia un carattere multibyte da una stringa in un'altra stringa.  Sono disponibili versioni più sicure di queste funzioni; vedere [\_mbccpy\_s, \_mbccpy\_s\_l](../../c-runtime-library/reference/mbccpy-s-mbccpy-s-l.md).  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
void _mbccpy(  
   unsigned char *dest,  
   const unsigned char *src   
);  
void _mbccpy_l(  
   unsigned char *dest,  
   const unsigned char *src,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `dest`  
 Copiare la destinazione.  
  
 `src`  
 Caratteri multibyte da copiare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Note  
 La funzione `_mbccpy` copia un carattere multibyte da `src` a `dest`.  
  
 Questa funzione convalida i parametri.  Se `_mbccpy` viene passato come puntatore null per `dest` o `src`, il gestore di parametri non validi viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è permesso continuare, `errno` è impostato su `EINVAL`.  
  
 `_mbccpy` utilizza le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  `_mbccpy_l` è identico a `_mbccpy` se non che `_mbccpy_l` utilizza le impostazioni locali passate per qualsiasi comportamento dipendente dalle impostazioni locali.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 **Nota sulla sicurezza** Utilizza una stringa con terminazione null.  La stringa con terminazione null non deve superare la dimensione del buffer di destinazione.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  Problemi di sovraccarico del buffer sono un metodo frequente di attacco al sistema, con conseguente elevazione dei privilegi non autorizzata.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tccpy`|Mapping della macro o della funzione inline|`_mbccpy`|Mapping della macro o della funzione inline|  
|`_tccpy_l`|n\/d|`_mbccpy_l`|n\/d|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbccpy`|\<mbctype.h\>|  
|`_mbccpy_l`|\<mbctype.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente in NET Framework  
 Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [\_mbclen, mblen, \_mblen\_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)