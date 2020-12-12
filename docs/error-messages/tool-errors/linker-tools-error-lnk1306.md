---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1306'
title: Errore degli strumenti del linker LNK1306
ms.date: 11/04/2016
f1_keywords:
- LNK1306
helpviewer_keywords:
- LNK1306
ms.assetid: fad1df6a-0bd9-412f-b0d1-7c9bc749c584
ms.openlocfilehash: aa6386da7c836eea8365d8a4ffde0bbd80d0fa81
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193656"
---
# <a name="linker-tools-error-lnk1306"></a>Errore degli strumenti del linker LNK1306

> Impossibile gestire la funzione del punto di ingresso della DLL. Compila in nativo

`DllMain` Impossibile compilare in MSIL. deve essere compilato in nativo.

Per risolvere il problema,

- Compilare il file che contiene il punto di ingresso senza **/CLR**.

- Inserire il punto di ingresso in una `#pragma unmanaged` sezione.

Per altre informazioni, vedere:

- [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [managed, unmanaged](../../preprocessor/managed-unmanaged.md)

- [Inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md)

- [DLL e comportamento delle librerie di runtime Visual C++](../../build/run-time-library-behavior.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'LNK1306.

```cpp
// LNK1306.cpp
// compile with: /clr /link /dll /entry:NewDllMain
// LNK1306 error expected
#include <windows.h>
int __stdcall NewDllMain( HINSTANCE h, ULONG ulReason, PVOID pvReserved ) {
   return 1;
}
```

Per risolvere questo problema, non usare l'opzione/CLR per compilare il file oppure usare una `#pragma` direttiva per inserire la definizione del punto di ingresso in una sezione non gestita, come illustrato nell'esempio seguente:

```cpp
// LNK1306fix.cpp
// compile with: /clr /link /dll /entry:NewDllMain
#include <windows.h>
#pragma managed(push, off)
int __stdcall NewDllMain( HINSTANCE h, ULONG ulReason, PVOID pvReserved ) {
   return 1;
}
#pragma managed(pop)
```
