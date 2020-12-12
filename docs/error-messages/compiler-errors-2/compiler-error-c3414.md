---
description: 'Altre informazioni su: errore del compilatore C3414'
title: Errore del compilatore C3414
ms.date: 11/04/2016
f1_keywords:
- C3414
helpviewer_keywords:
- C3414
ms.assetid: 715f5432-b509-4f8f-84f5-e1463bac490f
ms.openlocfilehash: c16f57be5665110d8186bdedbb2ada0ac2fdacaa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321927"
---
# <a name="compiler-error-c3414"></a>Errore del compilatore C3414

' member ': Impossibile definire la funzione membro importata

Un membro è stato definito nel codice definito anche in un assembly a cui si fa riferimento.

L'esempio seguente genera l'C3414:

```cpp
// C3414a2.cpp
// compile with: /clr /LD
public ref class MyClass {
public:
   void Test(){}
};
```

e quindi:

```cpp
// C3414b2.cpp
// compile with: /clr
#using <C3414a2.dll>

void MyClass::Test() {    // C3414
}

System::Object::Object() {    // C3414
}
```
