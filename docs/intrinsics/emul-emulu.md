---
title: "__emul, __emulu | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__emulu_cpp"
  - "__emul"
  - "__emul_cpp"
  - "__emulu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__emul (funzione intrinseca)"
  - "__emulu (funzione intrinseca)"
ms.assetid: 79545236-cca2-40b8-a4e1-8abce9b26311
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# __emul, __emulu
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Esegue le moltiplicazioni che superano che un intero a 32 bit possibile utilizzare.  
  
## Sintassi  
  
```  
__int64 __emul(  
   int a,  
   int b  
);  
unsigned __int64 __emulu(  
   unsigned int a,  
   unsigned int b  
);  
```  
  
#### Parametri  
 \[in\] `a`  
 Il primo operando Integer della moltiplicazione.  
  
 \[in\] `b`  
 Il secondo operando Integer della moltiplicazione.  
  
## Valore restituito  
 Il risultato della moltiplicazione.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__emul`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__emulu`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 `__emul` accetta a due 32 bit i valori con segno e restituisce il risultato della moltiplicazione come valore intero con segno a 64 bit.  
  
 `__emulu` accetta due valori di Integer senza segno a 32 bit e restituisce il risultato della moltiplicazione come valore intero senza segno a 64 bit.  
  
## Esempio  
  
```  
// emul.cpp  
// compile with: /EHsc  
// processor: x86, x64  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
#pragma intrinsic(__emul)  
#pragma intrinsic(__emulu)  
  
int main()  
{  
   int a = -268435456;   
   int b = 2;   
  
   __int64 result = __emul(a, b);  
  
   cout << a << " * " << b << " = " << result << endl;  
  
   unsigned int ua = 0xFFFFFFFF; // Dec value: 4294967295  
   unsigned int ub = 0xF000000;  // Dec value: 251658240  
  
   unsigned __int64 uresult = __emulu(ua, ub);  
  
   cout << ua << " * " << ub << " = " << uresult << endl;  
  
}  
```  
  
## Output  
  
```  
-268435456 * 2 = -536870912  
4294967295 * 251658240 = 1080863910317260800  
```  
  
### Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)