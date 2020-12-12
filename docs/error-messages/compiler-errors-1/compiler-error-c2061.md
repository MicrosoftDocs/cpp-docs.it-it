---
description: 'Altre informazioni su: errore del compilatore C2061'
title: Errore del compilatore C2061
ms.date: 11/04/2016
f1_keywords:
- C2061
helpviewer_keywords:
- C2061
ms.assetid: b0e61c0c-a205-4820-b9aa-301d6c6fe6eb
ms.openlocfilehash: e857f4c4de90fadecdd7b7062306391b4222bcf4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328727"
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
