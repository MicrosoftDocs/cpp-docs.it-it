---
title: Errore del compilatore C3675
ms.date: 11/04/2016
f1_keywords:
- C3675
helpviewer_keywords:
- C3675
ms.assetid: 87461613-6633-430b-b95d-c7cb1bb63776
ms.openlocfilehash: 6772572d29765370d6cdbf52ed8470ff2f3f054e
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758073"
---
# <a name="compiler-error-c3675"></a>Errore del compilatore C3675

' Function ': è riservato perché è definito ' Property '

Quando si dichiara una proprietà semplice, il compilatore genera i metodi delle funzioni di accesso get e set e tali nomi sono presenti nell'ambito del programma.  I nomi generati dal compilatore vengono creati anteponendo get_ e set_ al nome della proprietà.  Non è pertanto possibile dichiarare funzioni con lo stesso nome delle funzioni di accesso generate dal compilatore.

Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3675.

```cpp
// C3675.cpp
// compile with: /clr /c
ref struct C {
public:
   property int Size;
   int get_Size() { return 0; }   // C3675
};
```
