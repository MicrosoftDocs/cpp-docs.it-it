---
title: Errore del compilatore C2975 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2975
dev_langs:
- C++
helpviewer_keywords:
- C2975
ms.assetid: 526f6b9d-6c76-4c12-9252-1b1d7c1e06c7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 53cb020dc0d456f10b7cfbae82a16b2ebe5fda6b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33246983"
---
# <a name="compiler-error-c2975"></a>Errore del compilatore C2975

> '*argomento*': argomento di modello non valido per '*tipo*', è prevista un'espressione costante in fase di compilazione

L'argomento di modello non corrisponde alla dichiarazione di modello; un'espressione costante deve trovarsi tra parentesi angolari. Non sono consentite le variabili come argomenti effettivi di modello. Controllare la definizione di modello per individuare i tipi corretti.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2975 e inoltre illustrato l'utilizzo corretto:

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

C2975 si verifica anche quando si usa &#95; &#95;riga&#95; &#95; come una costante in fase di compilazione con [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md). Una soluzione, è possibile eseguire la compilazione con [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) anziché **/ZI**.

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