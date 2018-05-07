---
title: __rdtsc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __rdtsc
dev_langs:
- C++
helpviewer_keywords:
- __rdtsc intrinsic
- rdtsc instruction
- Read Time Stamp Counter instruction
ms.assetid: e31d0e51-c9bb-42ca-bbe9-a81ffe662387
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 81b47a76b3045465d8c3c5c21a87020ee1e74a69
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="rdtsc"></a>__rdtsc
**Sezione specifica Microsoft**  
  
 Genera il `rdtsc` (istruzione), che restituisce il timestamp del processore. Il timestamp processore registra il numero di cicli di clock dall'ultimo ripristino.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned __int64 __rdtsc();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Intero senza segno a 64 bit che rappresenta un conteggio di tick.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__rdtsc`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa routine è disponibile solo come funzione intrinseca.  
  
 L'interpretazione del valore TSC in questa generazione di hardware è diverso da quello nelle versioni precedenti di [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]. Manuali dell'hardware per altre informazioni, vedere.  
  
## <a name="example"></a>Esempio  
  
```  
// rdtsc.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__rdtsc)  
  
int main()  
{  
    unsigned __int64 i;  
    i = __rdtsc();  
    printf_s("%I64d ticks\n", i);  
}  
```  
  
```Output  
3363423610155519 ticks  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)