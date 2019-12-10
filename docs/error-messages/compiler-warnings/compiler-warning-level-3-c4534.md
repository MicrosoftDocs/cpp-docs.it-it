---
title: Avviso del compilatore (livello 3) C4534
ms.date: 11/04/2016
f1_keywords:
- c4534
helpviewer_keywords:
- C4534
ms.assetid: ec2adf3b-d7a1-4005-bb0c-5d219df78dc8
ms.openlocfilehash: 7d8ff442e84aa7563b1787e5a030297c034e1871
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74992064"
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
