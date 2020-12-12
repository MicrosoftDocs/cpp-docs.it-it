---
description: 'Altre informazioni su: errore del compilatore C2975'
title: Errore del compilatore C2975
ms.date: 11/04/2016
f1_keywords:
- C2975
helpviewer_keywords:
- C2975
ms.assetid: 526f6b9d-6c76-4c12-9252-1b1d7c1e06c7
ms.openlocfilehash: 9f9108d1dc4e0fe61b6dd2135fb69bbaedfaedf0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210348"
---
# <a name="compiler-error-c2975"></a>Errore del compilatore C2975

> '*argument*': argomento di modello non valido per '*Type*', espressione costante in fase di compilazione prevista

L'argomento di modello non corrisponde alla dichiarazione del modello. all'interno delle parentesi angolari dovrebbe essere presente un'espressione costante. Le variabili non sono consentite come argomenti effettivi del modello. Controllare la definizione di modello per individuare i tipi corretti.

## <a name="example"></a>Esempio

L'esempio seguente genera C2975 e Mostra anche l'uso corretto:

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

C2975 si verifica anche quando si usa &#95;&#95;riga&#95;&#95; come costante in fase di compilazione con [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md). Una soluzione è la compilazione con [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) anziché con **/Zi**.

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
