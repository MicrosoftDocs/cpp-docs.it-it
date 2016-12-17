---
title: "_ismbbblank, _ismbbblank_l | Microsoft Docs"
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
  - "_ismbbblank_l"
  - "_ismbbblank"
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
dev_langs: 
  - "C++"
ms.assetid: d21b2e41-7206-41f5-85bb-9c9ab4f3e21b
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbbblank, _ismbbblank_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un particolare carattere multibyte è un carattere vuoto.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _ismbbblank(  
   unsigned int c   
);  
int _ismbbblank_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Integer da testare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `_ismbbblank` restituisce un valore diverso da zero se `c` rappresenta un carattere di spazio \(0x20\), un carattere di tabulazione orizzontale \(0x09\) o un carattere specifico delle impostazioni locali utilizzato per separare le parole all'interno di una riga di testo per il quale `isspace` è true; in caso contrario, restituisce 0.  `_ismbbblank` utilizza le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  `_ismbbblank_l` è identico, con la differenza che utilizza l'impostazione locale che viene passata.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbbblank`|\<mbctype.h\>|  
|`_ismbbblank_l`|\<mbctype.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)