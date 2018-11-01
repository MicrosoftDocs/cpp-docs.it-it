---
title: Errore degli strumenti del linker LNK2028
ms.date: 11/04/2016
f1_keywords:
- LNK2028
helpviewer_keywords:
- LNK2028
ms.assetid: e2b03293-6066-464d-a050-ce747bcf7f0e
ms.openlocfilehash: ed2dc1a95d4dd7c447b360da21b5046e20f79083
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643677"
---
# <a name="linker-tools-error-lnk2028"></a>Errore degli strumenti del linker LNK2028

"*exported_function*" (*nome_decorato*) fa riferimento nella funzione "*function_containing_function_call*" (*nome_decorato*)

## <a name="remarks"></a>Note

Quando si prova a importare una funzione nativa in un'immagine pure, tenere presente che le convenzioni di chiamata implicite differiscono tra le compilazioni native e pure.

Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

## <a name="example"></a>Esempio

Questo esempio di codice genera un componente con una funzione esportata la nativa, il cui convenzione di chiamata è implicitamente [cdecl](../../cpp/cdecl.md).

```cpp
// LNK2028.cpp
// compile with: /LD
__declspec(dllexport) int func() {
   return 3;
}
```

## <a name="example"></a>Esempio

L'esempio seguente crea un client puro che utilizza la funzione nativa. Tuttavia, la convenzione di chiamata sotto **/clr: pure** viene [clrcall](../../cpp/clrcall.md). L'esempio seguente genera l'errore LNK2028.

```cpp
// LNK2028_b.cpp
// compile with: /clr:pure lnk2028.lib
// LNK2028 expected
int func();

int main() {
   return func();
}
```