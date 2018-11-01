---
title: float_control
ms.date: 11/04/2016
f1_keywords:
- vc-pragma.float_control
- float_control_CPP
helpviewer_keywords:
- float_control pragma
- pragmas, float_control
ms.assetid: 4f4ba5cf-3707-413e-927d-5ecdbc0a9a43
ms.openlocfilehash: 63e27e992778776e186345da07937d1a88844e5d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50611016"
---
# <a name="floatcontrol"></a>float_control

Specifica il comportamento a virgola mobile per una funzione.

## <a name="syntax"></a>Sintassi

> **float_control #pragma** [ **(** [ *valore* **,** *impostazione* [ **, push** ]] | [ **push** | **pop** ] **)** ]

## <a name="options"></a>Opzioni

*valore*, *impostazione* [, **push**]<br/>
Specifica il comportamento a virgola mobile. *valore* può essere **preciso**, **strict**, oppure **tranne**. Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](../build/reference/fp-specify-floating-point-behavior.md). Il *impostazione* può essere **sul** oppure **off**.

Se *valore* viene **strict**, le impostazioni delle opzioni **strict** e **eccetto** specificati da *impostazione* . **tranne** può essere impostato solo su **sul** quando **preciso** o **strict** viene inoltre impostata su **sul**.

Se l'opzione facoltativa **push** token viene aggiunto, corrente l'impostazione per *valore* viene inserita nello stack del compilatore interno.

**push**<br/>
Eseguire il push corrente **float_control** impostazione sullo stack del compilatore interno

**pop**<br/>
Rimuove il **float_control** impostazione dall'inizio dello stack del compilatore interno e lo rende la nuova **float_control** impostazione.

## <a name="remarks"></a>Note

Non è possibile usare **float_control** attivare **preciso** disattivato quando **tranne** si trova in. Analogamente, **preciso** non può essere disattivato quando [fenv_access](../preprocessor/fenv-access.md) si trova in. Per passare dal modello di tipo strict a un modello di tipo fast con il **float_control** pragma, usare il codice seguente:

```cpp
#pragma float_control(except, off)
#pragma fenv_access(off)
#pragma float_control(precise, off)
```

Per passare dal modello di tipo fast a un modello di tipo strict con il **float_control** pragma, usare il codice seguente:

```cpp
#pragma float_control(precise, on)
#pragma fenv_access(on)
#pragma float_control(except, on)
```

Se viene specificata alcuna opzione, **float_control** non ha alcun effetto.

Altri pragma a virgola mobile sono i seguenti:

- [fenv_access](../preprocessor/fenv-access.md)

- [fp_contract](../preprocessor/fp-contract.md)

## <a name="example"></a>Esempio

L'esempio seguente viene illustrato come intercettare un'eccezione a virgola mobile dell'overflow utilizzando il pragma **float_control**.

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

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
