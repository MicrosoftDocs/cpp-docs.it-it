---
title: Pragma fenv_access
description: Viene descritto l'utilizzo e gli effetti della direttiva pragma fenv_access. La direttiva fenv_access controlla l'accesso all'ambiente a virgola mobile in fase di esecuzione.
ms.date: 11/19/2019
f1_keywords:
- vc-pragma.fenv_access
- fenv_access_CPP
helpviewer_keywords:
- pragmas, fenv_access
- fenv_access pragma
ms.assetid: 2ccea292-0ae4-42ce-9c67-cc189299857b
ms.openlocfilehash: e03eb404f2805a4f7c96509600c063c1b1acf629
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74305854"
---
# <a name="fenv_access-pragma"></a>Pragma fenv_access

Disabilita (**attivato) o**Abilita (**disattivato**) le ottimizzazioni che potrebbero modificare i test di flag dell'ambiente a virgola mobile e le modifiche alla modalità.

## <a name="syntax"></a>Sintassi

> **#pragma fenv_access (** { **on** | **off** } **)**

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, **fenv_access** è **disattivato**. Il compilatore presuppone che il codice non acceda o modifichi l'ambiente a virgola mobile. Se non è necessario l'accesso all'ambiente, il compilatore può eseguire altre operazioni per ottimizzare il codice a virgola mobile.

Abilitare **fenv_access** se il codice testa i flag di stato a virgola mobile, le eccezioni o imposta i flag della modalità di controllo. Il compilatore Disabilita le ottimizzazioni a virgola mobile, in modo che il codice possa accedere in modo coerente all'ambiente a virgola mobile.

L'opzione della riga di comando [/FP: strict] Abilita automaticamente **fenv_access**. Per ulteriori informazioni su questo e su altri comportamenti a virgola mobile, vedere [/FP (specifica il comportamento](../build/reference/fp-specify-floating-point-behavior.md)della virgola mobile).

Esistono restrizioni sui modi in cui è possibile usare il pragma di **fenv_access** in combinazione con altre impostazioni a virgola mobile:

- Non è possibile abilitare **fenv_access** se non è abilitata la semantica precisa. Una semantica precisa può essere abilitata tramite il pragma [float_control](float-control.md) o tramite le opzioni del compilatore [/FP: precise](../build/reference/fp-specify-floating-point-behavior.md) o [/FP: Strict](../build/reference/fp-specify-floating-point-behavior.md) . Per impostazione predefinita, il compilatore è **/FP: precise** se non è specificata nessun'altra opzione della riga di comando a virgola mobile.

- Non è possibile usare **float_control** per disabilitare una semantica precisa quando è impostato **fenv_access (on)** .

I tipi di ottimizzazioni soggetti a **fenv_access** sono i seguenti:

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

Se si imposta come commento `#pragma fenv_access (on)` dell'esempio precedente, l'output è diverso. Poiché il compilatore esegue la valutazione in fase di compilazione, che non usa la modalità di controllo.

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
