---
title: float_control pragma
description: Descrive l'utilizzo e gli effetti della pragma direttiva float_control. La direttiva float_control controlla lo stato della semantica precisa a virgola mobile e della semantica di eccezione in fase di esecuzione.
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.float_control
- float_control_CPP
helpviewer_keywords:
- float_control pragma
- pragma, float_control
no-loc:
- pragma
ms.openlocfilehash: 98695c15424395a9b4e008a5cb1133824e1e7054
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712765"
---
# <a name="float_control-no-locpragma"></a>`float_control` pragma

Specifica il comportamento a virgola mobile per una funzione.

## <a name="syntax"></a>Sintassi

> **`#pragma float_control`**\
> **`#pragma float_control( precise,`** { **`on`** | **`off`** } [ **`, push`** ] **`)`**\
> **`#pragma float_control( except,`** { **`on`** | **`off`** } [ **`, push`** ] **`)`**\
> **`#pragma float_control(`** { **`push`** | **`pop`** } **`)`**

## <a name="options"></a>Opzioni

**`precise`**, **`on`** | **`off`**, **`push`**\
Specifica se abilitare ( **`on`** ) o disabilitare ( **`off`** ) la semantica a virgola mobile precisa. Per informazioni sulle differenze con l' **`/fp:precise`** opzione del compilatore, vedere la sezione Osservazioni. Il **`push`** token facoltativo inserisce l'impostazione corrente per nello **`float_control`** stack interno del compilatore.

**`except`**, **`on`** | **`off`**, **`push`**\
Specifica se abilitare ( **`on`** ) o disabilitare ( **`off`** ) la semantica di eccezione a virgola mobile. Il **`push`** token facoltativo inserisce l'impostazione corrente per nello **`float_control`** stack interno del compilatore.

**`except`** può essere impostato solo su **`on`** quando **`precise`** è impostato anche su **`on`** .

**`push`**\
Inserisce l'impostazione corrente nello **`float_control`** stack interno del compilatore.

**`pop`**\
**`float_control`** Consente di rimuovere l'impostazione dall'inizio dello stack interno del compilatore e di **`float_control`** impostarla come nuova impostazione.

## <a name="remarks"></a>Osservazioni

**`float_control`** pragma Non ha lo stesso comportamento dell'opzione del [`/fp`](../build/reference/fp-specify-floating-point-behavior.md) compilatore. Il **`float_control`** pragma regola solo parte del comportamento della virgola mobile. Deve essere combinata con [`fp_contract`](../preprocessor/fp-contract.md) [`fenv_access`](../preprocessor/fenv-access.md) pragma le direttive e per ricreare le **`/fp`** Opzioni del compilatore. La tabella seguente illustra le impostazioni equivalenti pragma per ogni opzione del compilatore:

| Opzione | `float_control(precise, *)` | `float_control(except, *)` | `fp_contract(*)` | `fenv_access(*)` |
|-|-|-|-|-|
| `/fp:strict`             | `on`  | `on`  | `off` | `on`  |
| `/fp:precise`            | `on`  | `off` | `on`  | `off` |
| `/fp:fast`               | `off` | `off` | `on`  | `off` |

In altre parole, potrebbe essere necessario utilizzare diverse pragma direttive in combinazione per emulare le **`/fp:fast`** Opzioni della **`/fp:precise`** riga di **`/fp:strict`** comando, e.

Sono presenti restrizioni sui modi in cui è possibile usare **`float_control`** le **`fenv_access`** direttive a virgola mobile e pragma in combinazione:

- È possibile utilizzare solo **`float_control`** per impostare **`except`** su **`on`** se è abilitata la semantica precisa. Una semantica precisa può essere abilitata dall'oggetto **`float_control`** pragma o tramite le **`/fp:precise`** Opzioni del **`/fp:strict`** compilatore o.

- Non è possibile utilizzare **`float_control`** per disattivare **`precise`** quando la semantica delle eccezioni è abilitata, sia tramite un' **`float_control`** pragma **`/fp:except`** opzione del compilatore che.

- Non è possibile abilitare **`fenv_access`** , a meno che non sia abilitata la semantica precisa, sia mediante un' **`float_control`** pragma opzione del compilatore o.

- Non è possibile utilizzare **`float_control`** per disattivare **`precise`** quando **`fenv_access`** è abilitato.

Queste restrizioni indicano che l'ordine di alcune direttive a virgola mobile pragma è significativo. Per passare da un modello rapido a un modello rigoroso usando pragma le direttive, usare il codice seguente:

```cpp
#pragma float_control(precise, on)  // enable precise semantics
#pragma fenv_access(on)             // enable environment sensitivity
#pragma float_control(except, on)   // enable exception semantics
#pragma fp_contract(off)            // disable contractions
```

Per passare da un modello rigoroso a un modello rapido usando **`float_control`** pragma , usare il codice seguente:

```cpp
#pragma float_control(except, off)  // disable exception semantics
#pragma fenv_access(off)            // disable environment sensitivity
#pragma float_control(precise, off) // disable precise semantics
#pragma fp_contract(on)             // enable contractions
```

Se non viene specificata alcuna opzione, non **`float_control`** ha alcun effetto.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come intercettare un'eccezione a virgola mobile di overflow utilizzando pragma **`float_control`** .

```cpp
// pragma_directive_float_control.cpp
// compile with: /EHa
#include <stdio.h>
#include <float.h>

double func( ) {
   return 1.1e75;
}

#pragma float_control (except, on)

int main( ) {
   float u[1];
   unsigned int currentControl;
   errno_t err;

   err = _controlfp_s(&currentControl, ~_EM_OVERFLOW, _MCW_EM);
   if (err != 0)
      printf_s("_controlfp_s failed!\n");

   try  {
      u[0] = func();
      printf_s ("Fail");
      return(1);
   }

   catch (...)  {
      printf_s ("Pass");
      return(0);
   }
}
```

```Output
Pass
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)\
[`fenv_access` pragma](../preprocessor/fenv-access.md)\
[`fp_contract` pragma](../preprocessor/fp-contract.md)
