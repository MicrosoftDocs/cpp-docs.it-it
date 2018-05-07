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
ms.openlocfilehash: 665c52fc0dd0645e25d3014cc28f9fdfba344e2d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mmcvtsssi64x"></a>_mm_cvtss_si64x
**Sezione specifica Microsoft**  
  
 Genera il [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] versione estesa di convertire scalare singola precisione numero a virgola mobile a Integer a 64 bit (`cvtss2si`) (istruzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
__int64 _mm_cvtss_si64x(   
   __m128 value   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `value`  
 Un `__m128` struttura che contiene i valori a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 Intero a 64 bit, il risultato della conversione del primo valore a virgola mobile a un numero intero.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_mm_cvtss_si64x`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il primo elemento del valore di struttura viene convertito in un numero intero e restituito. I bit del controllo arrotondamento in MXCSR vengono utilizzati per determinare la modalità di arrotondamento. La modalità predefinita è arrotondamento al più vicino, arrotondamento al numero pari, se la parte decimale è 0,5. Poiché il `__m128` struttura rappresenta un registro XMM, questa funzione intrinseca accetta un valore dal registro XMM e lo scrive in memoria di sistema.  
  
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