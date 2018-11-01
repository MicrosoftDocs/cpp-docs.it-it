---
title: Errore del compilatore C2975
ms.date: 11/04/2016
f1_keywords:
- C2975
helpviewer_keywords:
- C2975
ms.assetid: 526f6b9d-6c76-4c12-9252-1b1d7c1e06c7
ms.openlocfilehash: 66b7c0d61cbc8141b9ed3e5f6eb329b68eb00477
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50609755"
---
# <a name="compiler-error-c2975"></a>Errore del compilatore C2975

> «*argomenti*': argomento di modello non valido per '*tipo*',. prevista espressione costante in fase di compilazione

L'argomento di modello non corrisponde la dichiarazione di modello; un'espressione costante deve trovarsi tra parentesi acute. Le variabili non sono consentite come argomenti effettivi del modello. Controllare la definizione di modello per individuare i tipi corretti.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2975 e anche illustrato l'utilizzo corretto:

```cpp
// C2975.cpp
template<int I>
class X {};

int main() {
   int i = 4, j = 2;
   X<i + j> x1;   // C2975
   X<6> x2;   // OK
}
```

C2975 si verifica anche quando si usa &#95; &#95;riga&#95; &#95; come costante della fase di compilazione con [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md). Una soluzione, è possibile eseguire la compilazione con [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) invece di **/ZI**.

```cpp
// C2975b.cpp
// compile with: /ZI
// processor: x86
template<long line>
void test(void) {}

int main() {
   test<__LINE__>();   // C2975
}
```