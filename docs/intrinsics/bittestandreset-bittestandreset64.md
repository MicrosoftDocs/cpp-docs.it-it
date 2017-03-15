---
title: "_bittestandreset, _bittestandreset64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_bittestandreset64_cpp"
  - "_bittestandreset"
  - "_bittestandreset_cpp"
  - "_bittestandreset64"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_bittestandreset intrinsic"
  - "_bittestandreset64 intrinsic"
  - "btr instruction"
ms.assetid: 8dad63bb-a051-4cd7-a793-3357537dfeaf
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# _bittestandreset, _bittestandreset64
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Generare l'istruzione che esamina il bit `b` dell'indirizzo `a`, restituisce il valore corrente e reimposta il bit su 0.  
  
## Sintassi  
  
```  
unsigned char _bittestandreset(    long *a,    long b ); unsigned char _bittestandreset64(    __int64 *a,    __int64 b );  
```  
  
#### Parametri  
 \[in, out\] `a`  
 Puntatore alla memoria da esaminare.  
  
 \[in\] `b`  
 Posizione del bit da testare.  
  
## Valore restituito  
 Bit nella posizione specificata.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`_bittestandreset`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`_bittestandreset64`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## Esempio  
  
```  
// bittestandreset.cpp  
// processor: x86, IPF, x64  
#include <stdio.h>  
#include <limits.h>  
#include <intrin.h>  
  
#pragma intrinsic(_bittestandreset)  
  
// Check the sign bit and reset to 0 (taking the absolute value)  
// Returns 0 if the number is positive or zero  
// Returns 1 if the number is negative  
unsigned char absolute_value(long* p)  
{  
   const int SIGN_BIT = 31;  
   return _bittestandreset(p, SIGN_BIT);  
}  
  
int main()  
{  
    long i = -112;  
    unsigned char result;  
  
    // Check the sign bit and reset to 0 (taking the absolute value)  
  
    result = absolute_value(&i);  
    if (result == 1)  
        printf_s("The number was negative.\n");     
}  
```  
  
  **Il numero è negativo.**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)