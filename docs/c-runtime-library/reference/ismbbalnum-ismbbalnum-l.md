---
title: "_ismbbalnum, _ismbbalnum_l | Microsoft Docs"
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
  - "_ismbbalnum"
  - "_ismbbalnum_l"
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
  - "_ismbbalnum"
  - "ismbbalnum"
  - "_ismbbalnum_l"
  - "ismbbalnum_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbbalnum_l (funzione)"
  - "ismbbalnum (funzione)"
  - "ismbbalnum_l (funzione)"
  - "_ismbbalnum (funzione)"
ms.assetid: 8025de50-a871-49fd-9ae6-f437b47aa987
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbbalnum, _ismbbalnum_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un carattere multibyte specificato corrisponde ad alfa o è numerico.  
  
## Sintassi  
  
```  
int _ismbbalnum(  
   unsigned int c   
);  
int _ismbbalnum_l(  
   unsigned int c   
);  
```  
  
#### Parametri  
 `c`  
 Valore Integer da testare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 `_ismbbalnum` restituisce un valore diverso da zero se l'espressione:  
  
```  
isalnum || _ismbbkalnum  
```  
  
 è diverso da zero per `c` oppure zero in caso contrario.  
  
 La versione di questa funzione con il suffisso `_l` è identica, con la differenza che usa le impostazioni locali passate anziché le impostazioni locali correnti per il relativo comportamento dipendente dalle impostazioni locali.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbbalnum`|\<mbctype.h\>|  
|`_ismbbalnum_l`|\<mbctype.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)