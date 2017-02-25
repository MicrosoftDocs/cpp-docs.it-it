---
title: "_mm_insert_si64, _mm_inserti_si64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mm_inserti_si64"
  - "_mm_insert_si64"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "insertq (istruzione)"
  - "_mm_insert_si64 (funzione intrinseca)"
  - "_mm_inserti_si64 (funzione intrinseca)"
ms.assetid: 897a4b36-8b08-4b00-a18f-7850f5732d7d
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _mm_insert_si64, _mm_inserti_si64
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera l'istruzione di `insertq` inserire i bit dal secondo operando nel primo operando.  
  
## Sintassi  
  
```  
__m128i _mm_insert_si64(  
   __m128i Source1,  
   __m128i Source2  
);  
__m128i _mm_inserti_si64(  
   __m128i Source1,  
   __m128i Source2  
   int Length,  
   int Index  
);  
```  
  
#### Parametri  
 \[in\]`Source1`  
 Un campo di bit 128 con i dati di input nei 64 bit meno significativi in cui un campo verrà inserito.  
  
 \[in\] `Source2`  
 Un campo di bit 128 con dati da inserire nei bit meno significativi.  Per `_mm_insert_si64`, contiene anche un descrittore di campo nei bit significativi.  
  
 \[in\] `Length`  
 Una costante Integer che specifica la durata del campo per inserire.  
  
 \[in\] `Index`  
 Una costante intero che specifica l'indice di bit meno significativi del campo in cui i dati verranno inseriti.  
  
## Valore restituito  
 Un campo di bit 128 dei 64 bit meno significativi contengono i bit originali di almeno 64 di `Source1` con il campo di bit specificato ha sostituito dai bit meno significativi di `Source2`.  I 64 bit superiore del valore restituito sono definiti.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_mm_insert_si64`|SSE4a|  
|`_mm_inserti_si64`|SSE4a|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca genera l'istruzione di `insertq` inserire i bit da `Source2` in `Source1`.  Esistono due versioni di questa funzione intrinseca: `_mm_inserti_si64`, è la versione e immediata `_mm_insert_si64` è quello non immediato.  Ogni versione estrae un campo di bit di lunghezza specificata da Source2 e lo inserisce in Source1.  i bit estratti sono i bit meno significativi di Source2.  Il campo Source1 in cui questi bit verranno inseriti viene definito dalla lunghezza e all'indice del bit meno significativi.  I valori della lunghezza e l'indice derivano il MOD 64, pertanto è \-1 e 127 vengono interpretati come 63.  Se la somma di lunghezza \(una\) \(una\) indice e del campo di bit è maggiore di 64, i risultati vengono definiti.  Un valore zero per la lunghezza del campo viene interpretato come 64.  Se l'indice di lunghezza e di bit di campo sono entrambi lo zero, il 63:0 di bit di `Source2` viene inserito in `Source1`.  Se la lunghezza del campo è zero ma l'indice del bit è diverso da zero, i risultati vengono definiti.  
  
 In una chiamata a \_mm\_insert\_si64, la lunghezza del campo è contenuta nelle 77:72 di bit di Source2 e nell'indice nelle 69:64 di bit.  
  
 Se si chiama `_mm_inserti_si64`con gli argomenti che il compilatore non può determinare per essere costanti Integer, il compilatore genera codice per comprimere tali valori in un log XMM e chiamare `_mm_insert_si64`.  
  
 Per determinare il supporto hardware all'istruzione di `insertq` chiamare la funzione intrinseca di `__cpuid` con `InfoType=0x80000001` e il bit di controllo, 6 di `CPUInfo[2] (ECX)`.  Questo bit è altrimenti 1 se l'istruzione è supportata e 0.  Se si esegue il codice che utilizza questa funzione intrinseca sull'hardware che non supporta l'istruzione di `insertq` , i risultati sono imprevedibili.  
  
## Esempio  
  
```  
// Compile this sample with: /EHsc  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
union {  
    __m128i m;  
    unsigned __int64 ui64[2];  
} source1, source2, source3, result1, result2, result3;  
  
int  
main()  
{  
  
    __int64 mask;  
  
    source1.ui64[0] = 0xffffffffffffffffll;  
    source2.ui64[0] = 0xfedcba9876543210ll;  
    source2.ui64[1] = 0xc10;  
    source3.ui64[0] = source2.ui64[0];  
  
    result1.m = _mm_insert_si64 (source1.m, source2.m);  
    result2.m = _mm_inserti_si64(source1.m, source3.m, 16, 12);  
    mask = 0xffff << 12;  
    mask = ~mask;  
    result3.ui64[0] = (source1.ui64[0] & mask) |  
                      ((source2.ui64[0] & 0xffff) << 12);  
  
    cout << hex << "result1 = 0x" << result1.ui64[0] << endl;  
    cout << "result2 = 0x" << result2.ui64[0] << endl;  
    cout << "result3 = 0x" << result3.ui64[0] << endl;  
  
}  
```  
  
  **result1 \= 0xfffffffff3210fff result2 \= 0xfffffffff3210fff result3 \= 0xfffffffff3210fff**   
## Microsoft FINALE specifico  
 Copyright 2007 da Advanced Micro Devices, inc tutti i diritti riservati.  Riprodotto con l'autorizzazione di Advanced Micro Devices, inc  
  
## Vedere anche  
 [\_mm\_extract\_si64, \_mm\_extracti\_si64](../intrinsics/mm-extract-si64-mm-extracti-si64.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)