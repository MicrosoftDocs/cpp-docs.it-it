---
description: 'Altre informazioni su: errore del compilatore C3821'
title: Errore del compilatore C3821
ms.date: 11/04/2016
f1_keywords:
- C3821
helpviewer_keywords:
- C3821
ms.assetid: 2b327c7a-5faf-443c-ae82-944fae25b4df
ms.openlocfilehash: 745efeb21933e06f65f9e700ad5780da8234da90
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249373"
---
# <a name="compiler-error-c3821"></a>Errore del compilatore C3821

' Function ': Impossibile utilizzare un tipo o una funzione gestita in una funzione non gestita

Le funzioni con assembly inline o [setjmp](../../c-runtime-library/reference/setjmp.md) non possono contenere tipi di valore o classi gestite. Per correggere l'errore, rimuovere l'assembly inline e `setjmp` rimuovere gli oggetti gestiti.

C3821 può verificarsi anche se si tenta di usare l'archiviazione automatica in una funzione vararg.  Per altre informazioni, vedere [elenchi di argomenti variabili (...) (C++/CLI)](../../extensions/variable-argument-lists-dot-dot-dot-cpp-cli.md) e [semantica dello stack C++ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## <a name="examples"></a>Esempio

L'esempio seguente genera l'C3821.

```cpp
// C3821a.cpp
// compile with: /clr /c
public ref struct R {};
void test1(...) {
   R r;   // C3821
}
```

L'esempio seguente genera l'C3821.

```cpp
// C3821b.cpp
// compile with: /clr
// processor: /x86
ref class A {
   public:
   int i;
};

int main() {
   // cannot use managed classes in this function
   A ^a;

   __asm {
      nop
   }
} // C3821
```
