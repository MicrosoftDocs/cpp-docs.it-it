---
title: Pragma fenv_access
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.fenv_access
- fenv_access_CPP
helpviewer_keywords:
- pragmas, fenv_access
- fenv_access pragma
ms.assetid: 2ccea292-0ae4-42ce-9c67-cc189299857b
ms.openlocfilehash: c8e66881bde12df28bf24e18230471cb4caca792
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218602"
---
# <a name="fenv_access-pragma"></a>Pragma fenv_access

Disabilita (attivato)o Abilita (**disattivato**) le ottimizzazioni che potrebbero modificare i test di flag dell'ambiente a virgola mobile e le modifiche alla modalità.

## <a name="syntax"></a>Sintassi

> **#pragma fenv_access (** { **on** | **off** } **)**

## <a name="remarks"></a>Note

Per impostazione predefinita, **fenv_access** è **disattivato**. Se il compilatore può presupporre che il codice non acceda o modifichi l'ambiente a virgola mobile, può eseguire molte ottimizzazioni del codice a virgola mobile. Impostare **fenv_access** **su on** per indicare al compilatore che il codice accede all'ambiente a virgola mobile per testare i flag di stato, le eccezioni o per impostare i flag della modalità di controllo. Il compilatore Disabilita queste ottimizzazioni in modo che il codice possa accedere in modo coerente all'ambiente a virgola mobile.

Per ulteriori informazioni sul comportamento della virgola mobile, vedere [/FP (specifica il comportamento](../build/reference/fp-specify-floating-point-behavior.md)della virgola mobile).

I tipi di ottimizzazioni soggette a **fenv_access** sono i seguenti:

- Eliminazione di sottoespressioni comuni globali

- Movimento di codice

- Riduzione di costanti

Altri pragma a virgola mobile sono i seguenti:

- [float_control](../preprocessor/float-control.md)

- [fp_contract](../preprocessor/fp-contract.md)

## <a name="examples"></a>Esempi

Questo esempio imposta **fenv_access** **su on** per impostare il registro di controllo a virgola mobile per la precisione a 24 bit:

```cpp
// pragma_directive_fenv_access_x86.cpp
// compile with: /O2 /arch:IA32
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
out=9.999999776482582e-03
```

Se si imposta come `#pragma fenv_access (on)` commento l'esempio precedente, si noti che l'output è diverso perché il compilatore esegue la valutazione in fase di compilazione, che non utilizza la modalità di controllo.

```cpp
// pragma_directive_fenv_access_2.cpp
// compile with: /O2 /arch:IA32
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
out=1.000000000000000e-02
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
