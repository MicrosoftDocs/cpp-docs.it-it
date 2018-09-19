---
title: Compilatore avviso (livello 1) C4540 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4540
dev_langs:
- C++
helpviewer_keywords:
- C4540
ms.assetid: 8085e748-5f4d-43c2-b06d-eaf794edbf72
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4e3f553bd1f910c7b17e079dc1f03664c78383e3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46042767"
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