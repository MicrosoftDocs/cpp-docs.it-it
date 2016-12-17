---
title: "__ll_rshift | Microsoft Docs"
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
  - "__ll_rshift_cpp"
  - "__ll_rshift"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__ll_rshift (funzione intrinseca)"
  - "ll_rshift (funzione intrinseca)"
ms.assetid: ef13b732-d122-44a0-add9-f5544a2c4ab2
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __ll_rshift
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Scorre un valore a 64 bit specificato dal primo parametro a destra da una serie di bit specificato dal secondo parametro.  
  
## Sintassi  
  
```  
__int64 __ll_rshift(  
   __int64 Mask,  
   int nBit  
);  
```  
  
#### Parametri  
 \[in\] `Mask`  
 Il valore Integer a 64 bit per scorrere destra.  
  
 \[in\] `nBit`  
 Il numero di bit da spostare, del modulo 64 su x64 e del modulo 32 per x86.  
  
## Valore restituito  
 La maschera scorre i bit di `nBit` .  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__ll_rshift`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Se il secondo parametro è maggiore di 64 su x64 \(32 per x86\), tale numero viene utilizzato il modulo 64 \(32 in x86\) per determinare il numero di bit per lo scorrimento.  Il prefisso di `ll` indica che si tratta di un'operazione su `long long`, un altro nome per `__int64`, il tipo integrale con segno a 64 bit.  
  
## Esempio  
  
```  
// ll_rshift.cpp  
// compile with: /EHsc  
// processor: x86, x64  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
#pragma intrinsic(__ll_rshift)  
  
int main()  
{  
   __int64 Mask = - 0x100;  
   int nBit = 4;  
   cout << hex << Mask << endl;  
   cout << " - " << (- Mask) << endl;  
   Mask = __ll_rshift(Mask, nBit);  
   cout << hex << Mask << endl;  
   cout << " - " << (- Mask) << endl;  
}  
```  
  
## Output  
  
```  
ffffffffffffff00  
 - 100  
fffffffffffffff0  
 - 10  
```  
  
 **nota** se `_ull_rshift` è stato utilizzato, il byte più significativo del valore diritto\-scorso sarebbe stato zero, il risultato desiderato non sarebbe stato ottenuto nel caso di un valore negativo.  
  
### Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_ll\_lshift](../intrinsics/ll-lshift.md)   
 [\_\_ull\_rshift](../intrinsics/ull-rshift.md)