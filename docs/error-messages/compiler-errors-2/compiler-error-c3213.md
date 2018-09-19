---
title: Errore del compilatore C3213 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3213
dev_langs:
- C++
helpviewer_keywords:
- C3213
ms.assetid: 1f079e36-b3e9-40f8-8e95-08eeba3adc82
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a23f61dc8170ff7cd5638d2b2f394d288f48c5f3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112980"
---
# <a name="compiler-error-c3213"></a>Errore del compilatore C3213

classe base 'base_type' meno accessibile di 'derived_type'

Un tipo che sarà visibile da un assembly deve usare le classi base visibili pubblicamente.

L'esempio seguente genera l'errore C3213:

```
// C3213.cpp
// compile with: /clr
private ref struct privateG {
public:
   int i;
};

public ref struct publicG {
public:
   int i;
};

public ref struct V : public privateG {   // C3213
public:
   int j;
};

public ref struct W: public publicG {   // OK
public:
   int j;
};
```