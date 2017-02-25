---
title: "erf, erff, erfl, erfc, erfcf, erfcl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "erff"
  - "erfl"
  - "erf"
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
  - "erfl"
  - "erf"
  - "erff"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "erf (funzione)"
  - "erff (funzione)"
  - "erfl (funzione)"
ms.assetid: 144d90d3-e437-41c2-a659-cd57596023b5
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# erf, erff, erfl, erfc, erfcf, erfcl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola la funzione di errore o la funzione di errore complementare di un valore.  
  
## Sintassi  
  
```  
double erf(    double x ); float erf(    float x ); // C++ only long double erf(    long double x ); // C++ only float erff(    float x ); long double erfl(    long double x ); double erfc(    double x ); float erfc(    float x ); // C++ only long double erfc(    long double x ); // C++ only float erfcf(    float x ); long double erfcl(    long double x );  
```  
  
#### Parametri  
 `x`  
 Un valore a virgola mobile.  
  
## Valore restituito  
 Le funzioni `erf` restituiscono la funzione di errore di Gauss di `x`.  Le funzioni `erfc` restituiscono la funzione di errore di Gauss complementare di `x`.  
  
## Note  
 Le funzioni `erf` calcolano la funzione di errore di gauss di x, definita come:  
  
 ![Funzione di errore di x](../../c-runtime-library/reference/media/crt_erf_formula.png "CRT\_erf\_formula")  
  
 La funzione di errore di Gauss complementare è definita come 1 – erf\(x\).  Le funzioni `erf` restituiscono un valore compreso tra \-1,0 e 1,0.  Non vi è restituzione di errori.  Le funzioni `erfc` restituiscono un valore compreso tra 0 e 2.  Se `x` è troppo grande per `erfc`, la variabile `errno` è impostata su `ERANGE`.  
  
 Dato che C\+\+ consente l'overload, è possibile chiamare degli overload di `erf` e `erfc` che accettino e restituiscano i tipi `float` e `long double`.  In un programma C `erf` e `erfc` accettano e restituiscono sempre un valore `double`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`erf`, `erff`, `erfl`, `erfc`, `erfcf`, `erfcl`|\<math.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)