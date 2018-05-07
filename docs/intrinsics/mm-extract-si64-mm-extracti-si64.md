---
title: _mm_extract_si64, _mm_extracti_si64 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _mm_extracti_si64
- _mm_extract_si64
dev_langs:
- C++
helpviewer_keywords:
- extrq instruction
- _mm_extracti_si64 intrinsic
- _mm_extract_si64 intrinsic
ms.assetid: 459fdd72-cc54-4ee5-bbd5-d2c6067a88e7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a8ba4986abf097a5827d3db7f93dbbd0a9640862
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mmextractsi64-mmextractisi64"></a>_mm_extract_si64, _mm_extracti_si64
**Sezione specifica Microsoft**  
  
 Genera il `extrq` istruzione per l'estrazione di bit specificati dai 64 bit bassi del primo argomento.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 [in] `Source`  
 Campo con dati di input nei relativi 64 bit inferiore a 128 bit.  
  
 [in]  `Descriptor`  
 Un campo a 128 bit che descrive il campo di bit per estrarre.  
  
 [in]  `Length`  
 Valore intero che specifica la lunghezza del campo da estrarre.  
  
 [in]  `Index`  
 Valore intero che specifica l'indice del campo da estrarre  
  
## <a name="return-value"></a>Valore restituito  
 Un campo a 128 bit con il campo estratto il bit meno significativi.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_mm_extract_si64`|SSE4a|  
|`_mm_extracti_si64`|SSE4a|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questo intrinseco genera il `extrq` istruzione per l'estrazione di bit da `Source`. Sono disponibili due versioni di questa funzione intrinseche: `_mm_extracti_si64` corrisponde alla versione immediata e `_mm_extract_si64` è quello non immediato.  Ogni versione estrae da `Source` un campo di bit definito per la lunghezza e l'indice del relativo bit meno significativo. I valori di lunghezza e indice vengono acquisiti mod 64, pertanto sia -1 e 127 vengono interpretati come 63. Se la somma dell'indice (ridotto) e la lunghezza del campo (ridotto) è maggiore di 64, i risultati sono indefiniti. Un valore pari a zero per la lunghezza del campo viene interpretato come 64. Se l'indice di bit e di lunghezza di campo è entrambi pari a zero, 63:0 bit di `Source` vengono estratti. Se la lunghezza del campo è uguale a zero, ma l'indice di bit è diverso da zero, i risultati sono indefiniti.  
  
 In una chiamata a _mm_extract_si64, il `Descriptor` contiene l'indice 13:8 bit e la lunghezza del campo dei dati da estrarre in bit 5:0...  
  
 Se si chiama `_mm_extracti_si64` con argomenti che il compilatore non può determinare essere costanti integer, il compilatore genera codice per comprimere i valori in un registro XMM (`Descriptor`) e di chiamare `_mm_extract_si64`.  
  
 Per determinare il supporto hardware per il `extrq` istruzione, chiamate di `__cpuid` intrinseco con `InfoType=0x80000001` e i bit di controllo 6 di `CPUInfo[2] (ECX)`. Questo bit sarà 1 se l'istruzione è supportata e 0 in caso contrario. Se si esegue codice che utilizza questo hardware intrinseco che non supporta il `extrq` (istruzione), i risultati sono imprevedibili.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
result1 = 0x30eca86  
result2 = 0x30eca86  
result3 = 0x30eca86  
```  
  
**Fine sezione specifica Microsoft**  
 Copyright 2007 dispositivi Micro avanzate, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.  
  
## <a name="see-also"></a>Vedere anche  
 [_mm_insert_si64, _mm_inserti_si64](../intrinsics/mm-insert-si64-mm-inserti-si64.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)