---
title: Errore del compilatore C3675
ms.date: 11/04/2016
f1_keywords:
- C3675
helpviewer_keywords:
- C3675
ms.assetid: 87461613-6633-430b-b95d-c7cb1bb63776
ms.openlocfilehash: c154a0fe1989c92bb5e07c0710d3846883d1a113
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50546315"
---
# <a name="compiler-error-c3675"></a>Errore del compilatore C3675

'function': è riservato perché 'property' è definito

Quando si dichiara una proprietà semplice, il compilatore genera get e set di metodi di accesso e quelli nomi sono presenti nell'ambito del programma.  I nomi generati dal compilatore sono creati anteponendo get _ and set _ al nome della proprietà.  Pertanto, è possibile dichiarare le funzioni con lo stesso nome di funzioni di accesso generato dal compilatore.

Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3675.

```
// C3675.cpp
// compile with: /clr /c
ref struct C {
public:
   property int Size;
   int get_Size() { return 0; }   // C3675
};
```