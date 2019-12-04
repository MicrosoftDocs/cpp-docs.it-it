---
title: Errore del compilatore C2665
ms.date: 11/04/2016
f1_keywords:
- C2665
helpviewer_keywords:
- C2665
ms.assetid: a7f99b61-2eae-4f2b-ba75-ea68fd1e8312
ms.openlocfilehash: 95ca5ea846f9cd45bdb1e9706ae377589d37a285
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756019"
---
# <a name="compiler-error-c2665"></a>Errore del compilatore C2665

' Function ': nessuno degli overload number1 può convertire il parametro number2 dal tipo ' type '

Un parametro della funzione in overload non può essere convertito nel tipo richiesto.  Di seguito vengono riportate alcune soluzioni possibili:

- Fornire un operatore di conversione.

- Usare la conversione esplicita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2665.

```cpp
// C2665.cpp
void func(short, char*){}
void func(char*, char*){}

int main() {
   func(0, 1);   // C2665
   func((short)0, (char*)1);   // OK
}
```
