---
description: 'Altre informazioni su: errore del compilatore C2589'
title: Errore del compilatore C2589
ms.date: 11/04/2016
f1_keywords:
- C2589
helpviewer_keywords:
- C2589
ms.assetid: 1d7942c7-8a81-4bb4-b272-76a0019e8513
ms.openlocfilehash: b874988f65ef41a9cde19e4c0229a6cb54859b28
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177497"
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
