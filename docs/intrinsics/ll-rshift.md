---
title: __ll_rshift | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- __ll_rshift_cpp
- __ll_rshift
dev_langs: C++
helpviewer_keywords:
- __ll_rshift intrinsic
- ll_rshift intrinsic
ms.assetid: ef13b732-d122-44a0-add9-f5544a2c4ab2
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c0bb658051a4eab579e2c0d2fbb4d6bd525381b7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="llrshift"></a>__ll_rshift
**Sezione specifica Microsoft**  
  
 Sposta un valore a 64 bit specificato dal primo parametro a destra di un numero di bit specificati dal secondo parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__int64 __ll_rshift(  
   __int64 Mask,  
   int nBit  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `Mask`  
 Valore integer a 64 bit da spostare a destra.  
  
 [in] `nBit`  
 Il numero di bit da spostare, modulo 64 in x64 e modulo 32 x86.  
  
## <a name="return-value"></a>Valore restituito  
 Spostata la maschera `nBit` bits.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__ll_rshift`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Se il secondo parametro è maggiore di 64 su x64 (32 x86), tale numero viene eseguito modulo 64 (32 x86) per determinare il numero di bit da spostare. Il `ll` prefisso indica che si tratta di un'operazione in `long long`, in un altro nome per `__int64`, il tipo integrale con segno a 64 bit.  
  
## <a name="example"></a>Esempio  
  
```  
// ll_rshift.cpp  
// compile with: /EHsc  
// processor: x86, x64  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
#pragma intrinsic(__ll_rshift)  
  
int main()  
{  
   __int64 Mask = - 0x100;  
   int nBit = 4;  
   cout << hex << Mask << endl;  
   cout << " - " << (- Mask) << endl;  
   Mask = __ll_rshift(Mask, nBit);  
   cout << hex << Mask << endl;  
   cout << " - " << (- Mask) << endl;  
}  
```  
  
## <a name="output"></a>Output  
  
```  
ffffffffffffff00  
 - 100  
fffffffffffffff0  
 - 10  
```  
  
 **Nota** se `_ull_rshift` è stato utilizzato, il byte più significativo del valore spostato a destra che sarebbe stata zero, pertanto il risultato desiderato non sarebbe stato ottenuto nel caso di un valore negativo.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__ll_lshift](../intrinsics/ll-lshift.md)   
 [__ull_rshift](../intrinsics/ull-rshift.md)