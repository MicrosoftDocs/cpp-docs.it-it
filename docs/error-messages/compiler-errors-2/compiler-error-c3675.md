---
description: 'Altre informazioni su: errore del compilatore C3675'
title: Errore del compilatore C3675
ms.date: 11/04/2016
f1_keywords:
- C3675
helpviewer_keywords:
- C3675
ms.assetid: 87461613-6633-430b-b95d-c7cb1bb63776
ms.openlocfilehash: 0e8ea8d3450cd7a145e596f7122a5d2cbb31c5fd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228742"
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
