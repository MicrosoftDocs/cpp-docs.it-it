---
description: 'Altre informazioni su: errore del compilatore C3320'
title: Errore del compilatore C3320
ms.date: 11/04/2016
f1_keywords:
- C3320
helpviewer_keywords:
- C3320
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
ms.openlocfilehash: 2dde804792dec4f7a1564c680a45c78adf60eedf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337364"
---
# <a name="compiler-error-c3320"></a>Errore del compilatore C3320

'type': il nome del tipo non può essere uguale alla proprietà 'name' del modulo

Un tipo definito dall'utente (UDT) esportato, che può essere uno struct, una classe, un'enumerazione o un'Unione, non può avere lo stesso nome del parametro passato alla proprietà Name dell'attributo [Module](../../windows/attributes/module-cpp.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3320:

```cpp
// C3320.cpp
#include "unknwn.h"
[module(name="xx")];

[export] struct xx {   // C3320
// Try the following line instead
// [export] struct yy {
   int i;
};
```
