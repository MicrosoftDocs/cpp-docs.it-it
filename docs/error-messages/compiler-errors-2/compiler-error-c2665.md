---
description: 'Altre informazioni su: errore del compilatore C2665'
title: Errore del compilatore C2665
ms.date: 11/04/2016
f1_keywords:
- C2665
helpviewer_keywords:
- C2665
ms.assetid: a7f99b61-2eae-4f2b-ba75-ea68fd1e8312
ms.openlocfilehash: 784fe5ef0f24cd9e5fba99465d46f378b2b517fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210803"
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
