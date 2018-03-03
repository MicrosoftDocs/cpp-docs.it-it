---
title: Errore del compilatore C2975 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2975
dev_langs:
- C++
helpviewer_keywords:
- C2975
ms.assetid: 526f6b9d-6c76-4c12-9252-1b1d7c1e06c7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f779ec2623b6b07f61c1e8347304288d0bcfe96a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

C2975 si verifica anche quando si utilizza #95; &#95; RIGA &#95; &#95; come costante in fase di compilazione con [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md). Una soluzione, è possibile eseguire la compilazione con [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) anziché **/ZI**.

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