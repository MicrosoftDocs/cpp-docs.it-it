---
title: "Fmin, fminf, fminl2 | Microsoft Docs"
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
  - "fmin"
  - "fminf"
  - "fminl"
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
  - "fmin"
  - "fminf"
  - "fminl"
  - "math/fmin"
  - "math/fminf"
  - "math/fminl"
helpviewer_keywords: 
  - "fmin (funzione)"
  - "fminf (funzione)"
  - "funzione fminl"
ms.assetid: 1916dfb5-99c1-4b0d-aefb-513525c3f2ac
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Fmin, fminf, fminl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina il meno elevato tra due valori specificati.  
  
## Sintassi  
  
```  
double fmin(  
   double x,   
   double y  
);  
  
float fmin(  
   float x,   
   float y  
); //C++ only  
  
long double fmin(  
   long double x,   
   long double y  
); //C++ only  
  
float fminf(  
   float x,   
   float y  
);  
  
long double fminl(  
   long double x,   
   long double y  
);  
  
```  
  
#### Parametri  
 `x`  
 Primo valore da confrontare.  
  
 `y`  
 Secondo valore da confrontare.  
  
## Valore restituito  
 Se ha esito positivo, restituisce il meno elevato tra `x` o `y`.  
  
|Input|Risultato|  
|-----------|---------------|  
|`x` è un valore NaN|`y`|  
|`y` è un valore NaN|`x`|  
|`x` e `y` sono NaN|NaN|  
  
 La funzione non causa [\_matherr](../../c-runtime-library/reference/matherr.md) per essere richiamato, provocare eventuali eccezioni a virgola mobile o modificare il valore di `errno`.  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `fmin` che accettano e restituiscono tipi float e long double. In un programma C, `fmin` sempre accetta e restituisce un valore double.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`fmin`, `fminf`,  `fminl`|C: \< Math. h \><br /><br /> C\+\+: \< Math. h \> o \< cmath \>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)