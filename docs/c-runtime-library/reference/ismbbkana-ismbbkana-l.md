---
title: "_ismbbkana, _ismbbkana_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ismbbkana_l"
  - "_ismbbkana"
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
  - "_ismbbkana_l"
  - "ismbbkana_l"
  - "ismbbkana"
  - "_ismbbkana"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ismbbkana_l (funzione)"
  - "_ismbbkana (funzione)"
  - "ismbbkana (funzione)"
  - "ismbbkana_l (funzione)"
ms.assetid: 64d4eb4a-205a-40ef-be35-ff9d77fabbaf
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# _ismbbkana, _ismbbkana_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Test per un simbolo katakana ed è specifico per la tabella codici 932.  
  
## Sintassi  
  
```  
int _ismbbkana(  
   unsigned int c   
);  
int _ismbbkana_l(  
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
 `_ismbbkana` restituisce un valore diverso da zero se il valore Integer `c` è un simbolo katakana oppure 0 in caso contrario.`_ismbbkana` usa le impostazioni locali correnti per le informazioni dei caratteri dipendenti dalle impostazioni locali.`_ismbbkana_l` è identico, ma usa le impostazioni locali che gli vengono passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbbkana`|\<mbctype.h\>|  
|`_ismbbkana_l`|\<mbctype.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)