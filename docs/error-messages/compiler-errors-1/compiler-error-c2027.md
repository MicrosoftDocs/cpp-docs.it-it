---
title: Errore del compilatore C2027 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2027
dev_langs:
- C++
helpviewer_keywords:
- C2027
ms.assetid: a39150c0-ec04-45ec-934c-a838bfe76627
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 69aae289fbab56cd77e544118909b2d7ef72ae0c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032042"
---
# <a name="compiler-error-c2027"></a>Errore del compilatore C2027

uso del tipo non definito 'type'

Un tipo non può essere utilizzato fino a quando non è definito. Per risolvere l'errore, assicurarsi che il tipo sia definito completamente prima di farvi riferimento.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2027.

```
// C2027.cpp
class C;
class D {
public:
   void func() {
   }
};

int main() {
   C *pC;
   pC->func();   // C2027

   D *pD;
   pD->func();
}
```

## <a name="example"></a>Esempio

È possibile dichiarare un puntatore a un tipo dichiarato ma non definito.  Ma Visual C++ non consente un riferimento a un tipo non definito.

L'esempio seguente genera l'errore C2027.

```
// C2027_b.cpp
class A;
A& CreateA();

class B;
B* CreateB();

int main() {
   CreateA();   // C2027
   CreateB();   // OK
}
```