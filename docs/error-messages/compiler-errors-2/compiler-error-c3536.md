---
title: Errore del compilatore C3536
ms.date: 11/04/2016
f1_keywords:
- C3536
helpviewer_keywords:
- C3536
ms.assetid: 8d866075-866b-49eb-9979-ee27b308f7e3
ms.openlocfilehash: a140847b642ac2437b67aa957328c3b8fbfc592d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761569"
---
# <a name="compiler-error-c3536"></a>Errore del compilatore C3536

' symbol ': non può essere usato prima dell'inizializzazione

Impossibile utilizzare il simbolo indicato prima dell'inizializzazione. In pratica, ciò significa che una variabile non può essere usata per inizializzare se stessa.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non inizializzare una variabile con se stessa.

## <a name="example"></a>Esempio

L'esempio seguente restituisce C3536 perché ogni variabile è inizializzata con se stessa.

```cpp
// C3536.cpp
// Compile with /Zc:auto
int main()
{
   auto a = a;     //C3536
   auto b = &b;    //C3536
   auto c = c + 1; //C3536
   auto* d = &d;   //C3536
   auto& e = e;    //C3536
   return 0;
};
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)
