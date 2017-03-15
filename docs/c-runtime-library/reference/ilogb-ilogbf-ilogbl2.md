---
title: "ilogb, ilogbf, ilogbl2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "ilogb"
  - "ilogbf"
  - "ilogbl"
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
  - "ilogb"
  - "ilogbf"
  - "ilogbl"
  - "math/ilogb"
  - "math/ilogbf"
  - "math/ilogbl"
helpviewer_keywords: 
  - "ilogb (funzione)"
  - "ilogbf (funzione)"
  - "funzione ilogbl"
ms.assetid: 9ef19d57-1caa-41d5-8233-2faad3562fcb
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# ilogb, ilogbf, ilogbl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera un valore integer che rappresenta l'esponente in base 2 non distorta del valore specificato.  
  
## Sintassi  
  
```  
int ilogb(  
   double x  
);  
  
int ilogb(  
   float x  
); //C++ only  
  
int ilogb(  
   long double x  
); //C++ only  
  
int ilogbf(  
   float x  
);  
  
int ilogbl(  
   long double x  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 Valore specificato.  
  
## Valore restituito  
 Se ha esito positivo, restituisce l'esponente in base 2 di `x` come signed `int` valore.  
  
 In caso contrario, restituisce uno dei valori seguenti, definiti in \< Math. h \>:  
  
|Input|Risultato|  
|-----------|---------------|  
|±0|FP\_ILOGB0|  
|±INF, ±nan, indefinito|FP\_ILOGBNAN|  
  
 Gli errori vengono segnalati come specificato in [\_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `ilogb` che accettano e restituiscono tipi float e long double. In un programma C, `ilogb` sempre accetta e restituisce un valore double.  
  
 Chiamare questa funzione è simile alla chiamata equivalente `logb` \(funzione\), quindi eseguire il cast del valore restituito `int`.  
  
## Requisiti  
  
|Routine|Intestazione C|Intestazione C\+\+|  
|-------------|--------------------|------------------------|  
|`ilogb`, `ilogbf`,  `ilogbl`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [frexp](../../c-runtime-library/reference/frexp.md)   
 [logb, logbf, logbl, \_logb, \_logbf](../../c-runtime-library/reference/logb-logbf-logbl-logb-logbf.md)