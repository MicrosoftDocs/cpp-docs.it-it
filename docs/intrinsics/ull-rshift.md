---
title: "__ull_rshift | Microsoft Docs"
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
  - "__ull_rshift"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ull_rshift (funzione intrinseca)"
  - "__ull_rshift (funzione intrinseca)"
ms.assetid: b7ff5254-3540-4e6e-b57c-a6c4beb7dca2
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __ull_rshift
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 su x64, delega un valore a 64 bit specificato dal primo parametro a destra da una serie di bit specificato dal secondo parametro.  
  
## Sintassi  
  
```  
unsigned __int64 __ull_rshift(   
   unsigned __int64 mask,    
   int nBit   
);  
```  
  
#### Parametri  
 \[in\] `mask`  
 Il valore Integer a 64 bit per scorrere destra.  
  
 \[in\] `nBit`  
 Il numero di bit da spostare, del modulo 32 per x86 e del modulo 64 su x64.  
  
## Valore restituito  
 La maschera scorre i bit di `nBit` .  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__ull_rshift`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Se il secondo parametro è maggiore di 31 su x86 \(63 su x64\), tale numero viene utilizzato il modulo 32 \(64 in x64\) per determinare il numero di bit per lo scorrimento.  `ull` nel nome indica `unsigned long long (unsigned __int64)`.  
  
## Esempio  
  
```  
// ull_rshift.cpp  
// compile with: /EHsc  
// processor: x86, x64  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
#pragma intrinsic(__ull_rshift)  
  
int main()  
{  
   unsigned __int64 mask = 0x100;  
   int nBit = 8;  
   mask = __ull_rshift(mask, nBit);  
   cout << hex << mask << endl;  
}  
```  
  
## Output  
  
```  
1  
```  
  
### Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_ll\_lshift](../intrinsics/ll-lshift.md)   
 [\_\_ll\_rshift](../intrinsics/ll-rshift.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)