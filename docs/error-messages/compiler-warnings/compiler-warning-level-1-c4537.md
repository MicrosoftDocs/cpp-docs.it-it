---
title: Avviso del compilatore (livello 1) C4537
ms.date: 08/27/2018
f1_keywords:
- C4537
helpviewer_keywords:
- C4537
ms.assetid: 9454493c-d419-475e-8f35-9c00233c9329
ms.openlocfilehash: 2f97be4e1aaa5143df685cb95935d350e6f02534
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50441317"
---
# <a name="compiler-warning-level-1-c4537"></a>Avviso del compilatore (livello 1) C4537

> «*oggetti*': '*operatore*' applicato al tipo non definito dall'utente

## <a name="remarks"></a>Note

È stato passato un riferimento in cui era previsto un oggetto (tipo definito dall'utente). Un riferimento non è un oggetto, ma non è in grado di distinguere codice assembler inline. Il compilatore genera il codice come se *oggetto* fosse un'istanza.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4537 e Mostra come risolverlo:

```cpp
// C4537.cpp
// compile with: /W1 /c
// processor: x86
struct S {
    int member;
};

void f1(S &s) {
    __asm mov eax, s.member;   // C4537
    // try the following code instead
    // or, make the declaration "void f1(S s)"
    /*
    mov eax, s
    mov eax, [eax]s.member
    */
}
```