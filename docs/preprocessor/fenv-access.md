---
title: fenv_access | Documenti Microsoft
ms.custom: ''
ms.date: 03/12/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.fenv_access
- fenv_access_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, fenv_access
- fenv_access pragma
ms.assetid: 2ccea292-0ae4-42ce-9c67-cc189299857b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c2f6f379e61ea84c1142bd94be49b55a50b28753
ms.sourcegitcommit: 1ac8f983eeaacd09135a249dea00f10e1c94e0e3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36963323"
---
# <a name="fenvaccess"></a>fenv_access

Disabilita (**sul**) o Abilita (**off**) le ottimizzazioni che potrebbero modificare l'ambiente a virgola mobile e contrassegno i test e cambia la modalità.

## <a name="syntax"></a>Sintassi

> **fenv_access #pragma (** { **sul** | **off** } **)**  

## <a name="remarks"></a>Note

Per impostazione predefinita **fenv_access** viene **off**. Se il compilatore può presupporre che il codice non accedere o modificare l'ambiente a virgola mobile, quindi è possibile eseguire molte delle ottimizzazioni di codice a virgola mobile. Impostare **fenv_access** alla **su** per informare il compilatore che il codice accede all'ambiente a virgola mobile e per verificare i flag di stato, eccezioni, o per impostare il flag della modalità di controllo. Il compilatore Disabilita queste ottimizzazioni in modo che il codice può accedere all'ambiente a virgola mobile in modo coerente. 

Per ulteriori informazioni sul comportamento della virgola mobile, vedere [/fp (specifica il comportamento a virgola mobile)](../build/reference/fp-specify-floating-point-behavior.md).

I tipi di ottimizzazioni soggette a **fenv_access** sono:

- Eliminazione di sottoespressioni comuni globali

- Movimento di codice

- Riduzione di costanti

Altri pragma a virgola mobile sono i seguenti:

- [float_control](../preprocessor/float-control.md)

- [fp_contract](../preprocessor/fp-contract.md)

## <a name="examples"></a>Esempi

Questo esempio viene impostato **fenv_access** alla **su** per impostare il Registro di controllo a virgola mobile e precisione di 24 bit:

```cpp
// pragma_directive_fenv_access_x86.cpp
// compile with: /O2
// processor: x86
#include <stdio.h>
#include <float.h>
#include <errno.h>
#pragma fenv_access (on)

int main() {
   double z, b = 0.1, t = 0.1;
   unsigned int currentControl;
   errno_t err;

   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);
   if (err != 0) {
      printf_s("The function _controlfp_s failed!\n");
      return -1;
   }
   z = b * t;
   printf_s ("out=%.15e\n",z);
}
```

```Output
out=9.999999776482582e-003
```

Se impostare come commento `#pragma fenv_access (on)` tratto dall'esempio precedente, si noti che l'output è diverso perché il compilatore non di valutazione in fase di compilazione, che non utilizza la modalità di controllo.

```cpp
// pragma_directive_fenv_access_2.cpp
// compile with: /O2
#include <stdio.h>
#include <float.h>

int main() {
   double z, b = 0.1, t = 0.1;
   unsigned int currentControl;
   errno_t err;

   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);
   if (err != 0) {
      printf_s("The function _controlfp_s failed!\n");
      return -1;
   }
   z = b * t;
   printf_s ("out=%.15e\n",z);
}
```

```Output
out=1.000000000000000e-002
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
