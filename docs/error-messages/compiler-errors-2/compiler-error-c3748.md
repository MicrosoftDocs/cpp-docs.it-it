---
title: Errore del compilatore C3748
ms.date: 11/04/2016
f1_keywords:
- C3748
helpviewer_keywords:
- C3748
ms.assetid: 6fe71a0a-dd93-4ce6-9729-b9616360cf34
ms.openlocfilehash: 1b7da734b72acfda4efd55c518b1cc356ff49cce
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761855"
---
# <a name="compiler-error-c3748"></a>Errore del compilatore C3748

' Interface ': le interfacce gestite non possono generare eventi

Non è possibile visualizzare la parola chiave [__event](../../cpp/event.md) all'interno di un'interfaccia.

L'esempio seguente genera l'C3748:

```cpp
// C3748.cpp
__interface I {
// try the following line instead
// struct I {
   __event void f();   // C3748
};

int main() {
}
```
