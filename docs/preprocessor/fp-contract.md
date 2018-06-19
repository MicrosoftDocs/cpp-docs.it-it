---
title: fp_contract | Microsoft Docs
ms.custom: ''
ms.date: 03/12/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.fp_contract
- fp_contract_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, fp_contract
- fp_contract pragma
ms.assetid: 15b97338-6680-4287-ba2a-2dccc5b2ccf5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 514b4708129d625ea7880e4c61be22c4b1ac2db5
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33912888"
---
# <a name="fpcontract"></a>fp_contract

Determina se contrazione a virgola mobile viene eseguita. Una contrazione a virgola mobile è un'istruzione, ad esempio FMA (considerati-Multiply-Add) che combina due separato operazioni a virgola mobile in una singola istruzione. Utilizzo di queste istruzioni può influire sulla precisione a virgola mobile, perché anziché arrotondamento dopo ogni operazione, il processore può arrotondare una sola volta dopo entrambe le operazioni.

## <a name="syntax"></a>Sintassi

> **fp_contract #pragma (** { **sul** | **off** } **)**  

## <a name="remarks"></a>Note  

Per impostazione predefinita **fp_contract** viene **su**. Ciò indica al compilatore di usare istruzioni contrazione a virgola mobile, laddove possibile. Impostare **fp_contract** alla **off** per mantenere le singole istruzioni a virgola mobile.

Per ulteriori informazioni sul comportamento della virgola mobile, vedere [/fp (specifica il comportamento a virgola mobile)](../build/reference/fp-specify-floating-point-behavior.md).

Altri pragma a virgola mobile sono i seguenti:

- [fenv_access](../preprocessor/fenv-access.md)

- [float_control](../preprocessor/float-control.md)

## <a name="example"></a>Esempio

Il codice generato da questo esempio non utilizza un'istruzione di istruzione fused multiply-aggiunta anche quando è disponibile nel processore di destinazione. Se impostare come commento `#pragma fp_contract (off)`, il codice generato potrebbe usare un'istruzione di istruzione fused multiply-aggiunta se è disponibile.  
  
```cpp
// pragma_directive_fp_contract.cpp
// on x86 and x64 compile with: /O2 /fp:fast /arch:AVX2
// other platforms compile with: /O2

#include <stdio.h>

// remove the following line to enable FP contractions
#pragma fp_contract (off)

int main() {
   double z, b, t;

   for (int i = 0; i < 10; i++) {
      b = i * 5.5;
      t = i * 56.025;

      z = t * i + b;
      printf("out = %.15e\n", z);
   }
}
```

```Output
out = 0.000000000000000e+00
out = 6.152500000000000e+01
out = 2.351000000000000e+02
out = 5.207249999999999e+02
out = 9.184000000000000e+02
out = 1.428125000000000e+03
out = 2.049900000000000e+03
out = 2.783725000000000e+03
out = 3.629600000000000e+03
out = 4.587525000000000e+03
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
