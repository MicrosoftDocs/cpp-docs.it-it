---
title: Errore del compilatore C3320
ms.date: 11/04/2016
f1_keywords:
- C3320
helpviewer_keywords:
- C3320
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
ms.openlocfilehash: 622e7366dda4cd6693d9b6128855fa0966e07952
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50581467"
---
# <a name="compiler-error-c3320"></a>Errore del compilatore C3320

'type': il nome del tipo non può essere uguale alla proprietà 'name' del modulo

Un esportato tipo definito dall'utente (UDT), che può essere una struct, classe, enum o unione, non può avere lo stesso nome del parametro passato per il [modulo](../../windows/module-cpp.md) proprietà name dell'attributo.

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