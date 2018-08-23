---
title: _umul128 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __umul128
dev_langs:
- C++
helpviewer_keywords:
- __umul128 intrinsic
ms.assetid: 13684df3-3ac7-467c-b258-a0e93bc490b5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e996a83cfc2a79d4bf5cc458ccc5bdd586355b64
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42540615"
---
# <a name="umul128"></a>_umul128
**Sezione specifica Microsoft**  
  
 Moltiplica due valori integer a 64 bit passati come i primi due argomenti e inserisce i 64 bit alti del prodotto nel valore integer a 64 bit a cui punta `HighProduct` e restituisce i 64 bit bassi del prodotto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned __int64 _umul128(   
   unsigned __int64 Multiplier,   
   unsigned __int64 Multiplicand,   
   unsigned __int64 *HighProduct   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `Multiplier`  
 Primo valore Integer a 64 bit da moltiplicare.  
  
 [in] `Multiplicand`  
 Secondo valore Integer a 64 bit da moltiplicare.  
  
 [out] `HighProduct`  
 64 bit alti del prodotto.  
  
## <a name="return-value"></a>Valore restituito  
 64 bit bassi del prodotto.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|---------------|------------------|------------|  
|`_umul128`|ARM, x64|\<intrin.h>|  
  
## <a name="example"></a>Esempio  
  
```  
// umul128.c  
// processor: IPF, x64  
  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_umul128)  
  
int main()  
{  
    unsigned __int64 a = 0x0fffffffffffffffI64;  
    unsigned __int64 b = 0xf0000000I64;  
    unsigned __int64 c, d;  
  
    d = _umul128(a, b, &c);  
  
    printf_s("%#I64x * %#I64x = %#I64x%I64x\n", a, b, c, d);  
}  
```  
  
```Output  
0xfffffffffffffff * 0xf0000000 = 0xeffffffffffffff10000000  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)