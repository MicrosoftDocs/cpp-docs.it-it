---
title: Errore degli strumenti del linker LNK1306
ms.date: 11/04/2016
f1_keywords:
- LNK1306
helpviewer_keywords:
- LNK1306
ms.assetid: fad1df6a-0bd9-412f-b0d1-7c9bc749c584
ms.openlocfilehash: ddaa8797e0cf8ff617408aedc770b21cc656cec4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160458"
---
# <a name="linker-tools-error-lnk1306"></a>Errore degli strumenti del linker LNK1306

> Funzione di punto di ingresso DLL non può essere gestito; compilare in nativo

`DllMain` non possono essere compilate in MSIL. deve essere compilato in codice nativo.

Per risolvere questo problema,

- Compilare il file che contiene il punto di ingresso senza **/clr**.

- Inserire il punto di ingresso in un `#pragma unmanaged` sezione.

Per altre informazioni, vedere:

- [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [managed, unmanaged](../../preprocessor/managed-unmanaged.md)

- [Inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md)

- [DLL e comportamento delle librerie di runtime Visual C++](../../build/run-time-library-behavior.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK1306.

```cpp
// LNK1306.cpp
// compile with: /clr /link /dll /entry:NewDllMain
// LNK1306 error expected
#include <windows.h>
int __stdcall NewDllMain( HINSTANCE h, ULONG ulReason, PVOID pvReserved ) {
   return 1;
}
```

Per risolvere questo problema, non utilizzare l'opzione /clr per compilare il file oppure utilizzare un `#pragma` direttiva per inserire la definizione di punto di ingresso in una sezione non gestita, come illustrato in questo esempio:

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
