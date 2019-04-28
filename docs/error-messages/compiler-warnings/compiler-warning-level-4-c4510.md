---
title: Avviso del compilatore (livello 4) C4510
ms.date: 11/04/2016
f1_keywords:
- C4510
helpviewer_keywords:
- C4510
ms.assetid: fd28d1d4-ad27-4dad-94c0-9dba46c93180
ms.openlocfilehash: 80183e9f7ef17cbc37592f36eb8db1df2be94827
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62221090"
---
# <a name="compiler-warning-level-4-c4510"></a>Avviso del compilatore (livello 4) C4510

'class': Impossibile generare un costruttore predefinito

Il compilatore non è possibile generare un costruttore predefinito per la classe specificata e nessun costruttore definito dall'utente è stato creato. Non sarà in grado di creare oggetti di questo tipo.

Esistono diverse situazioni che impediscono al compilatore di generare un costruttore predefinito, tra cui:

- Un membro dati const.

- Membro dati è un riferimento.

È necessario creare un costruttore predefinito definito dall'utente per la classe che consente di inizializzare questi membri.

L'esempio seguente genera l'errore C4510:

```
// C4510.cpp
// compile with: /W4
struct A {
   const int i;
   int &j;
   A& operator=( const A& ); // C4510 expected
   // uncomment the following line to resolve this C4510
   // A(int ii, int &jj) : i(ii), j(jj) {}
};   // C4510

int main() {
}
```