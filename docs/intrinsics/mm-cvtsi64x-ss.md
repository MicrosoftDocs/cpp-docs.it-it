---
title: _mm_cvtsi64x_ss | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: _mm_cvtsi64x_ss
dev_langs: C++
helpviewer_keywords:
- cvtsi2ss instruction
- _mm_cvtsi64x_ss intrinsic
ms.assetid: 01e5d321-c18a-46fd-a6f6-324364514e1f
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a567b33e55092e7e8e0361faa0ce54b2498827a2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mmcvtsi64xss"></a>_mm_cvtsi64x_ss
**Sezione specifica Microsoft**  
  
 Genera il [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] versione estesa dell'intero convertire a 64 Bit di valore a virgola mobile a precisione singola scalare (`cvtsi2ss`) (istruzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
__m128 _mm_cvtsi64x_ss(   
   __m128 a,   
   __int64 b   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `a`  
 Un `__m128` struttura che contiene quattro valori a virgola mobile a precisione singola.  
  
 [in] `b`  
 Intero a 64 bit da convertire in un valore a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 Un `__m128` struttura il cui primo valore a virgola mobile è il risultato della conversione. Gli altri tre valori verranno copiati così da `a`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_mm_cvtsi64x_ss`|X64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il `__m128` struttura rappresenta un registro XMM, pertanto questa funzione intrinseca consente un valore `b` dalla memoria di sistema per essere spostati in un XMM registrare.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## <a name="example"></a>Esempio  
  
```  
// _mm_cvtsi64x_ss.cpp  
// processor: x64  
  
#include <intrin.h>  
#include <stdio.h>  
  
#pragma intrinsic(_mm_cvtsi64x_ss)  
  
int main()  
{  
    __m128 a;  
    __int64 b = 54;  
  
    a.m128_f32[0] = 0;  
    a.m128_f32[1] = 0;  
    a.m128_f32[2] = 0;  
    a.m128_f32[3] = 0;  
    a = _mm_cvtsi64x_ss(a, b);  
  
    printf_s( "%lf %lf %lf %lf\n",  
              a.m128_f32[0], a.m128_f32[1],   
              a.m128_f32[2], a.m128_f32[3] );  
}  
```  
  
```Output  
54.000000 0.000000 0.000000 0.000000  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [m128](../cpp/m128.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)