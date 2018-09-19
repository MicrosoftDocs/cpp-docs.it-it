---
title: Errore del compilatore C2589 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2589
dev_langs:
- C++
helpviewer_keywords:
- C2589
ms.assetid: 1d7942c7-8a81-4bb4-b272-76a0019e8513
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2db5dde898a3e5918eed62b2b32231b5d7ed014f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46046056"
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