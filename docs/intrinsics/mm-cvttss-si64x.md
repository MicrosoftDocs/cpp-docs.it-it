---
title: _mm_cvttss_si64x | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _mm_cvttss_si64x
dev_langs:
- C++
helpviewer_keywords:
- _mm_cvttss_si64x intrinsic
- cvttss2si instruction
ms.assetid: f9a3fd07-5bd8-4758-8744-6315c082cf87
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0d1d3e77dfc89fb67c467582c0ed7981ffae8022
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45706342"
---
# <a name="mmcvttsssi64x"></a>_mm_cvttss_si64x
**Sezione specifica Microsoft**  
  
 Genera x64 estesi versione di Convert con numero a virgola mobile a precisione singola troncamento in numero intero a 64 bit (`cvttss2si`) (istruzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
__int64 _mm_cvttss_si64x(   
   __m128 value   
);  
```  
  
#### <a name="parameters"></a>Parametri  
*valore*<br/>
[in] Un `__m128` struttura che contiene i valori a virgola mobile a precisione singola.  
  
## <a name="return-value"></a>Valore restituito  
 Il risultato della conversione del primo valore a virgola mobile a un integer a 64 bit.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_mm_cvttss_si64x`|X64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 La funzione intrinseca è diverso da `_mm_cvtss_si64x` solo in quanto le conversioni inesatte vengano troncate verso lo zero. Poiché il `__m128` struttura rappresenta un registro XMM, l'istruzione generata Sposta i dati da un registro XMM nella memoria di sistema.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
101  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__m128](../cpp/m128.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)