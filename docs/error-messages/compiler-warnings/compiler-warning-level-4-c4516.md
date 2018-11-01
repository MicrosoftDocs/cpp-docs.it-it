---
title: Avviso del compilatore (livello 4) C4516
ms.date: 11/04/2016
f1_keywords:
- C4516
helpviewer_keywords:
- C4516
ms.assetid: 6677bb1f-d26e-4ab9-8644-6b5a2a8f4ff8
ms.openlocfilehash: 8020103e8e20bf1a5e955cbfdfafc6a328b439e6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50564047"
---
# <a name="compiler-warning-level-4-c4516"></a>Avviso del compilatore (livello 4) C4516

'simbolo': le dichiarazioni di accesso sono deprecate. usando le dichiarazioni di membri forniscono un'alternativa migliore

Il comitato di ANSI C++ ha dichiarato le dichiarazioni di accesso (la modifica dell'accesso di un membro in una classe derivata senza il [usando](../../cpp/using-declaration.md) parola chiave) a non essere aggiornati. Le dichiarazioni di accesso potrebbero non essere supportate nelle versioni future di C++.

L'esempio seguente genera l'errore C4516:

```
// C4516.cpp
// compile with: /W4
class A
{
public:
   void x(char);
};

class B : protected A
{
public:
   A::x;  // C4516 on access-declaration
   // use the following line instead
   // using A::x; // using-declaration, ok
};

int main()
{
}
```