---
title: Errore del compilatore C2762 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2762
dev_langs:
- C++
helpviewer_keywords:
- C2762
ms.assetid: 8b81a801-fd48-40a1-8bee-0748795b12e4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2eebc34608a718e2e1a70f5d8c7e8f02193221cc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086213"
---
# <a name="compiler-error-c2762"></a>Errore del compilatore C2762

'class': espressione non valida come argomento di modello per 'argument'

Quando si usa [/Za](../../build/reference/za-ze-disable-language-extensions.md), il compilatore non converte un valore integrale a un puntatore.

L'esempio seguente genera l'errore C2762:

```
// C2762.cpp
// compile with: /Za
template<typename T, T *pT>
class X2 {};

void f2() {
   X2<int, 0> x21;   // C2762
   // try the following line instead
   // X2<int, static_cast<int *>(0)> x22;
}
```