---
title: "_ismbbtrail, _ismbbtrail_l | Microsoft Docs"
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
  - "_ismbbtrail"
  - "_ismbbtrail_l"
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
  - "_ismbbtrail"
  - "ismbbtrail"
  - "_ismbbtrail_l"
  - "ismbbtrail_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "ismbbtrail_l (funzione)"
  - "_ismbbtrail (funzione)"
  - "_ismbbtrail_l (funzione)"
  - "ismbbtrail (funzione)"
ms.assetid: dfdd0292-960b-4c1d-bf11-146e0fc80247
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbbtrail, _ismbbtrail_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un byte è un byte finale di un carattere multibyte.  
  
## Sintassi  
  
```  
int _ismbbtrail(  
   unsigned int c   
);  
int _ismbbtrail_l(  
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
 `_ismbbtrail` restituisce un valore diverso da zero se il valore Integer `c` è il secondo byte di un carattere multibyte. Ad esempio, solo nella tabella codici 932, gli intervalli validi sono da 0x40 a 0x7E e da 0x80 a 0xFC.  
  
## Note  
 `_ismbbtrail` usa le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.`_ismbbtrail_l` è identico, ma usa le impostazioni locali che gli vengono passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_ismbbtrail`|\<mbctype.h\> o \<mbstring.h\>|\<ctype.h\>,\* \<limits.h\>, \<stdlib.h\>|  
|`_ismbbtrail_l`|\<mbctype.h\> o \<mbstring.h\>|\<ctype.h\>,\* \<limits.h\>, \<stdlib.h\>|  
  
 \* Per le costanti manifesto per le condizioni di test.  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)