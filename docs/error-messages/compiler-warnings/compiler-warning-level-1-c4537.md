---
title: Avviso del compilatore (livello 1) C4537
ms.date: 08/27/2018
f1_keywords:
- C4537
helpviewer_keywords:
- C4537
ms.assetid: 9454493c-d419-475e-8f35-9c00233c9329
ms.openlocfilehash: 81058f153228d3d8fbf4097c140962d0cb9677e5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186361"
---
# <a name="compiler-warning-level-1-c4537"></a>Avviso del compilatore (livello 1) C4537

> '*Object*':'*operator*' applicato a un tipo non definito dall'utente

## <a name="remarks"></a>Osservazioni

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
