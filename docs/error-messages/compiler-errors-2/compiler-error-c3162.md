---
description: 'Altre informazioni su: errore del compilatore C3162'
title: Errore del compilatore C3162
ms.date: 11/04/2016
f1_keywords:
- C3162
helpviewer_keywords:
- C3162
ms.assetid: 0d4c4a24-1456-4191-b7d8-c38cb7b17c32
ms.openlocfilehash: ca44b27607a34a469a5fd6fc1371e1510452247a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242314"
---
# <a name="compiler-error-c3162"></a>Errore del compilatore C3162

' type ': un tipo di riferimento con un distruttore non può essere utilizzato come tipo di membro dati statico ' member '

Il Common Language Runtime non è in grado di stabilire quando eseguire un distruttore definito dall'utente quando la classe contiene anche la funzione membro statica.

Un distruttore non verrà mai eseguito, a meno che l'oggetto non venga eliminato in modo esplicito.

Per ulteriori informazioni, vedere,

- [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Problemi comuni relativi alla migrazione di Visual C++ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3162.

```cpp
// C3162.cpp
// compile with: /clr /c
ref struct A {
   ~A() { System::Console::WriteLine("in destructor"); }
   static A i;   // C3162
   static A^ a = gcnew A;   // OK
};

int main() {
   A ^ a = gcnew A;
   delete a;
}
```
