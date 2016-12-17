---
title: "lgamma, lgammaf, lgammal | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "lgamma"
  - "lgammaf"
  - "lgammal"
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
  - "lgamma"
  - "lgammaf"
  - "lgammal"
  - "math/lgamma"
  - "math/lgammaf"
  - "math/lgammal"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "lgamma (funzione)"
  - "funzione lgammal"
  - "lgammaf (funzione)"
ms.assetid: 6e326c58-7077-481a-a329-c82ae56ae9e6
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# lgamma, lgammaf, lgammal
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina il logaritmo naturale del valore assoluto della funzione gamma del valore specificato.  
  
## Sintassi  
  
```  
double lgamma(  
   double x  
);  
  
float lgamma(  
   float x  
); //C++ only  
  
long double lgamma(  
   long double x  
); //C++ only  
  
float lgammaf(  
   float x  
);  
  
long double lgammal(  
   long double x  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 Il valore per il calcolo.  
  
## Valore restituito  
 Se ha esito positivo, restituisce il logaritmo naturale del valore assoluto della funzione gamma di `x.`  
  
|Problema|Valore restituito|  
|--------------|-----------------------|  
|`x` \= NaN|NaN|  
|`x` \= ±0|\+ INFINITY|  
|`x`\= numero intero negativo|\+ INFINITY|  
|±INFINITY|\+ INFINITY|  
|Errore polo|\+ HUGE\_VAL \+ HUGE\_VALF, o \+ HUGE\_VALL|  
|Errore di intervallo di overflow|±HUGE\_VAL, ±HUGE\_VALF o ±HUGE\_VALL|  
  
 Gli errori vengono segnalati come specificato in [\_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `lgamma` che accettano e restituiscono tipi float e long double. In un programma C, `lgamma` sempre accetta e restituisce un valore double.  
  
 Se x è un numero razionale, questa funzione restituisce il logaritmo di calcolare il fattoriale \(`x`\-1\).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`lgamma`, `lgammaf`,  `lgammal`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [tgamma, tgammaf, tgammal](../../c-runtime-library/reference/tgamma-tgammaf-tgammal.md)