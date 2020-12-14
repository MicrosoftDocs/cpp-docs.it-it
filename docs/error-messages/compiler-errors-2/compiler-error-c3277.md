---
description: 'Altre informazioni su: errore del compilatore C3277'
title: Errore del compilatore C3277
ms.date: 11/04/2016
f1_keywords:
- C3277
helpviewer_keywords:
- C3277
ms.assetid: 8ac5f476-e30c-4879-92c6-f03cdbd74045
ms.openlocfilehash: ca04074dd077c63355f7da9a6a5feabcc0d03fac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228989"
---
# <a name="compiler-error-c3277"></a>Errore del compilatore C3277

non è possibile definire un'enumerazione non gestità enum ' all'interno di ' type ' gestito

Un'enumerazione è stata definita in modo non corretto all'interno di un tipo gestito.

L'esempio seguente genera l'C3277:

```cpp
// C3277a.cpp
// compile with: /clr
ref class A
{
   enum E {e1,e2};   // C3277
   // try the following line instead
   // enum class E {e1,e2};
};

int main()
{
}
```
