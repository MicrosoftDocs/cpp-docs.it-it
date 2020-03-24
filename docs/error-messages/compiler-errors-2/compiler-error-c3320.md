---
title: Errore del compilatore C3320
ms.date: 11/04/2016
f1_keywords:
- C3320
helpviewer_keywords:
- C3320
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
ms.openlocfilehash: 0289d49ebbb0e30153beb6b0b2bc758bff5ef118
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80201305"
---
# <a name="compiler-error-c3320"></a>Errore del compilatore C3320

'type': il nome del tipo non può essere uguale alla proprietà 'name' del modulo

Un tipo definito dall'utente (UDT) esportato, che può essere uno struct, una classe, un'enumerazione o un'Unione, non può avere lo stesso nome del parametro passato alla proprietà Name dell'attributo [Module](../../windows/module-cpp.md) .

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
