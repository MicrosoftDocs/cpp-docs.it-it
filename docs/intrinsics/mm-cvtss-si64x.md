---
title: _mm_cvtss_si64x | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _mm_cvtss_si64x
dev_langs:
- C++
helpviewer_keywords:
- cvtss2si intrinsic
- _mm_cvtss_si64x intrinsic
ms.assetid: c279aff2-ee29-4271-8829-3ec691bf7718
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1cba221f0944f840f9cdf76da86ec7ce37f37ca8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713778"
---
# <a name="mmcvtsssi64x"></a>_mm_cvtss_si64x
**Sezione specifica Microsoft**  
  
 Genera l'errore x64 estesi versione del convertire valore scalare singolo precisione numero a virgola mobile a valore Integer a 64 bit (`cvtss2si`) (istruzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
__int64 _mm_cvtss_si64x(   
   __m128 value   
);  
```  
  
#### <a name="parameters"></a>Parametri  
*valore*<br/>
[in] Un `__m128` struttura che contiene i valori a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 Un intero a 64 bit, il risultato della conversione del primo valore a virgola mobile a un integer.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_mm_cvtss_si64x`|X64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il primo elemento del valore della struttura viene convertito in un numero intero e restituito. I bit del controllo arrotondamento nel registro MXCSR vengono utilizzati per determinare la modalità di arrotondamento. Il valore predefinito modalità di arrotondamento è arrotondamento al più vicino, arrotondamento al numero pari se la parte decimale è 0,5. Poiché il `__m128` struttura rappresenta un registro XMM, questa funzione intrinseca accetta un valore dal registro XMM e lo scrive in memoria di sistema.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
101  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__m128d](../cpp/m128d.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)