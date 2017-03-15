---
title: "_mm_stream_si64x | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mm_stream_si64x"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "movnti (istruzione)"
  - "_mm_stream_si64x (funzione intrinseca)"
ms.assetid: 114c2cd0-085f-41aa-846e-87bdd56c9ee7
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _mm_stream_si64x
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera l'istruzione di MOVNTI.  Scrive i dati in `Source` a una posizione di memoria specificata da `Dest`, senza inquinare le cache.  
  
## Sintassi  
  
```  
void _mm_stream_si64x(   
   __int64 * Dest,   
   __int64 Source   
);  
```  
  
#### Parametri  
 \[out\] `Dest`  
 Un puntatore alla posizione per scrivere i dati di origine su.  
  
 \[in\] `Source`  
 i dati da scrivere.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_mm_stream_si64x`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa procedura è disponibile solo come intrinseci.  
  
## Esempio  
  
```  
// _mm_stream_si64x.c  
// processor: x64  
  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_mm_stream_si64x)  
  
int main()  
{  
    __int64 val = 0xFFFFFFFFFFFFI64;  
    __int64 a[10];  
  
    memset(a, 0, sizeof(a));  
    _mm_stream_si64x(a+1, val);  
    printf_s( "%I64x %I64x %I64x %I64x", a[0], a[1], a[2], a[3]);   
}  
```  
  
  **0 ffffffffffff 0 0**   
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Cache Support for Streaming SIMD Extensions 2 Integer Operations](http://msdn.microsoft.com/it-it/a9c9b42f-de9e-4374-aeb6-5f65bfb669b6)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)