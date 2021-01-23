---
title: fenv_access pragma
description: Descrive l'utilizzo e gli effetti della pragma direttiva fenv_access. La direttiva fenv_access controlla l'accesso all'ambiente a virgola mobile in fase di esecuzione.
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.fenv_access
- fenv_access_CPP
helpviewer_keywords:
- pragma, fenv_access
- fenv_access pragma
no-loc:
- pragma
ms.openlocfilehash: be33bbf9de381850ec78ece204d117ebc537152b
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713662"
---
# <a name="fenv_access-no-locpragma"></a>`fenv_access` pragma

Disabilita ( **`on`** ) o Abilita **`off`** le ottimizzazioni () che possono modificare i test di flag dell'ambiente a virgola mobile e le modifiche alla modalità.

## <a name="syntax"></a>Sintassi

> **`#pragma fenv_access (`** { **`on`** | **`off`** } **`)`**

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, **`fenv_access`** è **`off`** . Il compilatore presuppone che il codice non acceda o modifichi l'ambiente a virgola mobile. Se non è necessario l'accesso all'ambiente, il compilatore può eseguire altre operazioni per ottimizzare il codice a virgola mobile.

Abilitare **`fenv_access`** se il codice testa i flag di stato a virgola mobile, le eccezioni o imposta i flag della modalità di controllo. Il compilatore Disabilita le ottimizzazioni a virgola mobile, in modo che il codice possa accedere in modo coerente all'ambiente a virgola mobile.

L'opzione della riga di comando [/FP: strict] Abilita automaticamente **`fenv_access`** . Per ulteriori informazioni su questo e su altri comportamenti a virgola mobile, vedere [/FP (specifica il comportamento di Floating-Point)](../build/reference/fp-specify-floating-point-behavior.md).

Esistono restrizioni sui modi in cui è possibile usare **`fenv_access`** pragma in combinazione con altre impostazioni a virgola mobile:

- Non è possibile abilitare **`fenv_access`** , a meno che non sia abilitata la semantica precisa. Una semantica precisa può essere abilitata dall'oggetto [`float_control`](float-control.md) pragma o tramite le [`/fp:precise`](../build/reference/fp-specify-floating-point-behavior.md) Opzioni del [`/fp:strict`](../build/reference/fp-specify-floating-point-behavior.md) compilatore o. Per impostazione predefinita, il compilatore viene impostato su **`/fp:precise`** se non è specificata nessun'altra opzione della riga di comando a virgola mobile.

- Non è possibile usare **`float_control`** per disabilitare la semantica precisa quando **`fenv_access(on)`** è impostato.

I tipi di ottimizzazioni soggette a **`fenv_access`** sono:

- Eliminazione di sottoespressioni comuni globali

- Movimento di codice

- Riduzione di costanti

Altre direttive a virgola mobile pragma includono:

- [float_control](../preprocessor/float-control.md)

- [fp_contract](../preprocessor/fp-contract.md)

## <a name="examples"></a>Esempi

Questo esempio imposta **`fenv_access`** su **`on`** per impostare il registro di controllo a virgola mobile per la precisione a 24 bit:

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

Se si imposta come commento `#pragma fenv_access (on)` l'esempio precedente, l'output è diverso. Poiché il compilatore esegue la valutazione in fase di compilazione, che non usa la modalità di controllo.

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

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
