---
description: 'Altre informazioni su: errore del compilatore C3482'
title: Errore del compilatore C3482
ms.date: 11/04/2016
f1_keywords:
- C3482
helpviewer_keywords:
- C3482
ms.assetid: bf99558e-bef4-421c-bb16-dcd9c54c1011
ms.openlocfilehash: 752ce53b590ef5c10c25e0d0e850c7c4cc2776bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315699"
---
# <a name="compiler-error-c3482"></a>Errore del compilatore C3482

è possibile utilizzare 'this' come acquisizione di espressioni lambda solo all'interno di una funzione membro non statica

Non è possibile passare **`this`** all'elenco di acquisizione di un'espressione lambda dichiarata in un metodo statico o in una funzione globale.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Convertire la funzione contenitore in un metodo non statico oppure

- Rimuovere il **`this`** puntatore dall'elenco di acquisizione dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3482:

```cpp
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

## <a name="see-also"></a>Vedi anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
