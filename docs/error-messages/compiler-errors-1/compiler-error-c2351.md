---
title: Errore del compilatore C2351 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2351
dev_langs:
- C++
helpviewer_keywords:
- C2351
ms.assetid: 5439ccf6-66f6-4859-964c-c73f5eddfc1b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c92f955beaafa92a8259df4878301158d03c18ff
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46034772"
---
# <a name="compiler-error-c2351"></a>Errore del compilatore C2351

sintassi di inizializzazione costruttore C++ obsoleta

In un elenco di inizializzazione di nuovo stile per un costruttore, è necessario denominare in modo esplicito ogni classe di base diretta, anche se è l'unica classe di base.

L'esempio seguente genera l'errore C2351:

```
// C2351.cpp
// compile with: /c
class B {
public:
   B() : () {}   // C2351
   B() {}   // OK
};
```