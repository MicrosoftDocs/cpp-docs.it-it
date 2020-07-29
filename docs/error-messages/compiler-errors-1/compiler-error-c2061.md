---
title: Errore del compilatore C2061
ms.date: 11/04/2016
f1_keywords:
- C2061
helpviewer_keywords:
- C2061
ms.assetid: b0e61c0c-a205-4820-b9aa-301d6c6fe6eb
ms.openlocfilehash: 1e1b13960c84d4e03c6316c451c690f8b5a6236e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212865"
---
# <a name="compiler-error-c2061"></a>Errore del compilatore C2061

errore di sintassi: identificatore ' Identifier '

Il compilatore ha trovato un identificatore dove non era previsto. Verificare che `identifier` sia dichiarato prima di usarlo.

Un inizializzatore può essere racchiuso tra parentesi. Per evitare questo problema, racchiudere il dichiaratore tra parentesi o impostarlo come **`typedef`** .

Questo errore può essere causato anche quando il compilatore rileva un'espressione come argomento di modello di classe; usare [typeName](../../cpp/typename.md) per indicare al compilatore che si tratta di un tipo.

L'esempio seguente genera l'C2061:

```cpp
// C2061.cpp
// compile with: /c
template < A a >   // C2061
// try the following line instead
// template < typename b >
class c{};
```

C2061 può verificarsi se si passa un nome di istanza a [typeid](../../extensions/typeid-cpp-component-extensions.md):

```cpp
// C2061b.cpp
// compile with: /clr
ref struct G {
   int i;
};

int main() {
   G ^ pG = gcnew G;
   System::Type ^ pType = typeid<pG>;   // C2061
   System::Type ^ pType2 = typeid<G>;   // OK
}
```
