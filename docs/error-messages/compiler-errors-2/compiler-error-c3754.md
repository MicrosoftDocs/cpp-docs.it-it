---
description: 'Altre informazioni su: errore del compilatore C3754'
title: Errore del compilatore C3754
ms.date: 11/04/2016
f1_keywords:
- C3754
helpviewer_keywords:
- C3754
ms.assetid: 14b877bc-9277-40ec-af1c-196a58b45f10
ms.openlocfilehash: 1f6c32a94caf6b2045f177480f76aa0c7fc2a7fd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340138"
---
# <a name="compiler-error-c3754"></a>Errore del compilatore C3754

Costruttore di delegato: non è possibile chiamare la funzione membro ' Function ' su un'istanza di tipo ' type '

È stata effettuata una chiamata a una funzione tramite un puntatore a un tipo che non contiene la funzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3754:

```cpp
// C3754a.cpp
// compile with: /clr
using namespace System;

delegate void MyDel();

interface class MyInterface {};

ref struct MyClass : MyInterface {
   void f() {}
};

int main() {
   MyInterface^ p = gcnew MyClass;
   MyDel^ q = gcnew MyDel(p, &MyClass::f);   // C3754
   // try the following line instead
//   MyDel^ q = gcnew MyDel(safe_cast<MyClass^>(p), &MyClass::f);
}
```
