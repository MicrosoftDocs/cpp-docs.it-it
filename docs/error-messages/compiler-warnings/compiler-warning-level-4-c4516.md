---
title: Avviso del compilatore (livello 4) C4516
ms.date: 11/04/2016
f1_keywords:
- C4516
helpviewer_keywords:
- C4516
ms.assetid: 6677bb1f-d26e-4ab9-8644-6b5a2a8f4ff8
ms.openlocfilehash: 23e1ec488a661e68d5b53fba50661354182a1015
ms.sourcegitcommit: d0504e2337bb671e78ec6dd1c7b05d89e7adf6a7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/02/2019
ms.locfileid: "74683173"
---
# <a name="compiler-warning-level-4-c4516"></a>Avviso del compilatore (livello 4) C4516

' Class:: symbol ': le dichiarazioni di accesso sono deprecate. le dichiarazioni using del membro forniscono un'alternativa migliore

Il Comitato C++ ANSI ha dichiarato che le dichiarazioni di accesso (modifica dell'accesso di un membro in una classe derivata senza la parola chiave [using](../../cpp/using-declaration.md) ) non sono aggiornate. Le dichiarazioni di accesso potrebbero non essere supportate nelle versioni future C++di.

L'esempio seguente genera l'C4516:

```cpp
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