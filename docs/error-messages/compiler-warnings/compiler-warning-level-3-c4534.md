---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4534'
title: Avviso del compilatore (livello 3) C4534
ms.date: 11/04/2016
f1_keywords:
- c4534
helpviewer_keywords:
- C4534
ms.assetid: ec2adf3b-d7a1-4005-bb0c-5d219df78dc8
ms.openlocfilehash: 6a13b27716488fa04f6342da76fdcd32c5635f2d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257888"
---
# <a name="compiler-warning-level-3-c4534"></a>Avviso del compilatore (livello 3) C4534

' Constructor ' non sarà un costruttore predefinito per la classe ' Class ' a causa dell'argomento predefinito

Una classe non gestita può avere un costruttore con parametri che hanno valori predefiniti e il compilatore lo userà come costruttore predefinito. Una classe contrassegnata con la `value` parola chiave non utilizzerà un costruttore con i valori predefiniti per i parametri come costruttore predefinito.

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
