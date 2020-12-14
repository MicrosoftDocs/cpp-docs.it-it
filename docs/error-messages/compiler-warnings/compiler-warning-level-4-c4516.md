---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4516'
title: Avviso del compilatore (livello 4) C4516
ms.date: 11/04/2016
f1_keywords:
- C4516
helpviewer_keywords:
- C4516
ms.assetid: 6677bb1f-d26e-4ab9-8644-6b5a2a8f4ff8
ms.openlocfilehash: 945cf057b030a032afc2dd6dd3084df482f8a9a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241209"
---
# <a name="compiler-warning-level-4-c4516"></a>Avviso del compilatore (livello 4) C4516

' Class:: symbol ': le dichiarazioni di accesso sono deprecate. le dichiarazioni using del membro forniscono un'alternativa migliore

Il comitato ANSI C++ ha dichiarato che le dichiarazioni di accesso (modifica dell'accesso di un membro in una classe derivata senza la parola chiave [using](../../cpp/using-declaration.md) ) non sono aggiornate. Le dichiarazioni di accesso potrebbero non essere supportate dalle future versioni di C++.

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
