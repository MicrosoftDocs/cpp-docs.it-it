---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4537'
title: Avviso del compilatore (livello 1) C4537
ms.date: 08/27/2018
f1_keywords:
- C4537
helpviewer_keywords:
- C4537
ms.assetid: 9454493c-d419-475e-8f35-9c00233c9329
ms.openlocfilehash: 39219361445832f51160311733c77d3becd8bc5f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294769"
---
# <a name="compiler-warning-level-1-c4537"></a>Avviso del compilatore (livello 1) C4537

> '*Object*':'*operator*' applicato a un tipo non definito dall'utente

## <a name="remarks"></a>Commenti

È stato passato un riferimento in cui era previsto un oggetto (tipo definito dall'utente). Un riferimento non è un oggetto, ma il codice assembler inline non è in grado di distinguere. Il compilatore genera il codice come se l' *oggetto* fosse un'istanza.

## <a name="example"></a>Esempio

L'esempio seguente genera C4537 e Mostra come risolverlo:

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
