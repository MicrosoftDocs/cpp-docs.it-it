---
title: "_ismbbkalnum, _ismbbkalnum_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ismbbkalnum"
  - "_ismbbkalnum_l"
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
  - "_ismbbkalnum"
  - "ismbbkalnum"
  - "ismbbkalnum_l"
  - "_ismbbkalnum_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ismbbkalnum_l (funzione)"
  - "ismbbkalnum_l (funzione)"
  - "_ismbbkalnum (funzione)"
  - "ismbbkalnum (funzione)"
ms.assetid: e1d70e7b-29d0-469c-9d93-442b99de22ac
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# _ismbbkalnum, _ismbbkalnum_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un carattere multibyte particolare è un simbolo di testo non ASCII.  
  
## Sintassi  
  
```  
int _ismbbkalnum(  
   unsigned int c   
);  
int _ismbbkalnum_l(  
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
 `_ismbbkalnum` restituisce un valore diverso da zero se il valore Integer `c` è un simbolo di testo non ASCII diverso da un simbolo di punteggiatura o 0 in caso contrario.`_ismbbkalnum` usa le impostazioni locali correnti per le informazioni dei caratteri dipendenti dalle impostazioni locali.`_ismbbkalnum_l` è identico a `_ismbbkalnum` con la differenza che accetta le impostazioni locali come parametro. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbbkalnum`|\<mbctype.h\>|  
|`_ismbbkalnum_l`|\<mbctype.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)