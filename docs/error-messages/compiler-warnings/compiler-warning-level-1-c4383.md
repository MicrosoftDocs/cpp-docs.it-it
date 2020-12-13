---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4383'
title: Avviso del compilatore (livello 1) C4383
ms.date: 11/04/2016
f1_keywords:
- C4383
helpviewer_keywords:
- C4383
ms.assetid: 96c0e52d-874e-4b57-a154-0e49b6a00fae
ms.openlocfilehash: f6ece51ed497919cf444952f42130cc3a4bfb4a2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339930"
---
# <a name="compiler-warning-level-1-c4383"></a>Avviso del compilatore (livello 1) C4383

' instance_dereference_operator ': è possibile modificare il significato della dereferenziazione di un handle, quando esiste un operatore ' operator ' definito dall'utente; scrivere l'operatore come funzione statica per essere esplicito sull'operando

Quando si aggiunge un override dell'istanza definita dall'utente dell'operatore di dereferenziazione in un tipo gestito, è possibile eseguire l'override della capacità dell'operatore di dereferenziazione del tipo di restituire l'oggetto dell'handle. Si consiglia di scrivere un operatore di dereferenziazione statico definito dall'utente.

Per ulteriori informazioni, vedere [operatore handle all'oggetto (^)](../../extensions/handle-to-object-operator-hat-cpp-component-extensions.md) e [operatore di riferimento di rilevamento](../../extensions/tracking-reference-operator-cpp-component-extensions.md).

Inoltre, un operatore di istanza non è disponibile per altri compilatori di linguaggio tramite metadati a cui si fa riferimento. Per ulteriori informazioni, vedere [operatori definiti dall'utente (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4383.

```cpp
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
