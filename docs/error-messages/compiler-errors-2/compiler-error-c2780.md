---
title: Errore del compilatore C2780 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2780
dev_langs:
- C++
helpviewer_keywords:
- C2780
ms.assetid: 423793d8-a3b2-4f35-85f8-ae1d043e2b69
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a7e0bac3957ece3d2b0363f57a99443e9a3cf992
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024073"
---
# <a name="compiler-error-c2780"></a>Errore del compilatore C2780

'declaration': argomenti previsti: N, forniti: M

Un modello di funzione dispone di argomenti in numero insufficiente o eccessivo.

L'esempio seguente genera l'errore C2780 e mostra come risolverlo:

```
// C2780.cpp
template<typename T>
void f(T, T){}

int main() {
   f(1);  // C2780
   // try the following line instead
   // f(1,2);
}
```