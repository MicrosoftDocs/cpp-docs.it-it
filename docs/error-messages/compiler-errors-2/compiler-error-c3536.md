---
title: Errore del compilatore C3536
ms.date: 11/04/2016
f1_keywords:
- C3536
helpviewer_keywords:
- C3536
ms.assetid: 8d866075-866b-49eb-9979-ee27b308f7e3
ms.openlocfilehash: 2380a9d42525cfb662fa014b89751d6dc8b9f192
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91508244"
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

[Parola chiave auto](../../cpp/auto-cpp.md)
