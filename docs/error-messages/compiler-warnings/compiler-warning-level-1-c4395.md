---
title: Avviso del compilatore (livello 1) C4395
ms.date: 11/04/2016
f1_keywords:
- C4395
helpviewer_keywords:
- C4395
ms.assetid: 8051469a-3a39-4677-80f7-1300fbffe8ea
ms.openlocfilehash: 074e00ff2ae44986127f629da6ef38f9f5df7212
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73964876"
---
# <a name="compiler-warning-level-1-c4395"></a>Avviso del compilatore (livello 1) C4395

' Function ': la funzione membro verrà richiamata su una copia del membro dati initonly ' member '

Una funzione membro è stata chiamata su un membro dati [initonly (C++/CLI)](../../dotnet/initonly-cpp-cli.md) .  C4395 avverte che il membro dati **initonly** non può essere modificato dalla funzione.

L'esempio seguente genera l'C4395:

```cpp
// C4395.cpp
// compile with: /W1 /clr
public value class V {
public:
   V(int data) : m_data(data) {}

   void Mutate() {
      System::Console::WriteLine("Enter Mutate: m_data = {0}", m_data);
      m_data *= 2;
      System::Console::WriteLine("Leave Mutate: m_data = {0}", m_data);
   }

   int m_data;
};

public ref class R {
public:
   static void f() {
      System::Console::WriteLine("v.m_data = {0}", v.m_data);
      v.Mutate();   // C4395
      System::Console::WriteLine("v.m_data = {0}", v.m_data);
   }

private:
   initonly static V v = V(4);
};

int main() {
   R::f();
}
```