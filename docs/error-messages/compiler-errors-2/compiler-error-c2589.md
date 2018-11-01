---
title: Errore del compilatore C2589
ms.date: 11/04/2016
f1_keywords:
- C2589
helpviewer_keywords:
- C2589
ms.assetid: 1d7942c7-8a81-4bb4-b272-76a0019e8513
ms.openlocfilehash: 18d8f7130c34f5e1e33bc7aa9b9463f50c243045
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50587313"
---
# <a name="compiler-error-c2589"></a>Errore del compilatore C2589

'identifier': token non valido a destra di ':: '

Se una classe, struttura o unione nome viene visualizzato a sinistra dell'operatore di risoluzione dell'ambito (doppi due punti), il token nella parte destra deve essere una classe, struttura o membro di unione. In caso contrario, qualsiasi identificatore globale può essere visualizzati sulla destra.

L'operatore di risoluzione dell'ambito non possa essere sottoposti a overload.

L'esempio seguente genera l'errore C2589:

```
// C2589.cpp
void Test(){}
class A {};
void operator :: ();   // C2589

int main() {
   ::Test();
}
```