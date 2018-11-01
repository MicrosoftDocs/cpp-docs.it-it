---
title: Errore del compilatore C2079
ms.date: 11/04/2016
f1_keywords:
- C2079
helpviewer_keywords:
- C2079
ms.assetid: ca58d6d5-eccd-40b7-ba14-c003223c5bc7
ms.openlocfilehash: 68435610680e3b21415a1d9439a8133fd1e2557f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50621663"
---
# <a name="compiler-error-c2079"></a>Errore del compilatore C2079

'identifier' viene utilizzato undefined classe, struct o unione 'name'

L'identificatore specificato è una classe non definita, una struttura o unione.

Questo errore può essere causato dall'inizializzazione in corso un'unione anonima.

L'esempio seguente genera l'errore C2079:

```
// C2079.cpp
// compile with: /EHsc
#include <iostream>
int main() {
   std::ifstream g;   // C2079
}
```

Possibile soluzione:

```
// C2079b.cpp
// compile with: /EHsc
#include <fstream>
int main( ) {
   std::ifstream g;
}
```

C2079 può verificarsi anche se si tenta di dichiarare un oggetto nello stack di un tipo la cui dichiarazione con prototipo è solo nell'ambito.

```
// C2079c.cpp
class A;

class B {
   A a;   // C2079
};

class A {};
```

Possibile soluzione:

```
// C2079d.cpp
// compile with: /c
class A;
class C {};

class B {
   A * a;
   C c;
};

class A {};
```