---
title: "__ll_lshift | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__ll_lshift_cpp"
  - "__ll_lshift"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ll_lshift (funzione intrinseca)"
  - "__ll_lshift (funzione intrinseca)"
ms.assetid: fe98f733-426d-44b3-8f24-5d0d6d44bd94
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# __ll_lshift
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Scorre il valore a 64 bit fornito del numero specificato di bit.  
  
## Sintassi  
  
```  
unsigned __int64 __ll_lshift(  
   unsigned __int64 Mask,  
   int nBit  
);  
```  
  
#### Parametri  
 \[in\] `Mask`  
 Il valore Integer a 64 bit di scorrimento sinistro.  
  
 \[in\] `nBit`  
 Il numero di bit da spostare.  
  
## Valore restituito  
 La maschera di sinistra i bit di `nBit` .  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__ll_lshift`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Se il programma viene compilato utilizzando l'architettura a 64 bit e `nBit` è maggiore di 63, il numero di bit mediante lo scorrimento è modulo 64 di `nBit` .  Se il programma viene compilato utilizzando l'architettura a 32 bit e `nBit` è maggiore di 31, il numero di bit mediante lo scorrimento è modulo 32 di `nBit` .  
  
 `ll` nel nome indica che si tratta di un'operazione su `long long` \(`__int64`\).  
  
## Esempio  
  
```  
// ll_lshift.cpp  
// compile with: /EHsc  
// processor: x86, x64  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
#pragma intrinsic(__ll_lshift)  
  
int main()  
{  
   unsigned __int64 Mask = 0x100;  
   int nBit = 8;  
   Mask = __ll_lshift(Mask, nBit);  
   cout << hex << Mask << endl;  
}  
```  
  
## Output  
  
```  
10000  
```  
  
 **nota** non rappresenta la versione senza segno l'operazione di spostamento a sinistra.  Questo perché `__ll_lshift` già utilizza un parametro di input senza segno.  A differenza di spostamento a destra, non esiste alcuna dipendenza del segno per lo spostamento a sinistra, poiché il bit meno significativi nel risultato è sempre impostato su zero indipendentemente dal segno del valore di.  
  
### Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_ll\_rshift](../intrinsics/ll-rshift.md)   
 [\_\_ull\_rshift](../intrinsics/ull-rshift.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)