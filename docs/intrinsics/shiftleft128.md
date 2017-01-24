---
title: "__shiftleft128 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__shiftleft128"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__shiftleft128 intrinsic"
ms.assetid: 557b846a-8fb0-469d-91ac-1b1fad80dc2a
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __shiftleft128
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Sposta una quantità di 128 bit, rappresentata come due quantità di 64 bit `LowPart` e `HighPart`, a sinistra di un numero di bit specificato da `Shift` e restituisce i 64 bit più significativi del risultato.  
  
## Sintassi  
  
```  
unsigned __int64 __shiftleft128(     unsigned __int64 LowPart,     unsigned __int64 HighPart,     unsigned char Shift  );  
```  
  
#### Parametri  
 \[in\] `LowPart`  
 I 64 bit meno significativi della quantità di 128 bit da spostare.  
  
 \[in\] `HighPart`  
 I 64 bit più significativi della quantità di 128 bit da spostare.  
  
 \[in\] `Shift`  
 Numero di bit da spostare.  
  
## Valore restituito  
 I 64 bit più significativi del risultato.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`__shiftleft128`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Il valore `Shift` è sempre modulo 64 in modo che, ad esempio, se si chiama `__shiftleft128(1, 0, 64)`, la funzione sposterà la parte meno significativa di `0` bit a sinistra e restituirà la parte più significativa di `0` e non di `1`, come ci si aspetterebbe altrimenti.  
  
## Esempio  
  
```  
// shiftleft128.c  
// processor: IPF, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic (__shiftleft128, __shiftright128)  
  
int main()  
{  
    unsigned __int64 i = 0x1I64;  
    unsigned __int64 j = 0x10I64;  
    unsigned __int64 ResultLowPart;  
    unsigned __int64 ResultHighPart;  
  
    ResultLowPart = i << 1;  
    ResultHighPart = __shiftleft128(i, j, 1);  
  
    // concatenate the low and high parts padded with 0's  
    // to display correct hexadecimal 128 bit values  
    printf_s("0x%02I64x%016I64x << 1 = 0x%02I64x%016I64x\n",  
             j, i, ResultHighPart, ResultLowPart);  
  
    ResultHighPart = j >> 1;  
    ResultLowPart = __shiftright128(i, j, 1);  
  
    printf_s("0x%02I64x%016I64x >> 1 = 0x%02I64x%016I64x\n",  
             j, i, ResultHighPart, ResultLowPart);    
}  
```  
  
  **0x100000000000000001 \<\< 1 \= 0x200000000000000002**  
**0x100000000000000001 \>\> 1 \= 0x080000000000000000**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [\_\_shiftright128](../intrinsics/shiftright128.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)