---
title: "_mm_cvtss_si64x | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mm_cvtss_si64x"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cvtss2si (funzione intrinseca)"
  - "_mm_cvtss_si64x (funzione intrinseca)"
ms.assetid: c279aff2-ee29-4271-8829-3ec691bf7718
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _mm_cvtss_si64x
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera la versione estesa di [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] di numeri a virgola mobile scalare di una singola precisione dell'istruzione integer a 64 bit \(`cvtss2si`\).  
  
## Sintassi  
  
```  
__int64 _mm_cvtss_si64x(   
   __m128 value   
);  
```  
  
#### Parametri  
 \[in\] `value`  
 Una struttura di `__m128` che contiene i valori a virgola mobile.  
  
## Valore restituito  
 Un Integer a 64 bit, il risultato della conversione del primo valore a virgola mobile a un Integer.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_mm_cvtss_si64x`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Il primo elemento del valore della struttura viene convertito in un Integer e viene restituito.  I bit di arrotondamento del controllo in MXCSR vengono utilizzati per determinare il comportamento di arrotondamento.  La modalità di arrotondamento predefinita è in tondo il più vicino, mediante arrotondamento al numero pari se la parte decimale è 0,5.  Poiché la struttura di `__m128` rappresenta un log XMM, questa funzione intrinseca accetta un valore dal registro XMM e lo scrive nella memoria di sistema.  
  
 Questa procedura è disponibile solo come intrinseci.  
  
## Esempio  
  
```  
// _mm_cvtss_si64x.cpp  
// processor: x64  
#include <intrin.h>  
#include <stdio.h>  
  
#pragma intrinsic(_mm_cvtss_si64x)  
  
int main()  
{  
    __m128 a;  
    __int64 b = 54;  
  
    // _mm_load_ps requires an aligned buffer.  
    __declspec(align(16)) float af[4] =  
                           { 101.25, 200.75, 300.5, 400.5 };  
  
    // Load a with the floating point values.  
    // The values will be copied to the XMM registers.  
    a = _mm_load_ps(af);  
  
    // Extract the first element of a and convert to an integer  
    b = _mm_cvtss_si64x(a);  
  
    printf_s("%I64d\n", b);  
}  
```  
  
  **101**   
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_m128d](../cpp/m128d.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)