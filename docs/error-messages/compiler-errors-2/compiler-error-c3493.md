---
description: 'Altre informazioni su: errore del compilatore C3493'
title: Errore del compilatore C3493
ms.date: 11/04/2016
f1_keywords:
- C3493
helpviewer_keywords:
- C3493
ms.assetid: 734b4257-12a3-436f-8488-c8c55ec81634
ms.openlocfilehash: 8f16a53dbaf5b9924a4874d29d560f9c089eb244
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315530"
---
# <a name="compiler-error-c3493"></a>Errore del compilatore C3493

impossibile acquisire in modo implicito 'var' perché non è stata specificata alcuna modalità di acquisizione predefinita

L'acquisizione di espressioni lambda vuota, `[]`, specifica che l'espressione lambda non acquisisce le variabili in modo esplicito o implicito.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Specificare una modalità di acquisizione predefinita oppure

- Acquisire una o più variabili in modo esplicito.

## <a name="examples"></a>Esempio

L'esempio seguente genera l'errore C3493 perché modifica una variabile esterna ma specifica la clausola di acquisizione vuota:

```cpp
// C3493a.cpp

int main()
{
   int m = 55;
   [](int n) { m = n; }(99); // C3493
}
```

L'esempio seguente risolve l'errore C3493 specificando la modalità di acquisizione predefinita mediante riferimento.

```cpp
// C3493b.cpp

int main()
{
   int m = 55;
   [&](int n) { m = n; }(99);
}
```

## <a name="see-also"></a>Vedi anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
