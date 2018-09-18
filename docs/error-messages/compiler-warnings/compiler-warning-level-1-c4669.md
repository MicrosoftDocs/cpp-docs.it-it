---
title: Compilatore avviso (livello 1) C4669 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4669
dev_langs:
- C++
helpviewer_keywords:
- C4669
ms.assetid: 97730679-e3dc-44d4-b2a8-aa65badc17f2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4f96bcf40b1fbc989daceabc810d019d1bb9aa98
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46060857"
---
# <a name="compiler-warning-level-1-c4669"></a>Avviso del compilatore (livello 1) C4669

'cast': conversione non affidabile: 'class' è un oggetto di tipo gestito o WinRT

Un cast contiene un tipo Windows Runtime o gestito. Il compilatore completa il cast eseguendo una copia bit per bit di un puntatore all'altro, ma non fornisce altri controlli. Per risolvere il problema, non eseguire il cast di classi contenenti membri gestiti o tipi Windows Runtime.

L'esempio seguente genera l'errore C4669 e mostra come risolverlo:

```
// C4669.cpp
// compile with: /clr /W1
ref struct A {
   int i;
   Object ^ pObj;   // remove the managed member to fix the warning
};

ref struct B {
   int j;
};

int main() {
   A ^ a = gcnew A;
   B ^ b = reinterpret_cast<B ^>(a);   // C4669
}
```