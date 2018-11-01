---
title: Avviso del compilatore (livello 1) C4747
ms.date: 11/04/2016
f1_keywords:
- C4747
helpviewer_keywords:
- C4747
ms.assetid: af37befd-ba1f-4bdc-96e1-a953f7a2ad9c
ms.openlocfilehash: ecaabd482049771b1d3915470a2be7a52e36d361
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50462387"
---
# <a name="compiler-warning-level-1-c4747"></a>Avviso del compilatore (livello 1) C4747

La chiamata gestita 'punto di ingresso': il codice gestito potrebbe non essere eseguito in blocco del caricatore, inclusi il punto di ingresso DLL e le chiamate raggiunte dal punto di ingresso DLL

Il compilatore ha rilevato un punto di ingresso DLL (probabile) compilato per MSIL.  A causa di potenziali problemi con il caricamento di una DLL il cui punto di ingresso è stato compilato in MSIL, si è fortemente sconsigliato la compilazione di una funzione di punto di ingresso DLL in MSIL.

Per altre informazioni, vedere [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md) e [Errore degli strumenti del Linker LNK1306](../../error-messages/tool-errors/linker-tools-error-lnk1306.md).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Il modulo con la compilazione non **/clr**.

1. Contrassegnare la funzione di punto di ingresso con `#pragma unmanaged`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4747.

```
// C4747.cpp
// compile with: /clr /c /W1
// C4747 expected
#include <windows.h>

// Uncomment the following line to resolve.
// #pragma unmanaged

BOOL WINAPI DllMain(HANDLE hInstance, ULONG Command, LPVOID Reserved) {
   return TRUE;
};
```