---
title: Pragma float_control
description: Viene descritto l'utilizzo e gli effetti della direttiva pragma float_control. La direttiva float_control controlla lo stato della semantica precisa a virgola mobile e della semantica di eccezione in fase di esecuzione.
ms.date: 11/18/2019
f1_keywords:
- vc-pragma.float_control
- float_control_CPP
helpviewer_keywords:
- float_control pragma
- pragmas, float_control
ms.assetid: 4f4ba5cf-3707-413e-927d-5ecdbc0a9a43
ms.openlocfilehash: 0c9caea5ba35a55a53f7b9340cf9bfd2cce80561
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74305501"
---
# <a name="float_control-pragma"></a>Pragma float_control

Specifica il comportamento a virgola mobile per una funzione.

## <a name="syntax"></a>Sintassi

> **#pragma float_control**\
> **#pragma float_control (precisa,** { **on** | **off** } [ **, push** ] **)** \
> **#pragma float_control (eccetto,** { **on** | **off** } [ **, push** ] **)** \
> **#pragma float_control (** { **push** | **pop** } **)**

## <a name="options"></a>Opzioni

**preciso**, **in** | **off**, **push**\
Specifica se abilitare o disabilitare la semantica a virgola mobile precisa. Per informazioni su come questa opzione differisce dall'opzione del compilatore **/FP: precise** simile, vedere la sezione Osservazioni. Il token **push** facoltativo indica al compilatore di effettuare il push dell'impostazione corrente per **float_control** nello stack interno del compilatore.

**ad eccezione** **di** , | **disattivato**\ **push**
Specifica se abilitare o disabilitare la semantica delle eccezioni**a**virgola mobile. Per informazioni sul modo in cui questa opzione è diversa dall'opzione del compilatore **/FP: except** denominata in modo analogo, vedere la sezione Osservazioni. Il token **push** facoltativo indica al compilatore di effettuare il push dell'impostazione corrente per **float_control** nello stack interno del compilatore.

**except** può essere impostato **su on** **solo quando è** impostato **su on**.

**push**\
Inserisce l'impostazione del **float_control** corrente nello stack interno del compilatore.

**pop**\
Rimuove l'impostazione del **float_control** dall'inizio dello stack interno del compilatore e rende tale impostazione la nuova **float_control** .

## <a name="remarks"></a>Osservazioni

Le opzioni **precise** e **except** non hanno esattamente lo stesso comportamento delle opzioni del compilatore [/FP](../build/reference/fp-specify-floating-point-behavior.md) con gli stessi nomi. Il pragma **float_control** regola solo parte del comportamento della virgola mobile. È necessario combinarlo con [fp_contract](../preprocessor/fp-contract.md) e [fenv_access](../preprocessor/fenv-access.md) pragma per ricreare le opzioni del compilatore **/FP** . La tabella seguente illustra le impostazioni pragma equivalenti per ogni opzione del compilatore:

| | float_control (preciso, \*) | float_control (eccetto, \*) | fp_contract (\*) | fenv_access (\*) |
|-|-|-|-|-|
| /fp:strict             | attivo  | attivo  | off | attivo  |
| /fp:strict /fp:except- | attivo  | off | off | attivo  |
| /fp:precise            | attivo  | off | attivo  | off |
| /FP: precise/FP: except | attivo  | attivo  | attivo  | off |
| /fp:fast               | off | off | attivo  | off |

In altre parole, è necessario usare diversi pragma in combinazione per emulare le opzioni di riga di comando **/FP: Fast**, **/FP: precise**, **/FP: Strict**e **/FP: except** .

Esistono restrizioni sui modi in cui è possibile usare la **float_control** e **fenv_access** pragma a virgola mobile in combinazione:

- È possibile utilizzare solo **float_control** per impostare ad eccezione **di se è** abilitata la semantica precisa. Una semantica precisa può essere abilitata tramite il pragma **float_control** o tramite le opzioni del compilatore **/FP: precise** o **/FP: Strict** .

- Non è possibile usare **float_control** per disattivare la **precisione** quando è abilitata la semantica delle eccezioni, sia tramite un pragma **float_control** che con un'opzione del compilatore **/FP: except** .

- Non è possibile abilitare **fenv_access** a meno che non sia stata abilitata la semantica specifica, a prescindere da un **float_control** pragma o da un'opzione del compilatore.

- Non è possibile usare **float_control** per disattivare la **precisione** quando **fenv_access** è abilitato.

Queste restrizioni indicano che l'ordine di alcuni pragma a virgola mobile è significativo. Per passare da un modello rapido a un modello rigoroso usando il **float_control** e i pragma correlati, usare il codice seguente:

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
#pragma fp_contract(on)             // ensable contractions
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
