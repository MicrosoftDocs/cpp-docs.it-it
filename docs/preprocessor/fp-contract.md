---
title: fp_contract
ms.date: 03/12/2018
f1_keywords:
- vc-pragma.fp_contract
- fp_contract_CPP
helpviewer_keywords:
- pragmas, fp_contract
- fp_contract pragma
ms.assetid: 15b97338-6680-4287-ba2a-2dccc5b2ccf5
ms.openlocfilehash: 14c3ac60d4fc0f45fcf0ece6c3f73153e5de4271
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50476505"
---
# <a name="fpcontract"></a>fp_contract

Determina se contrazione a virgola mobile viene eseguita. Una contrazione a virgola mobile è un'istruzione, ad esempio FMA (considerati-aggiunta multipla) che combina due distinti operazioni a virgola mobile in una singola istruzione. L'uso di queste istruzioni può influire sulla precisione a virgola mobile, in quanto anziché dopo ogni operazione di arrotondamento, il processore può arrotondare una sola volta dopo entrambe le operazioni.

## <a name="syntax"></a>Sintassi

> **fp_contract #pragma (** { **sul** | **off** } **)**

## <a name="remarks"></a>Note

Per impostazione predefinita **fp_contract** viene **su**. Ciò indica al compilatore di usare le istruzioni contrazione a virgola mobile, laddove possibile. Impostare **fp_contract** al **off** per mantenere le singole istruzioni a virgola mobile.

Per altre informazioni sul comportamento della virgola mobile, vedere [/fp (specifica il comportamento della virgola mobile)](../build/reference/fp-specify-floating-point-behavior.md).

Altri pragma a virgola mobile sono i seguenti:

- [fenv_access](../preprocessor/fenv-access.md)

- [float_control](../preprocessor/float-control.md)

## <a name="example"></a>Esempio

Il codice generato da questo esempio non usa un'istruzione fused multiply-aggiunta anche quando è disponibile nel processore di destinazione. Commento `#pragma fp_contract (off)`, il codice generato potrebbe usare un'istruzione fused multiply-aggiunta, se disponibile.

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
