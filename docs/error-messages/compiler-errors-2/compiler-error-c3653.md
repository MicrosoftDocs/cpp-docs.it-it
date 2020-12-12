---
description: 'Altre informazioni su: errore del compilatore C3653'
title: Errore del compilatore C3653
ms.date: 11/04/2016
f1_keywords:
- C3653
helpviewer_keywords:
- C3653
ms.assetid: 316549d7-f7ef-4578-a2ba-57adc8aac527
ms.openlocfilehash: 6f41d52416d2fee05873197efa60e4b888cf29f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320105"
---
# <a name="compiler-error-c3653"></a>Errore del compilatore C3653

' Function ': Impossibile utilizzare come override denominato. Impossibile trovare una funzione sottoposta a override. si è omesso di denominare la funzione in modo esplicito usando un operatore::?

Un override esplicito specifica una funzione che non è stata trovata in nessuna interfaccia. Per ulteriori informazioni, vedere [override espliciti](../../extensions/explicit-overrides-cpp-component-extensions.md).

L'esempio seguente genera l'C3653:

```cpp
// C3653.cpp
// compile with: /clr
public interface struct I {
   void h();
};

public ref struct X : public I {
   virtual void f() new sealed = J {};   // C3653 no J in scope
   virtual void g() {}   // OK
   virtual void h() new sealed = I::h {};   // OK
};
```
