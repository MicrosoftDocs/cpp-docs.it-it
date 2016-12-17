---
title: "_mm_stream_sd | Microsoft Docs"
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
  - "_mm_stream_sd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_mm_stream_sd (funzione intrinseca)"
  - "movntsd (istruzione)"
ms.assetid: 2b4bea5e-e64e-45fa-9afc-88a2e4b82cfc
caps.latest.revision: 14
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mm_stream_sd
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Scrive i dati a 64 bit in una posizione di memoria senza inquinare le cache.  
  
## Sintassi  
  
```  
void _mm_stream_sd(  
   double * Dest,  
   __m128d Source  
);  
```  
  
#### Parametri  
 \[out\]`Dest`  
 Un puntatore alla posizione in cui i dati di origine verranno scritti.  
  
 \[in\] `Source`  
 Un valore di 128 bit che contiene il valore di `double` da scrivere nei bit della parte inferiore 64.  
  
## Valore restituito  
 Nessuno.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_mm_stream_sd`|SSE4a|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca genera l'istruzione di `movntsd`.  Per determinare il supporto hardware in questa istruzione, chiamare la funzione intrinseca di `__cpuid` con `InfoType=0x80000001` e il bit di controllo, 6 di `CPUInfo[2] (ECX)`.  Questo bit è altrimenti 1 se l'hardware supporta questa istruzione e 0.  
  
 Se si esegue il codice che utilizza la funzione intrinseca di `_mm_stream_sd` sull'hardware che non supporta l'istruzione di `movntsd` , i risultati sono imprevedibili.  
  
## Esempio  
  
```  
// Compile this sample with: /EHsc  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
int main()  
{  
    __m128d vals;  
    double d[2];  
  
    d[0] = -1.;  
    d[1] = -2.;  
    vals.m128d_f64[0] = 0.;  
    vals.m128d_f64[1] = 1.;  
    _mm_stream_sd(&d[1], vals);  
    cout << "d[0] = " << d[0] << ", d[1] = " << d[1] << endl;  
}  
  
```  
  
  **d \[0\] \= \-1, d \[1\] \= 1**   
## Microsoft FINALE specifico  
 Copyright 2007 da Advanced Micro Devices, inc tutti i diritti riservati.  Riprodotto con l'autorizzazione di Advanced Micro Devices, inc  
  
## Vedere anche  
 [\_mm\_stream\_ss](../intrinsics/mm-stream-ss.md)   
 [\_mm\_store\_sd](http://msdn.microsoft.com/it-it/8e672d0d-0a96-45b9-a783-392a2457de42)   
 [\_mm\_sfence](http://msdn.microsoft.com/it-it/b6c0d18e-3628-4318-826b-45f66782e870)   
 [Streaming SIMD Extensions that Support the Cache](http://msdn.microsoft.com/it-it/8f03493a-d5f5-4457-892e-0b6540494872)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)