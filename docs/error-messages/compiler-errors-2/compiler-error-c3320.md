---
title: Errore del compilatore C3320 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3320
dev_langs:
- C++
helpviewer_keywords:
- C3320
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b67d419630d59902270638213ce7a79dd8b9e0c4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46078439"
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