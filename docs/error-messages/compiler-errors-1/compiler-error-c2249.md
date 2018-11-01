---
title: Errore del compilatore C2249
ms.date: 11/04/2016
f1_keywords:
- C2249
helpviewer_keywords:
- C2249
ms.assetid: bdd6697c-e04b-49b9-8e40-d9eb6d74f2b6
ms.openlocfilehash: f3f82549cf5d9230adfee7e83248e92f8e93e769
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50555630"
---
# <a name="compiler-error-c2249"></a>Errore del compilatore C2249

'member': nessun percorso accessibile per accedere a un membro dichiarato nella base virtuale 'class'

Il `member` viene ereditata da un nonpublic `virtual` struttura o classe di base.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2249.

```
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

## <a name="example"></a>Esempio

C2249 può verificarsi anche se si prova ad assegnare un flusso dalla libreria Standard C++ in un altro flusso.  L'esempio seguente genera l'errore C2249.

```
// C2249_2.cpp
#include <iostream>
using namespace std;
int main() {
   cout = cerr;   // C2249
   #define cout cerr;   // OK
}
```