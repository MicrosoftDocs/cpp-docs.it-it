---
title: Avviso del compilatore (livello 1) C4540
ms.date: 11/04/2016
f1_keywords:
- C4540
helpviewer_keywords:
- C4540
ms.assetid: 8085e748-5f4d-43c2-b06d-eaf794edbf72
ms.openlocfilehash: 86f6cd866f7708277ebba436ba7c076086dc9c8c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160705"
---
# <a name="compiler-warning-level-1-c4540"></a>Avviso del compilatore (livello 1) C4540

dynamic_cast usato per convertire in base ambigua o inaccessibile; fase di esecuzione test avrà esito negativo ('type1' a 'type2')

È stato usato `dynamic_cast` convertire da un tipo diverso. Il compilatore determinato che il cast andava sempre male (restituiscono **NULL**) perché una classe di base è inaccessibile (`private`, ad esempio) o ambigue (ad esempio, viene visualizzato più volte nella gerarchia delle classi,).

Di seguito viene riportato un esempio di questo avviso. Classe **B** è derivato dalla classe **oggetto**. Il programma utilizza `dynamic_cast` per eseguire il cast dalla classe **B** (la classe derivata) alla classe **oggetto**, che avrà sempre esito negativo perché classe **B** è `private` e di conseguenza inaccessibile. La modifica dell'accesso di **un'** al **pubblico** risolverà il problema.

```
// C4540.cpp
// compile with: /W1

struct A {
   virtual void g() {}
};

struct B : private A {
   virtual void g() {}
};

int main() {
   B b;
   A * ap = dynamic_cast<A*>(&b);   // C4540
}
```