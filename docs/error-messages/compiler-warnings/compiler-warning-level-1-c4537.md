---
title: Compilatore avviso (livello 1) C4537 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4537
dev_langs:
- C++
helpviewer_keywords:
- C4537
ms.assetid: 9454493c-d419-475e-8f35-9c00233c9329
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 052d11d5bdf269d950abe1ef761adc055cbc6ce3
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43213363"
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