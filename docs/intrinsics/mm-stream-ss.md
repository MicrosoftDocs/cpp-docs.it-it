---
title: "_mm_stream_ss | Microsoft Docs"
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
  - "_mm_stream_ss"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "movntss (istruzione)"
  - "_mm_stream_ss (funzione intrinseca)"
ms.assetid: c53dffe9-0dfe-4063-85d3-e8987b870fce
caps.latest.revision: 13
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mm_stream_ss
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Scrive i dati a 32 bit in una posizione di memoria senza inquinare le cache.  
  
## Sintassi  
  
```  
void _mm_stream_ss(  
   float * Dest,  
   __m128 Source  
);  
```  
  
#### Parametri  
 \[out\] `Dest`  
 Un puntatore alla posizione in cui i dati di origine vengono scritti.  
  
 \[in\] `Source`  
 I 128 bit che contiene il valore di `float` da scrivere nei bit della parte inferiore 32.  
  
## Valore restituito  
 Nessuno.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_mm_stream_ss`|SSE4a|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca genera l'istruzione di `movntss`.  Per determinare il supporto hardware in questa istruzione, chiamare la funzione intrinseca di `__cpuid` con `InfoType=0x80000001`e il bit di controllo, 6 di `CPUInfo[2] (ECX)`.  Questo bit è 1 quando l'istruzione è supportata, e 0 in caso contrario.  
  
 Se si esegue il codice che utilizza la funzione intrinseca di `_mm_stream_ss` sull'hardware che non supporta l'istruzione di `movntss` , i risultati sono imprevedibili.  
  
## Esempio  
  
```  
// Compile this sample with: /EHsc  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
int main()  
{  
    __m128 vals;  
    float f[4];  
  
    f[0] = -1.;  
    f[1] = -2.;  
    f[2] = -3.;  
    f[3] = -4.;  
    vals.m128_f32[0] = 0.;  
    vals.m128_f32[1] = 1.;  
    vals.m128_f32[2] = 2.;  
    vals.m128_f32[3] = 3.;  
    _mm_stream_ss(&f[3], vals);  
    cout << "f[0] = " << f[0] << ", f[1] = " << f[1] << endl;  
    cout << "f[1] = " << f[1] << ", f[3] = " << f[3] << endl;  
}  
  
```  
  
  **f \[0\] \= \-1, f \[1\] \= \-2 f \[2\] \= \-3, f \[3\] \= 3**   
## Microsoft FINALE specifico  
 Copyright 2007 da Advanced Micro Devices, inc tutti i diritti riservati.  Riprodotto con l'autorizzazione di Advanced Micro Devices, inc  
  
## Vedere anche  
 [\_mm\_stream\_sd](../intrinsics/mm-stream-sd.md)   
 [\_mm\_stream\_ps](http://msdn.microsoft.com/it-it/f7af2f19-c0d4-43c6-b5f6-a658d2b1d869)   
 [\_mm\_store\_ss](http://msdn.microsoft.com/it-it/dfeeea35-8faf-4f54-8a9e-6723e226fb08)   
 [\_mm\_sfence](http://msdn.microsoft.com/it-it/b6c0d18e-3628-4318-826b-45f66782e870)   
 [Streaming SIMD Extensions that Support the Cache](http://msdn.microsoft.com/it-it/8f03493a-d5f5-4457-892e-0b6540494872)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)