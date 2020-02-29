---
title: float_control (pragma)
description: Viene descritto l'utilizzo e gli effetti della direttiva pragma float_control. La direttiva float_control controlla lo stato della semantica precisa a virgola mobile e della semantica di eccezione in fase di esecuzione.
ms.date: 11/18/2019
f1_keywords:
- vc-pragma.float_control
- float_control_CPP
helpviewer_keywords:
- float_control pragma
- pragmas, float_control
ms.assetid: 4f4ba5cf-3707-413e-927d-5ecdbc0a9a43
ms.openlocfilehash: 5f907bfeb3f92f788fe951854ddc32accc83ae03
ms.sourcegitcommit: a673f6a54cc97e3d4cd032b10aa8dce7f0539d39
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/28/2020
ms.locfileid: "78166784"
---
# <a name="float_control-pragma"></a>float_control (pragma)

Specifica il comportamento a virgola mobile per una funzione.

## <a name="syntax"></a>Sintassi

> **#pragma float_control**\
> **#pragma float_control (precisa,** { **on** | **off** } [ **, push** ] **)** \
> **#pragma float_control (eccetto,** { **on** | **off** } [ **, push** ] **)** \
> **#pragma float_control (** { **push** | **pop** } **)**

## <a name="options"></a>Opzioni

**preciso**, **in** | **off**, **push**\
Specifica se abilitare o disabilitare la semantica a virgola mobile precisa. Per informazioni sulle differenze con l'opzione del compilatore **/FP: precise** , vedere la sezione Osservazioni. Il token **push** facoltativo inserisce l'impostazione corrente per **float_control** nello stack interno del compilatore.

**ad eccezione** **di** , | **disattivato**\ **push**
Specifica se abilitare o disabilitare la semantica delle eccezioni**a**virgola mobile. Il token **push** facoltativo inserisce l'impostazione corrente per **float_control** nello stack interno del compilatore.

**except** può essere impostato **su on** **solo quando è** impostato **su on**.

\ **push**
Inserisce l'impostazione del **float_control** corrente nello stack interno del compilatore.

\ **pop**
Rimuove l'impostazione del **float_control** dall'inizio dello stack interno del compilatore e rende tale impostazione la nuova **float_control** .

## <a name="remarks"></a>Note

Il pragma **float_control** non ha lo stesso comportamento dell'opzione del compilatore [/FP](../build/reference/fp-specify-floating-point-behavior.md) . Il pragma **float_control** regola solo parte del comportamento della virgola mobile. È necessario combinarlo con [fp_contract](../preprocessor/fp-contract.md) e [fenv_access](../preprocessor/fenv-access.md) pragma per ricreare le opzioni del compilatore **/FP** . La tabella seguente illustra le impostazioni pragma equivalenti per ogni opzione del compilatore:

| | float_control (preciso, \*) | float_control (eccetto, \*) | fp_contract (\*) | fenv_access (\*) |
|-|-|-|-|-|
| /fp:strict             | in  | in  | spento | in  |
| /fp:precise            | in  | spento | in  | spento |
| /fp:fast               | spento | spento | in  | spento |

In altre parole, potrebbe essere necessario usare diversi pragma in combinazione per emulare le opzioni della riga di comando **/FP: Fast**, **/FP: precise**e **/FP: Strict** .

Esistono restrizioni sui modi in cui è possibile usare la **float_control** e **fenv_access** pragma a virgola mobile in combinazione:

- È possibile utilizzare solo **float_control** per impostare ad eccezione **di se è** abilitata la semantica precisa. Una semantica precisa può essere abilitata tramite il pragma **float_control** o tramite le opzioni del compilatore **/FP: precise** o **/FP: Strict** .

- Non è possibile usare **float_control** per disattivare la **precisione** quando è abilitata la semantica delle eccezioni, sia tramite un pragma **float_control** che con un'opzione del compilatore **/FP: except** .

- Non è possibile abilitare **fenv_access** a meno che non sia stata abilitata la semantica specifica, a prescindere da un **float_control** pragma o da un'opzione del compilatore.

- Non è possibile usare **float_control** per disattivare la **precisione** quando **fenv_access** è abilitato.

Queste restrizioni indicano che l'ordine di alcuni pragma a virgola mobile è significativo. Per passare da un modello rapido a un modello rigoroso usando pragmas, usare il codice seguente:

```cpp
#pragma float_control(precise, on)  // enable precise semantics
#pragma fenv_access(on)             // enable environment sensitivity
#pragma float_control(except, on)   // enable exception semantics
#pragma fp_contract(off)            // disable contractions
```

Per passare da un modello rigoroso a un modello rapido usando il **float_control** pragma, usare il codice seguente:

```cpp
#pragma float_control(except, off)  // disable exception semantics
#pragma fenv_access(off)            // disable environment sensitivity
#pragma float_control(precise, off) // disable precise semantics
#pragma fp_contract(on)             // enable contractions
```

Se non viene specificata alcuna opzione, **float_control** non ha alcun effetto.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come intercettare un'eccezione a virgola mobile di overflow utilizzando pragma **float_control**.

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

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[fenv_access](../preprocessor/fenv-access.md)\
[fp_contract](../preprocessor/fp-contract.md)
