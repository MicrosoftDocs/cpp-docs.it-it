---
title: Errore del compilatore C3482 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3482
dev_langs:
- C++
helpviewer_keywords:
- C3482
ms.assetid: bf99558e-bef4-421c-bb16-dcd9c54c1011
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9921c25575888ab2db1c092f9325002d1becb921
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053375"
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