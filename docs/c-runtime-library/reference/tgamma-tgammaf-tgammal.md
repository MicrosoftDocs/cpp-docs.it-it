---
title: "tgamma, tgammaf, tgammal | Microsoft Docs"
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
  - "tgamma"
  - "tgammaf"
  - "tgammal"
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
  - "tgamma"
  - "tgammaf"
  - "tgammal"
  - "math/tgamma"
  - "math/tgammaf"
  - "math/tgammal"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tgamma (funzione)"
  - "tgammaf (funzione)"
  - "funzione tgammal"
ms.assetid: f1bd2681-8af2-48a9-919d-5358fd068acd
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# tgamma, tgammaf, tgammal
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina la funzione gamma del valore specificato.  
  
## Sintassi  
  
```  
double tgamma(  
   double x  
);  
  
float tgamma(  
   float x  
); //C++ only  
  
long double tgamma(  
   long double x  
); //C++ only  
  
float tgammaf(  
   float x  
);  
  
long double tgammal(  
   long double x  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 Il valore da trovare il valore gamma.  
  
## Valore restituito  
 Se ha esito positivo, restituisce il valore gamma di `x`.  
  
 Un errore di intervallo può verificarsi se la grandezza del `x` è troppo grande o troppo piccolo per il tipo di dati. Un errore di dominio o un errore di intervallo può verificarsi se `x` \< \= 0.  
  
|Problema|Valore restituito|  
|--------------|-----------------------|  
|x \= ± 0|±INFINITY|  
|x \= numero intero negativo|NaN|  
|x \= \- infinito|NaN|  
|x \= \+ infinito|\+ INFINITY|  
|x \= NaN|NaN|  
|Errore di dominio|NaN|  
|Errore polo|±HUGE\_VAL, ±HUGE\_VALF o ±HUGE\_VALL|  
|Errore di intervallo di overflow|±HUGE\_VAL, ±HUGE\_VALF o ±HUGE\_VALL|  
|Errore di intervallo di underflow|il valore corretto, dopo l'arrotondamento.|  
  
 Gli errori vengono segnalati come specificato in [\_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare l'overload che accettano e restituiscono tipi float e long double di tgamma. In un programma C, tgamma accetta e restituisce sempre un valore double.  
  
 Se x è un numero naturale, questa funzione restituisce il fattoriale \(x\-1\).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`tgamma`, `tgammaf`,  `tgammal`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [lgamma, lgammaf, lgammal](../../c-runtime-library/reference/lgamma-lgammaf-lgammal.md)