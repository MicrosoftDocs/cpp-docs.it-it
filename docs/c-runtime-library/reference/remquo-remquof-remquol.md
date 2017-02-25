---
title: "remquo, remquof, remquol | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "remquof"
  - "remquo"
  - "remquol"
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
  - "remquof"
  - "remquol"
  - "remquo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remquol (funzione)"
  - "remquof (funzione)"
  - "remquo (funzione)"
ms.assetid: a1d3cb8b-8027-4cd3-8deb-04eb17f299fc
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# remquo, remquof, remquol
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il resto di due valori interi e memorizza un valore intero con il segno e la grandezza approssimativa del quoziente in una posizione specificata in un parametro.  
  
## Sintassi  
  
```  
double remquo(   
   double numer,  
   double denom,  
   int* quo  
);  
float remquo(   
   float numer,  
   float denom,  
   int* quo  
); /* C++ only */  
long double remquo(   
   long double numer,  
   long double denom,  
   int* quo  
); /* C++ only */  
float remquof(   
   float numer,  
   float denom,  
   int* quo  
);  
long double remquol(   
   long double numer,  
   long double denom,  
   int* quo  
);  
  
```  
  
#### Parametri  
 `numer`  
 Numeratore.  
  
 `denom`  
 Denominatore.  
  
 `quo`  
 Puntatore a un integer per memorizzare un valore con il segno e la grandezza approssimativa del quoziente.  
  
## Valore restituito  
 `remquo` restituisce il resto in virgola mobile di `x` \/ `y`.  Se il valore di `y` è 0.0, `remquo` restituisce un valore NaN non interattivo.  Per informazioni sulla rappresentazione di un quiet Nan dalla famiglia `printf`, vedere [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
## Note  
 La funzione `remquo` calcola il resto a virgola mobile `f` di `x` \/ `y` in modo che `x` \= `i` `*` `y` \+ `f`, dove `i` è un Integer, `f` ha lo stesso segno di `x` e il valore assoluto di `f` è minore del valore assoluto di `y`.  
  
 C\+\+ consente l'overload, quindi è possibile chiamare gli overload di `remquo` che accettano e restituiscono i valori `float` o `long double`.  In un programma C, `remquo` accetta sempre due double e restituisce un double.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`remquo`, `remquof`, `remquol`|\<math.h\>|  
  
 Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```c  
// crt_remquo.c  
// This program displays a floating-point remainder.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double w = -10.0, x = 3.0, z;  
   int quo = 0;  
  
   z = remquo(w, x, &quo);  
   printf("The remainder of %.2f / %.2f is %f\n", w, x, z);  
   printf("Approximate signed quotient is %d\n", quo);  
}  
```  
  
  **Il resto di \-10,00 \/ 3,00 è \-1,000000**  
**L'approssimazione del quoziente con segno è \-3**   
## Equivalente .NET Framework  
 [System::Math::IEEERemainder](https://msdn.microsoft.com/en-us/library/system.math.ieeeremainder.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [ldiv, lldiv](../../c-runtime-library/reference/ldiv-lldiv.md)   
 [imaxdiv](../../c-runtime-library/reference/imaxdiv.md)   
 [fmod, fmodf](../../c-runtime-library/reference/fmod-fmodf.md)   
 [remainder, remainderf, remainderl](../../c-runtime-library/reference/remainder-remainderf-remainderl.md)