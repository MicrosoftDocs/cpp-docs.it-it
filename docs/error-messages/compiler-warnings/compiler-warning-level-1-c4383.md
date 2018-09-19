---
title: Compilatore avviso (livello 1) C4383 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4383
dev_langs:
- C++
helpviewer_keywords:
- C4383
ms.assetid: 96c0e52d-874e-4b57-a154-0e49b6a00fae
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1e4ac56b4f94ee6ff7e6ade01dfadca0c00a92db
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46094845"
---
# <a name="compiler-warning-level-1-c4383"></a>Avviso del compilatore (livello 1) C4383

'operatore_dereferenziazione_istanza': il significato della dereferenziazione di un handle può variare quando esiste un operatore definito dall'utente 'operator'; scrivere l'operatore come una funzione statica per definire esplicito dell'operando

Quando si aggiunge un override di istanza definiti dall'utente di operatore di dereferenziazione di un tipo gestito, è potenzialmente sostituire la capacità di operatore di dereferenziazione del tipo di restituire l'oggetto dell'handle. Prendere in considerazione la scrittura di un valore statico, definita dall'utente operatore di dereferenziazione.

Per altre informazioni, vedere [operatore Handle a oggetto (^)](../../windows/handle-to-object-operator-hat-cpp-component-extensions.md) e [operatore di riferimento di rilevamento](../../windows/tracking-reference-operator-cpp-component-extensions.md).

Inoltre, un operatore di istanza non è disponibile ad altri compilatori di linguaggio tramite metadati di riferimento. Per altre informazioni, vedere [operatori definiti dall'utente (C + + CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4383.

```
// C4383.cpp
// compile with: /clr /W1

ref struct S {
   int operator*() { return 0; }   // C4383
};

ref struct T {
   static int operator*(T%) { return 0; }
};

int main() {
   S s;
   S^ pS = %s;

   T t;
   T^ pT = %t;
   T% rT = *pT;
}
```