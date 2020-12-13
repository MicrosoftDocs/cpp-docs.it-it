---
description: 'Altre informazioni su: errore del compilatore C2079'
title: Errore del compilatore C2079
ms.date: 11/04/2016
f1_keywords:
- C2079
helpviewer_keywords:
- C2079
ms.assetid: ca58d6d5-eccd-40b7-ba14-c003223c5bc7
ms.openlocfilehash: 73ca5d334ac3bf3157b61a1b2a9489282ae1fe00
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151216"
---
# <a name="compiler-error-c2079"></a>Errore del compilatore C2079

' Identifier ' utilizza una classe, uno struct o un'Unione ' name ' non definita

L'identificatore specificato è una classe, una struttura o un'Unione non definita.

Questo errore può essere causato dall'inizializzazione di un'unione anonima.

L'esempio seguente genera l'C2079:

```cpp
// C2079.cpp
// compile with: /EHsc
#include <iostream>
int main() {
   std::ifstream g;   // C2079
}
```

Possibile soluzione:

```cpp
// C2079b.cpp
// compile with: /EHsc
#include <fstream>
int main( ) {
   std::ifstream g;
}
```

C2079 può anche verificarsi se si tenta di dichiarare un oggetto nello stack di un tipo la cui dichiarazione con estensione è solo nell'ambito.

```cpp
// C2079c.cpp
class A;

class B {
   A a;   // C2079
};

class A {};
```

Possibile soluzione:

```cpp
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
