---
title: Errore del compilatore C2589
ms.date: 11/04/2016
f1_keywords:
- C2589
helpviewer_keywords:
- C2589
ms.assetid: 1d7942c7-8a81-4bb4-b272-76a0019e8513
ms.openlocfilehash: 76cc35e57c1577ed23c043740f37c602600da542
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74748502"
---
# <a name="compiler-error-c2589"></a>Errore del compilatore C2589

' Identifier ': token non valido sul lato destro di '::'

Se un nome di classe, struttura o Unione viene visualizzato a sinistra dell'operatore di risoluzione dell'ambito (doppi due punti), il token a destra deve essere un membro di classe, struttura o Unione. In caso contrario, qualsiasi identificatore globale può essere visualizzato a destra.

Non è possibile eseguire l'overload dell'operatore di risoluzione dell'ambito.

L'esempio seguente genera l'C2589:

```cpp
// C2589.cpp
void Test(){}
class A {};
void operator :: ();   // C2589

int main() {
   ::Test();
}
```
