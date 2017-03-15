---
title: "_bittest, _bittest64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_bittest64"
  - "_bittest_cpp"
  - "_bittest64_cpp"
  - "_bittest"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_bittest intrinsic"
  - "_bittest64 intrinsic"
  - "bt instruction"
ms.assetid: 15e62afb-abea-4ee7-a6b1-13efa2034937
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _bittest, _bittest64
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Genera l'istruzione `bt`, che esamina il bit in posizione `b` dell'indirizzo `a` e restituisce il valore di tale bit.  
  
## Sintassi  
  
```  
unsigned char _bittest(    long *a,    long b ); unsigned char _bittest64(    __int64 *a,    __int64 b );  
```  
  
#### Parametri  
 \[in\] `a`  
 Puntatore alla memoria da esaminare.  
  
 \[in\] `b`  
 Posizione del bit da testare.  
  
## Valore restituito  
 Bit nella posizione specificata.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|-------------------------|------------------|------------|  
|`_bittest`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_bittest64`|ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
  
## Note  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## Esempio  
  
```  
// bittest.cpp  
// processor: x86, ARM, x64  
  
#include <stdio.h>  
#include <intrin.h>  
  
long num = 78002;  
  
int main()  
{  
    unsigned char bits[32];  
    long nBit;  
  
    printf_s("Number: %d\n", num);  
  
    for (nBit = 0; nBit < 31; nBit++)  
    {  
        bits[nBit] = _bittest(&num, nBit);  
    }  
  
    printf_s("Binary representation:\n");  
    while (nBit--)  
    {  
        if (bits[nBit])  
            printf_s("1");  
        else  
            printf_s("0");  
    }  
}  
```  
  
  **Numero: 78002**  
**Rappresentazione binaria: 0000000000000010011000010110010**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)