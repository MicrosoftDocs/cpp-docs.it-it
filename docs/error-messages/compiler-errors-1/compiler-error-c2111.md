---
title: Errore del compilatore C2111 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2111
dev_langs:
- C++
helpviewer_keywords:
- C2111
ms.assetid: 38fd42ec-1480-4a44-aaca-ae4593ed5f50
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d1fcfac1e268ae3e8c6a16af31a1e7f06c073a5d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46023423"
---
# <a name="compiler-error-c2111"></a>Errore del compilatore C2111

'+': l'addizione di puntatori richiede un operando integrale

Si è provato ad aggiungere un valore non integrale a un puntatore usando l'operatore più ( `+` ).

L'esempio seguente genera l'errore C2111:

```
// C2111.cpp
int main() {
   int *a = 0, *pa = 0, b = 0;
   double d = 0.00;

   a = pa + d;   // C2111
   a = pa + b;   // OK
}
```