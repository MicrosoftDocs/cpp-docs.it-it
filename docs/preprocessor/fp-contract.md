---
description: 'Altre informazioni su: fp_contract pragma'
title: Pragma fp_contract
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.fp_contract
- fp_contract_CPP
helpviewer_keywords:
- pragmas, fp_contract
- fp_contract pragma
ms.assetid: 15b97338-6680-4287-ba2a-2dccc5b2ccf5
ms.openlocfilehash: cefcf0519f08b3fd68a0f8b464938ea7cdbda6d0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261177"
---
# <a name="fp_contract-pragma"></a>Pragma fp_contract

Determina se si verifica la contrazione a virgola mobile. Una contrazione a virgola mobile è un'istruzione, ad esempio FMA (fuse-multiply-add) che combina due operazioni a virgola mobile separate in un'unica istruzione. L'uso di queste istruzioni può influire sulla precisione a virgola mobile, perché anziché arrotondare dopo ogni operazione, il processore può arrotondare solo una volta dopo entrambe le operazioni.

## <a name="syntax"></a>Sintassi

> **#pragma fp_contract (** { **on**  |  **off** } **)**

## <a name="remarks"></a>Commenti

Per impostazione predefinita, **fp_contract** è **on**. Ciò indica al compilatore di usare le istruzioni di contratto a virgola mobile laddove possibile. Impostare **fp_contract** su **off** per mantenere le singole istruzioni a virgola mobile.

Per ulteriori informazioni sul comportamento della virgola mobile, vedere [/FP (specifica il comportamento di Floating-Point)](../build/reference/fp-specify-floating-point-behavior.md).

Altri pragma a virgola mobile sono i seguenti:

- [fenv_access](../preprocessor/fenv-access.md)

- [float_control](../preprocessor/float-control.md)

## <a name="example"></a>Esempio

Il codice generato da questo esempio non usa un'istruzione di aggiunta-moltiplicazione con fusione anche quando è disponibile nel processore di destinazione. Se si `#pragma fp_contract (off)` Imposta come commento, il codice generato può utilizzare un'istruzione di moltiplicazione (aggiunta) fusa se disponibile.

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

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
