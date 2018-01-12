---
title: __ull_rshift | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __ull_rshift
dev_langs: C++
helpviewer_keywords:
- ull_rshift intrinsic
- __ull_rshift intrinsic
ms.assetid: b7ff5254-3540-4e6e-b57c-a6c4beb7dca2
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c0951a930ad5baec5b293aee0fe8e70c0a38a12f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ullrshift"></a>__ull_rshift
**Sezione specifica Microsoft**  
  
 su x64, sposta un valore a 64 bit specificato dal primo parametro a destra di un numero di bit specificati dal secondo parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned __int64 __ull_rshift(   
   unsigned __int64 mask,    
   int nBit   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `mask`  
 Valore integer a 64 bit da spostare a destra.  
  
 [in] `nBit`  
 Il numero di bit da spostare, modulo 32 x86 e modulo 64 in x64.  
  
## <a name="return-value"></a>Valore restituito  
 Spostata la maschera `nBit` bits.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__ull_rshift`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Se il secondo parametro è maggiore di 31 su x86 (63 su x64), tale numero viene eseguito modulo 32 (64 su x64) per determinare il numero di bit da spostare. Il `ull` indica il nome `unsigned long long (unsigned __int64)`.  
  
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