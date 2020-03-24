---
title: Errore degli strumenti del linker LNK2028
ms.date: 11/04/2016
f1_keywords:
- LNK2028
helpviewer_keywords:
- LNK2028
ms.assetid: e2b03293-6066-464d-a050-ce747bcf7f0e
ms.openlocfilehash: ef9e3eae655a4fbee1c3da74f6036e5fb22434b1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194616"
---
# <a name="linker-tools-error-lnk2028"></a>Errore degli strumenti del linker LNK2028

"*exported_function*" (*Decorated_Name*) a cui viene fatto riferimento nella funzione "*function_containing_function_call*" (*Decorated_Name*)

## <a name="remarks"></a>Osservazioni

Quando si tenta di importare una funzione nativa in un'immagine pura, tenere presente che le convenzioni di chiamata implicite sono diverse tra le compilazioni native e pure.

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

## <a name="example"></a>Esempio

Questo esempio di codice genera un componente con una funzione esportata nativa, la cui Convenzione di chiamata è implicitamente [__cdecl](../../cpp/cdecl.md).

```cpp
// LNK2028.cpp
// compile with: /LD
__declspec(dllexport) int func() {
   return 3;
}
```

## <a name="example"></a>Esempio

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
