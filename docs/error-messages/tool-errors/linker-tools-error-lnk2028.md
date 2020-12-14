---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2028'
title: Errore degli strumenti del linker LNK2028
ms.date: 11/04/2016
f1_keywords:
- LNK2028
helpviewer_keywords:
- LNK2028
ms.assetid: e2b03293-6066-464d-a050-ce747bcf7f0e
ms.openlocfilehash: 31b20cc572a44b1260f58eb03519b60050c0246c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275724"
---
# <a name="linker-tools-error-lnk2028"></a>Errore degli strumenti del linker LNK2028

"*exported_function*" (*Decorated_Name*) a cui viene fatto riferimento nella funzione "*function_containing_function_call*" (*Decorated_Name*)

## <a name="remarks"></a>Commenti

Quando si tenta di importare una funzione nativa in un'immagine pura, tenere presente che le convenzioni di chiamata implicite sono diverse tra le compilazioni native e pure.

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

## <a name="examples"></a>Esempio

Questo esempio di codice genera un componente con una funzione esportata nativa, la cui Convenzione di chiamata è implicitamente [__cdecl](../../cpp/cdecl.md).

```cpp
// LNK2028.cpp
// compile with: /LD
__declspec(dllexport) int func() {
   return 3;
}
```

Nell'esempio seguente viene creato un client pure che utilizza la funzione nativa. Tuttavia, la convenzione di chiamata in **/CLR: pure** è [__clrcall](../../cpp/clrcall.md). L'esempio seguente genera l'LNK2028.

```cpp
// LNK2028_b.cpp
// compile with: /clr:pure lnk2028.lib
// LNK2028 expected
int func();

int main() {
   return func();
}
```
