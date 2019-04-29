---
title: Avviso del compilatore (livello 3) C4534
ms.date: 11/04/2016
f1_keywords:
- c4534
helpviewer_keywords:
- C4534
ms.assetid: ec2adf3b-d7a1-4005-bb0c-5d219df78dc8
ms.openlocfilehash: 81445ff42aca78a8e40e9c88eff4bb76a41a8669
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401878"
---
# <a name="compiler-warning-level-3-c4534"></a>Avviso del compilatore (livello 3) C4534

'constructor' non è un costruttore predefinito per la classe 'class' a causa di un argomento predefinito

Una classe non gestita può avere un costruttore con parametri con valori predefiniti e il compilatore userà questo come il costruttore predefinito. Una classe contrassegnata con il `value` parola chiave non utilizzerà un costruttore con valori predefiniti per i relativi parametri come un costruttore predefinito.

Per altre informazioni, vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md).

L'esempio seguente genera l'errore C4534:

```
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