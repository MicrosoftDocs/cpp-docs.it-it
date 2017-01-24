---
title: "nextafter, nextafterf, nextafterl, nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl | Microsoft Docs"
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
  - "nextafterf"
  - "_nextafterf"
  - "nextafter"
  - "nextafterl"
  - "_nextafter"
  - "nexttoward"
  - "nexttowardf"
  - "nexttowardl"
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
  - "nextafter"
  - "_nextafter"
  - "nextafterf"
  - "nextafterl"
  - "_nextafterf"
  - "math/nextafter"
  - "math/nextafterf"
  - "math/nextafterl"
  - "nexttoward"
  - "nexttowardf"
  - "nexttowardl"
  - "math/nexttoward"
  - "math/nexttowardf"
  - "math/nexttowardl"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_nextafter (funzione)"
  - "nextafter (funzione)"
  - "funzione _nextafterf"
  - "nextafterf (funzione)"
  - "funzione nextafterl"
  - "funzione nexttoward"
  - "funzione nexttowardf"
  - "funzione nexttowardl"
ms.assetid: 9785bfb9-de53-4bd0-9637-f05fa0c1f6ab
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# nextafter, nextafterf, nextafterl, nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il successivo valore a virgola mobile rappresentabile.  
  
## Sintassi  
  
```  
double nextafter(  
   double x,  
   double y   
);  
  
float nextafter(  
   float x,  
   float y   
); /* C++ only, requires <cmath> */  
  
long double nextafter(  
   long double x,  
   long double y   
); /* C++ only, requires <cmath> */  
  
float nextafterf(  
   float x,  
   float y   
);   
  
long double nextafterl(  
   long double x,  
   long double y   
);  
  
double _nextafter(  
   double x,  
   double y   
);  
  
float _nextafterf(  
   float x,  
   float y   
); /* x64 only */  
  
double nexttoward(  
   double x,  
   long double y   
);  
  
float nexttoward(  
   float x,  
   long double y   
); /* C++ only, requires <cmath> */  
  
long double nexttoward(  
   long double x,  
   long double y   
); /* C++ only, requires <cmath> */  
  
float nexttowardf(  
   float x,  
   long double y   
);   
  
long double nexttowardl(  
   long double x,  
   long double y   
);  
```  
  
#### Parametri  
 `x`  
 Il valore a virgola mobile da avviare.  
  
 `y`  
 Il valore a virgola mobile e per passare a.  
  
## Valore restituito  
 Restituisce il successivo valore a virgola mobile rappresentabile del tipo restituito dopo `x` nella direzione di `y`. Se `x`\=`y`, la funzione restituisce `y`, convertito nel tipo restituito, senza eccezione attivata. Se `x` non è uguale a `y`, il risultato è un denormal o zero, gli stati di eccezioni a virgola mobile FE\_UNDERFLOW e FE\_INEXACT sono impostati e viene restituito il risultato corretto. Se il valore `x` o `y` è NAN, il valore restituito è uno di NaN input. Se `x` è finito e il risultato è infinito o non rappresentabile nel tipo, viene restituito un firmati correttamente infinity o NAN, gli stati di eccezioni a virgola mobile FE\_OVERFLOW e FE\_INEXACT sono impostati, e `errno` è impostato su ERANGE.  
  
## Note  
 Il `nextafter` e `nexttoward` funzione famiglie sono equivalenti, tranne per il tipo di parametro `y`. Se `x` e `y` sono uguali, il valore restituito è `y` convertito nel tipo restituito.  
  
 Poiché C\+\+ consente l'overload, se si include \< cmath \> è possibile chiamare gli overload di `nextafter` e `nexttoward` che restituiscono `float` e `long double` tipi. In un programma C, `nextafter` e `nexttoward` restituiscono sempre `double`.  
  
 Il `_nextafter` e `_nextafterf` funzioni sono specifici di Microsoft. Il `_nextafterf` funzione è disponibile solo durante la compilazione per x64.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria \(C\)|Intestazione obbligatoria \(C\+\+\)|  
|-------------|-------------------------------------|-----------------------------------------|  
|`nextafter`, `nextafterf`, `nextafterl`, `_nextafterf`, `nexttoward`, `nexttowardf`, `nexttowardl`|\<math.h\>|\<math.h\> o \<cmath\>|  
|`_nextafter`|\<float.h\>|\< float. h \> o \< cfloat \>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [isNaN, isNaN, \_isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)