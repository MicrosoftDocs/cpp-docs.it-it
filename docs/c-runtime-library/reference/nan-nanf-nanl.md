---
title: "nan, nanf, nanl | Microsoft Docs"
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
  - "nanf"
  - "nan"
  - "nanl"
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
  - "nan"
  - "nanl"
  - "nanf"
dev_langs: 
  - "C++"
ms.assetid: 790e9158-80ab-43e0-8f5a-096198553fd9
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# nan, nanf, nanl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un valore NaN non interattivo.  
  
## Sintassi  
  
```  
double nan(    const char* input  ); float nanf(    const char* input  ); long double nanl(    const char* input  );  
```  
  
#### Parametri  
 `input`  
 Valore stringa.  
  
## Valore restituito  
 Le funzioni `nan` restituiscono un valore NaN non interattivo.  
  
## Note  
 Le funzioni `nan` restituiscono un valore a virgola mobile che corrisponde a un valore NaN non interattivo \(senza segnalazione\).  Il valore `input` viene ignorato.  Per informazioni sulla rappresentazione di un valore NaN per l'output, vedere [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`nan`, `nanf`, `nanl`|\<math.h\>|\<cmath\>|  
  
## Equivalente .NET Framework  
 [System::Double::NaN](https://msdn.microsoft.com/en-us/library/system.double.nan.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_finite, \_finitef](../../c-runtime-library/reference/finite-finitef.md)   
 [fpclass, \_fpclassf](../../c-runtime-library/reference/fpclass-fpclassf.md)   
 [isNaN, isNaN, \_isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)