---
description: Altre informazioni sulle direttive gestite e non gestite pragma in Microsoft C++
title: gestito e non gestito pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.unmanaged
- managed_CPP
- unmanaged_CPP
- vc-pragma.managed
helpviewer_keywords:
- managed pragma
- pragma, unmanaged
- pragma, managed
- unmanaged pragma
no-loc:
- pragma
ms.openlocfilehash: a106e9a1370daeedb94bbf5e4d092ae85457a3d2
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713506"
---
# <a name="managed-and-unmanaged-no-locpragma"></a>`managed`e `unmanaged`pragma

Abilitare il controllo a livello di funzione per compilare funzioni come gestite o non gestite.

## <a name="syntax"></a>Sintassi

> **`#pragma managed`**\
> **`#pragma unmanaged`**\
> **`#pragma managed(`** [ **`push,`** ] { **`on`** | **`off`** } **`)`**\
> **`#pragma managed(pop)`**

## <a name="remarks"></a>Osservazioni

L' [`/clr`](../build/reference/clr-common-language-runtime-compilation.md) opzione del compilatore fornisce il controllo a livello di modulo per la compilazione di funzioni come gestite o non gestite.

Una funzione non gestita viene compilata per la piattaforma nativa. L'esecuzione di tale parte del programma verrà passata alla piattaforma nativa dalla Common Language Runtime.

Quando si usa, le funzioni vengono compilate come gestite per impostazione predefinita **`/clr`** .

Quando si applica un **`managed`** o **`unmanaged`** pragma :

- Aggiungere la pragma funzione precedente, ma non all'interno del corpo di una funzione.

- Aggiungere le pragma `#include` istruzioni after. Non utilizzarlo prima di qualsiasi `#include` istruzione.

Il compilatore ignora **`managed`** e **`unmanaged`** pragma se non viene **`/clr`** usato nella compilazione.

Quando viene creata un'istanza di una funzione di modello, lo pragma stato quando viene definito il modello determina se è gestito o non gestito.

Per ulteriori informazioni, vedere [inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md).

## <a name="example"></a>Esempio

```cpp
// pragma_directives_managed_unmanaged.cpp
// compile with: /clr
#include <stdio.h>

// func1 is managed
void func1() {
   System::Console::WriteLine("In managed function.");
}

// #pragma unmanaged
// push managed state on to stack and set unmanaged state
#pragma managed(push, off)

// func2 is unmanaged
void func2() {
   printf("In unmanaged function.\n");
}

// #pragma managed
#pragma managed(pop)

// main is managed
int main() {
   func1();
   func2();
}
```

```Output
In managed function.
In unmanaged function.
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
