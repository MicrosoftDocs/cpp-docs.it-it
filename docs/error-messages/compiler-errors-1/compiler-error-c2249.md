---
description: 'Altre informazioni su: errore del compilatore C2249'
title: Errore del compilatore C2249
ms.date: 11/04/2016
f1_keywords:
- C2249
helpviewer_keywords:
- C2249
ms.assetid: bdd6697c-e04b-49b9-8e40-d9eb6d74f2b6
ms.openlocfilehash: a9def388d1c9876c8bace8358a08108fdf41394b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337611"
---
# <a name="compiler-error-c2249"></a>Errore del compilatore C2249

' member ': non è stato dichiarato alcun percorso accessibile al membro dichiarato nella base virtuale ' Class '

`member`Viene ereditato da una **`virtual`** classe o una struttura di base non pubblica.

## <a name="examples"></a>Esempio

L'esempio seguente genera l'C2249.

```cpp
// C2249.cpp
class A {
private:
   void privFunc( void ) {};
public:
   void pubFunc( void ) {};
};

class B : virtual public A {} b;

int main() {
   b.privFunc();    // C2249, private member of A
   b.pubFunc();    // OK
}
```

C2249 può verificarsi anche se si tenta di assegnare un flusso dalla libreria standard C++ a un altro flusso.  L'esempio seguente genera l'C2249.

```cpp
// C2249_2.cpp
#include <iostream>
using namespace std;
int main() {
   cout = cerr;   // C2249
   #define cout cerr;   // OK
}
```
