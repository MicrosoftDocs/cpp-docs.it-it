---
title: Avviso del compilatore (livello 1) C4747
ms.date: 11/04/2016
f1_keywords:
- C4747
helpviewer_keywords:
- C4747
ms.assetid: af37befd-ba1f-4bdc-96e1-a953f7a2ad9c
ms.openlocfilehash: 623b29d345a850cc312f23e4c521aa0be5b47242
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052436"
---
# <a name="compiler-warning-level-1-c4747"></a>Avviso del compilatore (livello 1) C4747

Chiamata a' EntryPoint ' gestito: il codice gestito non può essere eseguito con il blocco del caricatore, incluso il EntryPoint della DLL e le chiamate raggiunte dal EntryPoint della DLL

Il compilatore ha trovato un punto di ingresso DLL (probabile) compilato in MSIL.  A causa di potenziali problemi con il caricamento di una DLL il cui punto di ingresso è stato compilato in MSIL, si sconsiglia vivamente di compilare una funzione del punto di ingresso della DLL in MSIL.

Per altre informazioni, vedere [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md) e [errore degli strumenti del linker LNK1306](../../error-messages/tool-errors/linker-tools-error-lnk1306.md).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non compilare il modulo con **/CLR**.

1. Contrassegnare la funzione del punto di ingresso con `#pragma unmanaged`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4747.

```cpp
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