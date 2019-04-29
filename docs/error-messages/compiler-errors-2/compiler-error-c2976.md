---
title: Errore del compilatore C2976
ms.date: 11/04/2016
f1_keywords:
- C2976
helpviewer_keywords:
- C2976
ms.assetid: d9bf9836-325e-4f72-a7e3-a67cf19d32e7
ms.openlocfilehash: 02771d7419c58ee4f0b6d7db46ba91fde253d9a9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395365"
---
# <a name="compiler-error-c2976"></a>Errore del compilatore C2976

'identifier': argomenti di tipo insufficienti

Un oggetto generico o modello mancano uno o più argomenti effettivi. Controllare la dichiarazione generica o di modello per trovare il numero corretto di parametri.

Questo errore può essere causato dalla mancanza di argomenti di modello nei componenti della libreria Standard C++.

L'esempio seguente genera l'errore C2976:

```
// C2976.cpp
template <class T>
struct TC {
   T t;
};
int main() {
   TC<>* t;   // C2976
   TC<int>* t2;   // OK
}
```

C2976 può verificarsi anche quando si usano i generics:

```
// C2976b.cpp
// compile with: /clr
generic <class T>
ref struct GC {
   T t;
};

int main() {
   GC<>^ g;   // C2976
   GC<int>^ g2;   // OK
}
```