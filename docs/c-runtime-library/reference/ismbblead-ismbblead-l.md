---
title: "_ismbblead, _ismbblead_l | Microsoft Docs"
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
  - "_ismbblead_l"
  - "_ismbblead"
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
  - "ismbblead_l"
  - "istlead"
  - "_ismbblead"
  - "_ismbblead_l"
  - "ismbblead"
  - "_istlead"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbblead_l (funzione)"
  - "ismbblead (funzione)"
  - "_ismbblead (funzione)"
  - "istlead (funzione)"
  - "ismbblead_l (funzione)"
  - "_istlead (funzione)"
ms.assetid: 2abc6f75-ed5c-472e-bfd0-e905a1835ccf
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbblead, _ismbblead_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Testa un carattere per determinare se è il byte di apertura di un carattere multibyte.  
  
## Sintassi  
  
```  
int _ismbblead(  
   unsigned int c   
);  
int _ismbblead_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Valore Integer da testare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Restituisce un valore diverso da zero se il valore Integer `c` è il primo byte di un carattere multibyte.  
  
## Note  
 I caratteri multibyte sono costituiti da un byte di apertura seguito da un byte finale. I byte di apertura si distinguono in quanto sono compresi in un intervallo specifico per un determinato set di caratteri. Ad esempio, solo nella tabella codici 932, i byte di apertura sono compresi tra 0x81 – 0x9F e 0xE0 – 0xFC.  
  
 `_ismbblead` usa le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.`_ismbblead_l` è identico ma usa l'impostazione locale che gli viene passata. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_istlead`|Restituisce sempre false|`_ismbblead`|Restituisce sempre false|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_ismbblead`|\<mbctype.h\> o \<mbstring.h\>|\<ctype.h\>,\* \<limits.h\>, \<stdlib.h\>|  
|`_ismbblead_l`|\<mbctype.h\> o \<mbstring.h\>|\<ctype.h\>,\* \<limits.h\>, \<stdlib.h\>|  
  
 \* Per le costanti manifesto per le condizioni di test.  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)