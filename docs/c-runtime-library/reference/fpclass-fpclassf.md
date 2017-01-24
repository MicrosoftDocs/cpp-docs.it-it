---
title: "fpclass, _fpclassf | Microsoft Docs"
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
  - "_fpclass"
  - "_fpclassf"
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
  - "api-ms-win-crt-math-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "fpclass"
  - "_fpclass"
  - "_fpclassf"
  - "math/_fpclass"
  - "float/_fpclass"
  - "math/_fpclassf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "fpclass (funzione)"
  - "numeri a virgola mobile, rappresentazione IEEE"
  - "_fpclass (funzione)"
  - "funzione _fpclassf"
ms.assetid: 2774872d-3543-446f-bc72-db85f8b95a6b
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fpclass, _fpclassf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un valore che indica la classificazione dell'argomento a virgola mobile.  
  
## Sintassi  
  
```  
int _fpclass(   
   double x   
);  
  
int _fpclassf(   
   float x   
); /* x64 only */  
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile da verificare.  
  
## Valore restituito  
 Il `_fpclass` e `_fpclassf` funzioni restituiscono un valore intero che indica la classificazione a virgola mobile dell'argomento `x`. La classificazione può avere uno dei valori seguenti, definiti in \< float. h \>.  
  
|Valore|Descrizione|  
|------------|-----------------|  
|`_FPCLASS_SNAN`|Segnalazione NaN|  
|`_FPCLASS_QNAN`|NaN non interattivo|  
|`_FPCLASS_NINF`|Infinito negativo \( \-INF\)|  
|`_FPCLASS_NN`|Valore diverso da zero normalizzato negativo|  
|`_FPCLASS_ND`|Denormalizzato negativo|  
|`_FPCLASS_NZ`|Zero negativo \(\-0\)|  
|`_FPCLASS_PZ`|0 positivo \(\+0\)|  
|`_FPCLASS_PD`|Denormalizzato positivo|  
|`_FPCLASS_PN`|Diverso da zero normalizzato positivo|  
|`_FPCLASS_PINF`|Infinito positivo \(\+INF\)|  
  
## Note  
 Il `_fpclass` e `_fpclassf` funzioni sono specifici di Microsoft. È simile a [fpclassify](../../c-runtime-library/reference/fpclassify.md), ma restituire ulteriori informazioni sull'argomento. Il `_fpclassf` funzione è disponibile solo quando compilato per x64 la piattaforma.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fpclass`|\<float.h\>|  
  
 Per ulteriori informazioni sulla compatibilità e conformità, vedere [compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [isNaN, isNaN, \_isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)   
 [fpclassify](../../c-runtime-library/reference/fpclassify.md)