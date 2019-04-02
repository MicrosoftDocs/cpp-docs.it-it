---
title: Errore del compilatore C2061
ms.date: 11/04/2016
f1_keywords:
- C2061
helpviewer_keywords:
- C2061
ms.assetid: b0e61c0c-a205-4820-b9aa-301d6c6fe6eb
ms.openlocfilehash: 85357d94c7bc2d709e852daa60caf269949ad1b8
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58771461"
---
# <a name="compiler-error-c2061"></a>Errore del compilatore C2061

Errore di sintassi: identificatore 'identifier'

Il compilatore ha rilevato un identificatore in cui non era previsto. Verificare che l'opzione `identifier` viene dichiarata prima di usarla.

Un inizializzatore di può essere racchiusi tra parentesi. Per evitare questo problema, racchiudere il dichiaratore tra parentesi o renderlo un `typedef`.

Questo errore potrebbe essere causato anche quando il compilatore rileva un'espressione come argomento di modello di classe; usare [typename](../../cpp/typename.md) per indicare al compilatore è un tipo.

L'esempio seguente genera l'errore C2061:

```
// C2061.cpp
// compile with: /c
template < A a >   // C2061
// try the following line instead
// template < typename b >
class c{};
```

L'errore C2061 può verificarsi se si passa il nome di un'istanza di [typeid](../../extensions/typeid-cpp-component-extensions.md):

```
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