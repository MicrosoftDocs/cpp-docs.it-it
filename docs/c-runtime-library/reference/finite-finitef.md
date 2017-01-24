---
title: "_finite, _finitef | Microsoft Docs"
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
  - "_finite"
  - "_finitef"
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
  - "finite"
  - "_finite"
  - "_finitef"
  - "math/_finite"
  - "math/_finitef"
  - "float/_finite"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "finite (funzione)"
  - "_finite (funzione)"
  - "funzione _finitef"
ms.assetid: 5a7d7ca7-befb-4e1f-831d-28713c6eb805
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _finite, _finitef
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un valore a virgola mobile è finito.  
  
## Sintassi  
  
```  
int _finite(   
   double x   
);  
  
int _finitef(   
   float x   
); /* x64 and ARM/ARM64 only */  
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile da verificare.  
  
## Valore restituito  
 `_finite` e `_finitef` restituiscono un valore diverso da zero se l'argomento *x* è finito, ossia se –INF \< `x` \< \+INF. Restituisce 0 se l'argomento è infinito o NAN.  
  
## Note  
 Il `_finite` e `_finitef` funzioni sono specifici di Microsoft. Il `_finitef` funzione è disponibile quando compilato per x86, ARM o ARM64 piattaforme.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria \(C\)|Intestazione obbligatoria \(C\+\+\)|  
|--------------|-------------------------------------|-----------------------------------------|  
|`_finite`|\<float.h\> o \<math.h\>|\<float.h\>, \<math.h\>, \<cfloat\> o \<cmath\>|  
|`_finitef`|\<math.h\>|\<math.h\> o \<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 [System::Double::IsInfinity](https://msdn.microsoft.com/en-us/library/system.double.isinfinity.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [isNaN, isNaN, \_isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)   
 [fpclass, \_fpclassf](../../c-runtime-library/reference/fpclass-fpclassf.md)