---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4522'
title: Avviso del compilatore (livello 3) C4522
ms.date: 11/04/2016
f1_keywords:
- C4522
helpviewer_keywords:
- C4522
ms.assetid: 7065dc27-0b6c-4e68-a345-c51cdb99a20b
ms.openlocfilehash: 8663bf6ea70edd6612fd3d124989f6e657185947
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257966"
---
# <a name="compiler-warning-level-3-c4522"></a>Avviso del compilatore (livello 3) C4522

' Class ': specificati più operatori di assegnazione

La classe dispone di più operatori di assegnazione di un singolo tipo. Questo avviso è informativo. i costruttori sono richiamabili nel programma.

Usare il pragma [warning](../../preprocessor/warning.md) per non visualizzare questo avviso.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4522.

```cpp
// C4522.cpp
// compile with: /EHsc /W3
#include <iostream>

using namespace std;
class A {
public:
   A& operator=( A & o ) { cout << "A&" << endl; return *this; }
   A& operator=( const A &co ) { cout << "const A&" << endl; return *this; }   // C4522
};

int main() {
   A o1, o2;
   o2 = o1;
   const A o3;
   o1 = o3;
}
```
