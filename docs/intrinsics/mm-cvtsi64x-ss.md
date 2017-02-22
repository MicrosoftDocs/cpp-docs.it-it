---
title: "_mm_cvtsi64x_ss | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mm_cvtsi64x_ss"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cvtsi2ss (istruzione)"
  - "_mm_cvtsi64x_ss (funzione intrinseca)"
ms.assetid: 01e5d321-c18a-46fd-a6f6-324364514e1f
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _mm_cvtsi64x_ss
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera la versione estesa di [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] integer a 64 bit di l scalare di valore a virgola mobile e precisione singola \(`cvtsi2ss`\).  
  
## Sintassi  
  
```  
__m128 _mm_cvtsi64x_ss(   
   __m128 a,   
   __int64 b   
);  
```  
  
#### Parametri  
 \[in\] `a`  
 Una struttura di `__m128` che contiene quattro valori a virgola mobile e precisione singola.  
  
 \[in\] `b`  
 Un Integer a 64 bit da convertire in un valore a virgola mobile.  
  
## Valore restituito  
 Una struttura di `__m128` di cui il primo valore a virgola mobile è il risultato della conversione.  Gli altri tre valori sono invariato copiato da `a`.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_mm_cvtsi64x_ss`|x64|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 La struttura di `__m128` rappresenta un log XMM, questa funzione intrinseca consente il valore `b` dalla memoria di sistema da immettere in un log XMM.  
  
 Questa procedura è disponibile solo come intrinseci.  
  
## Esempio  
  
```  
// _mm_cvtsi64x_ss.cpp  
// processor: x64  
  
#include <intrin.h>  
#include <stdio.h>  
  
#pragma intrinsic(_mm_cvtsi64x_ss)  
  
int main()  
{  
    __m128 a;  
    __int64 b = 54;  
  
    a.m128_f32[0] = 0;  
    a.m128_f32[1] = 0;  
    a.m128_f32[2] = 0;  
    a.m128_f32[3] = 0;  
    a = _mm_cvtsi64x_ss(a, b);  
  
    printf_s( "%lf %lf %lf %lf\n",  
              a.m128_f32[0], a.m128_f32[1],   
              a.m128_f32[2], a.m128_f32[3] );  
}  
```  
  
  **54.000000 0.000000 0.000000 0.000000**   
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_m128](../cpp/m128.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)