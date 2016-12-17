---
title: "_ismbbkpunct, _ismbbkpunct_l | Microsoft Docs"
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
  - "_ismbbkpunct_l"
  - "_ismbbkpunct"
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
  - "ismbbkpunct_l"
  - "_ismbbkpunct_l"
  - "ismbbkpunct"
  - "_ismbbkpunct"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbbkpunct_l (funzione)"
  - "ismbbkpunct_l (funzione)"
  - "ismbbkpunct (funzione)"
  - "_ismbbkpunct (funzione)"
ms.assetid: a04c59cd-5ca7-4296-bec0-2b0d7f04edd0
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbbkpunct, _ismbbkpunct_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Verifica se un carattere multibyte è un carattere di punteggiatura.  
  
## Sintassi  
  
```  
int _ismbbkpunct(  
   unsigned int c   
);  
int _ismbbkpunct_l(  
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
 `_ismbbkpunct` restituisce un valore diverso da zero se il valore Integer `c` è un simbolo di punteggiatura non ASCII oppure 0 in caso contrario. Ad esempio, solo nella tabella codici 932, `_ismbbkpunct` verifica la punteggiatura Katakana.`_ismbbkpunct` usa le impostazioni locali correnti per qualsiasi impostazione del carattere dipendente dalle impostazioni locali.`_ismbbkpunct_l` è identico, ma usa le impostazioni locali che gli vengono passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbbkpunct`|\<mbctype.h\>|  
|`_ismbbkpunct_l`|\<mbctype.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)