---
title: "_mm_cvttss_si64x | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mm_cvttss_si64x"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_mm_cvttss_si64x (funzione intrinseca)"
  - "cvttss2si (istruzione)"
ms.assetid: f9a3fd07-5bd8-4758-8744-6315c082cf87
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _mm_cvttss_si64x
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera la versione estesa x64 convert con il numero a virgola mobile a precisione singola del troncamento l'istruzione integer a 64 bit \(`cvttss2si`\).  
  
## Sintassi  
  
```  
__int64 _mm_cvttss_si64x(   
   __m128 value   
);  
```  
  
#### Parametri  
 \[in\] `value`  
 Una struttura di `__m128` che contiene i valori a virgola mobile e precisione singola.  
  
## Valore restituito  
 Il risultato della conversione del primo valore a virgola mobile a un intero a 64 bit.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_mm_cvttss_si64x`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 La funzione intrinseca differisce solo da `_mm_cvtss_si64x` in quanto le conversioni imprecise vengono troncate a zero.  Poiché la struttura di `__m128` rappresenta un log XMM, l'istruzione generata sposta i dati da un log XMM nella memoria di sistema.  
  
 Questa procedura è disponibile solo come intrinseci.  
  
## Esempio  
  
```  
// _mm_cvttss_si64x.cpp  
// processor: x64  
#include <intrin.h>  
#include <stdio.h>  
  
#pragma intrinsic(_mm_cvttss_si64x)  
  
int main()  
{  
    __m128 a;  
    __int64 b = 54;  
  
    // _mm_load_ps requires an aligned buffer.  
    __declspec(align(16)) float af[4] = { 101.5, 200.75,  
                                          300.5, 400.5 };  
  
    // Load a with the floating point values.  
    // The values will be copied to the XMM registers.  
    a = _mm_load_ps(af);  
  
    // Extract the first element of a and convert to an integer  
    b = _mm_cvttss_si64x(a);  
  
    printf_s("%I64d\n", b);  
}  
```  
  
  **101**   
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_m128](../cpp/m128.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)