---
description: 'Altre informazioni su: errore del compilatore C3153'
title: Errore del compilatore C3153
ms.date: 11/04/2016
f1_keywords:
- C3153
helpviewer_keywords:
- C3153
ms.assetid: d775d97e-2480-484f-81f1-88406b10f947
ms.openlocfilehash: 93b028e08963a8d124defe660966a75595c57771
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322046"
---
# <a name="compiler-error-c3153"></a>Errore del compilatore C3153

' Interface ': non è possibile creare un'istanza di un'interfaccia

Non è possibile creare un'istanza di un'interfaccia. Per usare i membri di un'interfaccia, derivare una classe dall'interfaccia, implementare i membri di interfaccia e quindi usare i membri.

L'esempio seguente genera l'C3153:

```cpp
// C3153.cpp
// compile with: /clr
interface class A {
};

int main() {
   A^ a = gcnew A;   // C3153
}
```
