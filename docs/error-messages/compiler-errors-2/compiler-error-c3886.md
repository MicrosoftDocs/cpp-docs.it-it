---
title: Errore del compilatore C3886 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3886
dev_langs:
- C++
helpviewer_keywords:
- C3886
ms.assetid: 485f6c12-cc1b-4146-9034-409a0a5e615e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 593c7e71c315801bcf080b60916a92d72ac32cd4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46064038"
---
# <a name="compiler-error-c3886"></a>Errore del compilatore C3886

'var': un membro dati literal deve essere inizializzato

Oggetto [letterale](../../windows/literal-cpp-component-extensions.md) variabile deve essere inizializzata al momento della dichiarazione.

L'esempio seguente genera l'errore C3886:

```
// C3886.cpp
// compile with: /clr /c
ref struct Y1 {
   literal int staticConst;   // C3886
   literal int staticConst2 = 0;   // OK
};
```