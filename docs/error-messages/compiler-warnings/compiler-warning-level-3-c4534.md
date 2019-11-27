---
title: Avviso del compilatore (livello 3) C4534
ms.date: 11/04/2016
f1_keywords:
- c4534
helpviewer_keywords:
- C4534
ms.assetid: ec2adf3b-d7a1-4005-bb0c-5d219df78dc8
ms.openlocfilehash: 2e617b18f2c7ed3b51d25eb44101629bbadcef9d
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74189094"
---
# <a name="compiler-warning-level-3-c4534"></a>Avviso del compilatore (livello 3) C4534

' Constructor ' non sarà un costruttore predefinito per la classe ' Class ' a causa dell'argomento predefinito

Una classe non gestita può avere un costruttore con parametri che hanno valori predefiniti e il compilatore lo userà come costruttore predefinito. Una classe contrassegnata con la parola chiave `value` non utilizzerà un costruttore con i valori predefiniti per i relativi parametri come costruttore predefinito.

Per altre informazioni, vedere [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md) (Classi e struct).

L'esempio seguente genera l'C4534:

```cpp
// C4534.cpp
// compile with: /W3 /clr /WX
value class MyClass {
public:
   int ii;
   MyClass(int i = 9) {   // C4534, will not be the default constructor
      i++;
   }
};

int main() {
   MyClass ^ xx = gcnew MyClass;
   xx->ii = 0;
}
```