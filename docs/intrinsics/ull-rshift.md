---
title: __ull_rshift | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __ull_rshift
dev_langs:
- C++
helpviewer_keywords:
- ull_rshift intrinsic
- __ull_rshift intrinsic
ms.assetid: b7ff5254-3540-4e6e-b57c-a6c4beb7dca2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9ad07e225afbfe0c69b5115cfb566ef722eb81e3
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45722663"
---
# <a name="ullrshift"></a>__ull_rshift
**Sezione specifica Microsoft**  
  
 in x64, sposta un valore a 64 bit specificato dal primo parametro a destra di un numero di bit specificato dal secondo parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned __int64 __ull_rshift(   
   unsigned __int64 mask,    
   int nBit   
);  
```  
  
#### <a name="parameters"></a>Parametri  
*Maschera*<br/>
[in] Valore intero a 64 bit da spostare a destra.  
  
*sillaba nBit*<br/>
[in] Il numero di bit da spostare, modulo 32 su x86 e modulo 64 in x64.  
  
## <a name="return-value"></a>Valore restituito  
 La maschera spostato `nBit` bits.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__ull_rshift`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Se il secondo parametro è maggiore di 31 su x86 (63 su x64), tale numero viene acquisito modulo 32 (64 su x64) per determinare il numero di bit da spostare. Il `ull` nel nome indica `unsigned long long (unsigned __int64)`.  
  
## <a name="example"></a>Esempio  
  
```  
// ull_rshift.cpp  
// compile with: /EHsc  
// processor: x86, x64  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
#pragma intrinsic(__ull_rshift)  
  
int main()  
{  
   unsigned __int64 mask = 0x100;  
   int nBit = 8;  
   mask = __ull_rshift(mask, nBit);  
   cout << hex << mask << endl;  
}  
```  
  
## <a name="output"></a>Output  
  
```  
1  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__ll_lshift](../intrinsics/ll-lshift.md)   
 [__ll_rshift](../intrinsics/ll-rshift.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)