---
title: Errore del compilatore C2550 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2550
dev_langs:
- C++
helpviewer_keywords:
- C2550
ms.assetid: 3293f53e-ee66-4035-920d-34e115c3a24c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dd132184a993f27ec04a913cfef2aed07f8bd4a8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062514"
---
# <a name="compiler-error-c2550"></a>Errore del compilatore C2550

'identifier': gli elenchi di inizializzatori di costruttore sono consentiti solo nella definizione del costruttore

Un elenco di inizializzatori di classe di base viene usato nella definizione di una funzione che non è un costruttore.

L'esempio seguente genera l'errore C2550:

```
// C2550.cpp
// compile with: /c
class C {
public:
   C();
};

class D : public C {
public:
   D();
   void func();
};

void D::func() : C() {}  // C2550
D::D() : C() {}   // OK
```