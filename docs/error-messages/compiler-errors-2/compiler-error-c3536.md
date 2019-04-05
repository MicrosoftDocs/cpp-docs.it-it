---
title: Errore del compilatore C3536
ms.date: 11/04/2016
f1_keywords:
- C3536
helpviewer_keywords:
- C3536
ms.assetid: 8d866075-866b-49eb-9979-ee27b308f7e3
ms.openlocfilehash: a16c5bd46d806d09861d5734b637c2c9d9b2f9d0
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031902"
---
# <a name="compiler-error-c3536"></a>Errore del compilatore C3536

'symbol': non è possibile usare prima che venga inizializzata

Impossibile utilizzare il simbolo indicato prima che venga inizializzata. In pratica, ciò significa che una variabile non può essere usata per inizializzare se stessa.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non si Inizializza una variabile con se stesso.

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3536 perché ogni variabile viene inizializzata con se stesso.

```
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

[Parola chiave auto](../../cpp/auto-keyword.md)