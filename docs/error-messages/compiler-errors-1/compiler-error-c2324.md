---
title: Errore del compilatore C2324 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2324
dev_langs:
- C++
helpviewer_keywords:
- C2324
ms.assetid: 215f0544-85b0-452d-825f-17a388b6a61c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d9a92b3e97c7484a7aa0126659783ef821730fe4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46089281"
---
# <a name="compiler-error-c2324"></a>Errore del compilatore C2324

'identifier': imprevisto a destra di 'name'

Un distruttore viene chiamato utilizzando un identificatore non corretta.

L'esempio seguente genera l'errore C2324:

```
// C2324.cpp
class A {};
typedef A* pA_t;
int i;

int main() {
   pA_t * ppa = new pA_t;
   ppa->~i;   // C2324
   ppa->~pA_t();   // OK
}
```