---
description: 'Altre informazioni su: errore del compilatore C2541'
title: Errore del compilatore C2541
ms.date: 11/04/2016
f1_keywords:
- C2541
helpviewer_keywords:
- C2541
ms.assetid: ed95180f-00df-4e62-a8e9-1b6dab8281bf
ms.openlocfilehash: 79d4cab33a7c92455b5a4eacdf75f26f80b16a33
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302010"
---
# <a name="compiler-error-c2541"></a>Errore del compilatore C2541

' Delete ': Delete: Impossibile eliminare oggetti che non sono puntatori

L'operatore [Delete](../../cpp/delete-operator-cpp.md) è stato utilizzato su un oggetto che non è un puntatore.

L'esempio seguente genera l'C2541:

```cpp
// C2541.cpp
int main() {
   int i;
   delete i;   // C2541 i not a pointer

   // OK
   int *ip = new int;
   delete ip;
}
```
