---
title: Errore del compilatore C2079 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2079
dev_langs:
- C++
helpviewer_keywords:
- C2079
ms.assetid: ca58d6d5-eccd-40b7-ba14-c003223c5bc7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9ddea9a8651a62f7cbb857e1d53962142471c2cb
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032185"
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