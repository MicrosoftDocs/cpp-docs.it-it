---
title: Pragma float_control
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.float_control
- float_control_CPP
helpviewer_keywords:
- float_control pragma
- pragmas, float_control
ms.assetid: 4f4ba5cf-3707-413e-927d-5ecdbc0a9a43
ms.openlocfilehash: aa8cdc07953405175c1753791ab53214d73ba516
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218575"
---
# <a name="float_control-pragma"></a>Pragma float_control

Specifica il comportamento a virgola mobile per una funzione.

## <a name="syntax"></a>Sintassi

> **#pragma float_control**\
> **#pragma float_control (** { **precisione** | **rigorosa** | **ad eccezione** di} **,** { **on** | **off** } [ **, push** ] **)** \
> **#pragma float_control (** { **push** | **pop** } **)**

## <a name="options"></a>Opzioni

 | **strict** **preciso eccetto**,on, |  push | \
Specifica il comportamento della virgola mobile, che può essere **preciso**, **rigido**o **ad eccezione**di. Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](../build/reference/fp-specify-floating-point-behavior.md). L'impostazione può essere **on** o **off**.

Se **strict**, le impostazioni per **strict** e **except** sono specificate dall'impostazione **on** o **off** . **except** può essere impostato **su on** solo quando è impostato **su on**anche **preciso** o **strict** .

Se viene aggiunto il token **push** facoltativo, l'impostazione corrente per **float_control** viene inserita nello stack interno del compilatore.

**spingere**\
Eseguire il push dell'impostazione corrente di **float_control** nello stack del compilatore interno

**popup**\
Rimuove l'impostazione **float_control** dall'inizio dello stack interno del compilatore e imposta la nuova impostazione **float_control** .

## <a name="remarks"></a>Note

Non è possibile usare **float_control** per disattivare la **precisione** quando **except** è on. Analogamente, non è possibile disattivare **precisione** quando [fenv_access](../preprocessor/fenv-access.md) è on. Per passare da un modello rigoroso a un modello rapido usando il pragma **float_control** , usare il codice seguente:

```cpp
#pragma float_control(except, off)
#pragma fenv_access(off)
#pragma float_control(precise, off)
```

Per passare da un modello rapido a un modello Strict con il pragma **float_control** , usare il codice seguente:

```cpp
#pragma float_control(precise, on)
#pragma fenv_access(on)
#pragma float_control(except, on)
```

Se non viene specificata alcuna opzione, **float_control** non ha alcun effetto.

Altri pragma a virgola mobile sono i seguenti:

- [fenv_access](../preprocessor/fenv-access.md)

- [fp_contract](../preprocessor/fp-contract.md)

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

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
