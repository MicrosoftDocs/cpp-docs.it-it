---
title: Errore del compilatore C3154
ms.date: 11/04/2016
f1_keywords:
- C3154
helpviewer_keywords:
- C3154
ms.assetid: 78005c74-eaaf-4ac2-88ae-6c25d01a302a
ms.openlocfilehash: d14b921afa3888f1a9497f19bfeaa013b147b086
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50430550"
---
# <a name="compiler-error-c3154"></a>Errore del compilatore C3154

Previsto ',' prima di puntini di sospensione. I puntini di sospensione non supportata in funzioni di matrice di parametri separati da virgola non.

Una funzione con argomenti variabili non è stata dichiarata in modo corretto.

Per altre informazioni, vedere [elenchi di argomenti variabili (...) (C + + CLI) ](../../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3154.

```
// C3154.cpp
// compile with: /clr
ref struct R {
   void Func(int ... array<int> ^);   // C3154
   void Func2(int i, ... array<int> ^){}   // OK
   void Func3(array<int> ^){}   // OK
   void Func4(... array<int> ^){}   // OK
};

int main() {
   R ^ r = gcnew R;
   r->Func4(1,2,3);
}
```