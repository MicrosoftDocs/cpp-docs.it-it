---
title: Errore del compilatore C3482
ms.date: 11/04/2016
f1_keywords:
- C3482
helpviewer_keywords:
- C3482
ms.assetid: bf99558e-bef4-421c-bb16-dcd9c54c1011
ms.openlocfilehash: ec0018fc1aafc7e3e0423608f4db9f78946e4597
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50432639"
---
# <a name="compiler-error-c3482"></a>Errore del compilatore C3482

è possibile utilizzare 'this' come acquisizione di espressioni lambda solo all'interno di una funzione membro non statica

Non è possibile passare `this` all'elenco di acquisizione di un'espressione lambda dichiarata in un metodo statico o in una funzione globale.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Convertire la funzione contenitore in un metodo non statico oppure

- Rimuovere il puntatore `this` dall'elenco di acquisizione dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3482:

```
// C3482.cpp
// compile with: /c

class C
{
public:
   static void staticMethod()
   {
      [this] {}(); // C3482
   }
};
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)