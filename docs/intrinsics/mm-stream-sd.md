---
title: _mm_stream_sd | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _mm_stream_sd
dev_langs:
- C++
helpviewer_keywords:
- _mm_stream_sd intrinsic
- movntsd instruction
ms.assetid: 2b4bea5e-e64e-45fa-9afc-88a2e4b82cfc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3e8a65066ad19b78319867782255d70da8d5b721
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mmstreamsd"></a>_mm_stream_sd
**Sezione specifica Microsoft**  
  
 Scrive dati a 64 bit in una posizione di memoria senza accedere le cache.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _mm_stream_sd(  
   double * Dest,  
   __m128d Source  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `Dest`  
 Un puntatore alla posizione in cui verranno scritti i dati di origine.  
  
 [in] `Source`  
 Un valore a 128 bit contenente il `double` valore deve essere scritto in inferiore 64 bit...  
  
## <a name="return-value"></a>Valore restituito  
 Nessuno.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_mm_stream_sd`|SSE4a|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questo intrinseco genera il `movntsd` istruzione. Per determinare il supporto hardware per questa istruzione, chiamare il `__cpuid` intrinseco con `InfoType=0x80000001` e i bit di controllo 6 di `CPUInfo[2] (ECX)`. Se l'hardware supporta questa istruzione e 0 in caso contrario, questo bit è 1.  
  
 Se si esegue il codice che utilizza il `_mm_stream_sd` intrinseci su hardware che non supporta il `movntsd` (istruzione), i risultati sono imprevedibili.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
d[0] = -1, d[1] = 1  
```  
  
**Fine sezione specifica Microsoft**  
 Copyright 2007 dispositivi Micro avanzate, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.  
  
## <a name="see-also"></a>Vedere anche  
 [_mm_stream_ss](../intrinsics/mm-stream-ss.md)   
 [_mm_store_sd](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_store_sd)   
 [_mm_sfence](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_sfence)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)