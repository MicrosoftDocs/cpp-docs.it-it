---
title: "_mm_extract_si64, _mm_extracti_si64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mm_extracti_si64"
  - "_mm_extract_si64"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extrq (istruzione)"
  - "_mm_extracti_si64 (funzione intrinseca)"
  - "_mm_extract_si64 (funzione intrinseca)"
ms.assetid: 459fdd72-cc54-4ee5-bbd5-d2c6067a88e7
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _mm_extract_si64, _mm_extracti_si64
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera l'istruzione di `extrq` estrarre i bit specificati dai bit di almeno 64 del primo argomento.  
  
## Sintassi  
  
```  
__m128i _mm_extract_si64(  
   __m128i Source,  
   __m128i Descriptor  
);  
__m128i _mm_extracti_si64(  
   __m128i Source,  
   int Length,  
   int Index  
);  
```  
  
#### Parametri  
 \[in\]`Source`  
 Un campo di bit 128 con i dati di input nei 64 bit meno significativi.  
  
 \[in\] `Descriptor`  
 Un campo di bit 128 che descrive il campo di bit per estrarre.  
  
 \[in\] `Length`  
 Un intero che specifica la lunghezza del campo per disegnare.  
  
 \[in\] `Index`  
 Un intero che specifica l'indice del campo per estrarre  
  
## Valore restituito  
 Un campo di bit 128 con il campo estratto nei bit meno significativi.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_mm_extract_si64`|SSE4a|  
|`_mm_extracti_si64`|SSE4a|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca genera l'istruzione di `extrq` estrarre i bit da `Source`. Esistono due versioni di questa funzione intrinseca: `_mm_extracti_si64` è la versione e immediata `_mm_extract_si64` è quello non immediato.  Ogni versione vengono estratti da `Source` un campo di bit definito dalla lunghezza e all'indice del bit meno significativi.  I valori della lunghezza e l'indice derivano il MOD 64, pertanto è \-1 e 127 vengono interpretati come 63.  Se la somma della lunghezza una \(una\) di campo \(\) e l'indice è maggiore di 64, i risultati vengono definiti.  Un valore zero per la lunghezza del campo viene interpretato come 64.  Se l'indice di lunghezza e di bit di campo sono entrambi lo zero, il 63:0 di bit di `Source` è stato estratto.  Se la lunghezza del campo è zero ma l'indice del bit è diverso da zero, i risultati vengono definiti.  
  
 In una chiamata a \_mm\_extract\_si64, `Descriptor` contiene l'indice in il 13:8 dei bit e nella lunghezza del campo dati da estrarre in il 5:0 di bit.  
  
 Se si chiama `_mm_extracti_si64` con gli argomenti che il compilatore non può determinare per essere costanti Integer il compilatore genera codice per comprimere tali valori in un log XMM \(`Descriptor`\) e chiamare `_mm_extract_si64`.  
  
 Per determinare il supporto hardware all'istruzione di `extrq` , chiamare la funzione intrinseca di `__cpuid` con `InfoType=0x80000001` e il bit di controllo, 6 di `CPUInfo[2] (ECX)`.  Questo bit è altrimenti 1 se l'istruzione è supportata e 0.  Se si esegue il codice che utilizza questo hardware intrinseco che non supporta l'istruzione di `extrq` , i risultati sono imprevedibili.  
  
## Esempio  
  
```  
// Compile this sample with: /EHsc  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
union {  
    __m128i m;  
    unsigned __int64 ui64[2];  
} source, descriptor, result1, result2, result3;  
  
int  
main()  
{  
    source.ui64[0] =     0xfedcba9876543210ll;  
    descriptor.ui64[0] = 0x0000000000000b1bll;  
  
    result1.m = _mm_extract_si64 (source.m, descriptor.m);  
    result2.m = _mm_extracti_si64(source.m, 27, 11);  
    result3.ui64[0] = (source.ui64[0] >> 11) & 0x7ffffff;  
  
    cout << hex << "result1 = 0x" << result1.ui64[0] << endl;  
    cout << "result2 = 0x" << result2.ui64[0] << endl;  
    cout << "result3 = 0x" << result3.ui64[0] << endl;  
}  
```  
  
  **result1 \= 0x30eca86 result2 \= 0x30eca86 result3 \= 0x30eca86**   
## Microsoft FINALE specifico  
 Copyright 2007 da Advanced Micro Devices, inc tutti i diritti riservati.  Riprodotto con l'autorizzazione di Advanced Micro Devices, inc  
  
## Vedere anche  
 [\_mm\_insert\_si64, \_mm\_inserti\_si64](../intrinsics/mm-insert-si64-mm-inserti-si64.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)