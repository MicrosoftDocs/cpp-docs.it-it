---
title: "fabs, fabsf, fabsl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fabsf"
  - "fabs"
  - "fabsl"
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
  - "fabs"
  - "fabsf"
  - "fabsl"
  - "math\fabs"
  - "math\fabsf"
  - "math\fabsl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "valori assoluti"
  - "fabsf (funzione)"
  - "calcolo di valori assoluti"
  - "fabs (funzione)"
  - "funzione fabsl"
ms.assetid: 23bca210-f408-4f5e-b46b-0ccaaec31e36
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# fabs, fabsf, fabsl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il valore assoluto dell'argomento a virgola mobile.  
  
## Sintassi  
  
```  
double fabs(   
   double x   
);  
float fabs(  
   float x   
); // C++ only  
long double fabs(  
   long double x  
); // C++ only  
float fabsf(   
   float x   
);  
long double fabsl(  
   long double x  
);  
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile.  
  
## Valore restituito  
 Il `fabs` funzioni restituiscono il valore assoluto dell'argomento `x`. Non vi è restituzione di errori.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± QNAN,IND|none|\_DOMAIN|  
  
## Note  
 C\+\+ consente l'overload, pertanto è possibile chiamare gli overload di `fabs` Se si include l'intestazione \< cmath \>. In un programma C, `fabs` sempre accetta e restituisce un valore double.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria C|Intestazione obbligatoria di C\+\+|  
|--------------|---------------------------------|----------------------------------------|  
|`fabs`, `fabsf`, `fabsl`|\<math.h\>|\< cmath \> o \< Math. h \>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Vedere l'esempio per [abs](../../c-runtime-library/reference/abs-labs-llabs-abs64.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Abs, laboratori, llabs, abs64](../../c-runtime-library/reference/abs-labs-llabs-abs64.md)   
 [\_cabs](../../c-runtime-library/reference/cabs.md)   
 [labs, llabs](../../misc/labs-llabs.md)