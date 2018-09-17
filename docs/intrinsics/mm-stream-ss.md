---
title: _mm_stream_ss | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _mm_stream_ss
dev_langs:
- C++
helpviewer_keywords:
- movntss instruction
- _mm_stream_ss intrinsic
ms.assetid: c53dffe9-0dfe-4063-85d3-e8987b870fce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ef5910f47fdf9c058cfb4493c9df486749da18fc
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45714389"
---
# <a name="mmstreamss"></a>_mm_stream_ss  
  
**Sezione specifica Microsoft**  
  
 Scrive i dati a 32 bit in una posizione di memoria senza inquinare le cache.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _mm_stream_ss(  
   float * Dest,  
   __m128 Source  
);  
```  
  
#### <a name="parameters"></a>Parametri  
  
*dest*<br/>
[out] Un puntatore alla posizione in cui vengono scritti i dati di origine.  
  
*Source*<br/>
[in] Un numero a 128 bit che contiene il `float` valore da scrivere in inferiore 32 bit...  
  
## <a name="return-value"></a>Valore restituito  
  
 Nessuno.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_mm_stream_ss`|SSE4a|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
  
Questa funzione intrinseca genera il `movntss` (istruzione). Per determinare il supporto hardware per questa istruzione, chiama il `__cpuid` intrinseco con `InfoType=0x80000001` e controllare bit 6 di `CPUInfo[2] (ECX)`. Questo bit è 1 quando l'istruzione è supportata e 0 in caso contrario.  
  
Se si esegue codice che usa il `_mm_stream_ss` intrinseci su hardware che non supporta il `movntss` (istruzione), i risultati sono imprevedibili.  
  
## <a name="example"></a>Esempio  
  
```cpp  
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
  
```Output  
f[0] = -1, f[1] = -2  
f[2] = -3, f[3] = 3  
```  
  
**Fine sezione specifica Microsoft**  

Copyright 2007 dispositivi Micro avanzate, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.  
  
## <a name="see-also"></a>Vedere anche  
 [_mm_stream_sd](../intrinsics/mm-stream-sd.md)   
 [_mm_stream_ps](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_stream_ps)   
 [_mm_store_ss](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_store_ss)   
 [_mm_sfence](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_sfence)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)