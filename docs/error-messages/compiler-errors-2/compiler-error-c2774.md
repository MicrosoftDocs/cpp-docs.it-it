---
description: 'Altre informazioni su: errore del compilatore C2774'
title: Errore del compilatore C2774
ms.date: 11/04/2016
f1_keywords:
- C2774
helpviewer_keywords:
- C2774
ms.assetid: 10f428c6-7f49-489a-92ba-6ef978b7caaf
ms.openlocfilehash: d934b2f85fe571c43c8db69018c7c13fd782226a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298201"
---
# <a name="compiler-error-c2774"></a>Errore del compilatore C2774

' Identifier ': nessun metodo ' Put ' associato a questa proprietà

Un membro dati dichiarato con la [Proprietà](../../cpp/property-cpp.md) non ha una `put` funzione, ma un'espressione tenta di impostarne il valore.

L'esempio seguente genera l'C2774:

```cpp
// C2774.cpp
struct A {
   __declspec(property(get=GetProp)) int prop;
   int GetProp(void);

   __declspec(property(get=GetProp2, put=PutProp2)) int prop2;
   int GetProp2(void);
   void PutProp2(int);
};

int main() {
   A* pa = new A;
   int val = 0;
   pa->prop = val;   // C2774
   pa->prop++;   // C2774
}
```
