---
title: "logb, logbf, logbl, _logb, _logbf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "logb"
  - "_logb"
  - "_logbl"
  - "logbf"
  - "logbl"
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
  - "logb"
  - "logbl"
  - "_logb"
  - "_logbf"
  - "logbf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_logb (funzione)"
  - "_logbf (funzione)"
  - "esponente, numeri a virgola mobile"
  - "esponenti e mantisse"
  - "funzioni a virgola mobile"
  - "funzioni a virgola mobile, mantissa ed esponente"
  - "logb (funzione)"
  - "logbf (funzione)"
  - "logbl (funzione)"
  - "mantisse, variabili a virgola mobile"
ms.assetid: 780c4daa-6fe6-4fbc-9412-4c1ba1a1766f
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# logb, logbf, logbl, _logb, _logbf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Estrae il valore dell'esponente di un argomento a virgola mobile.  
  
## Sintassi  
  
```  
double logb(  
   double x   
);  
float logb(  
   float x   
); // C++ only  
long double logb(  
   long double x   
); // C++ only   
float logbf(  
   float x   
);  
long double logbl(  
   long double x   
);  
double _logb(  
   double x   
);  
float _logbf(  
   float x   
);  
```  
  
#### Parametri  
 x  
 Un valore a virgola mobile.  
  
## Valore restituito  
 `logb` restituisce il valore imparziale dell'esponente di `x` come un intero con segno rappresentato come valore a virgola mobile.  
  
## Note  
 Le funzioni `logb` estraggono il valore esponenziale dell'argomento a virgola mobile `x`, come se `x` fosse rappresentato con intervallo infinito.  Se l'argomento `x` viene denormalizzato, viene considerato come se fosse normalizzato.  
  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `logb` che accettano e restituiscono i valori `float` o `long double`.  In un programma C, `logb` accetta e restituisce sempre un `double`.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± QNAN, IND|Nessuno|\_DOMAIN|  
|± 0|ZERODIVIDE|\_SING|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_logb`|\<float.h\>|  
|`logb`, `logbf`, `logbl`, `_logbf`|\<math.h\>|  
  
 Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [frexp](../../c-runtime-library/reference/frexp.md)