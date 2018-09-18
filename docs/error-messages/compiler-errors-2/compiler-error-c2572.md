---
title: Errore del compilatore C2572 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2572
dev_langs:
- C++
helpviewer_keywords:
- C2572
ms.assetid: f1a42d69-727d-4ce5-88c8-d5f55dea66ac
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 56d49fe95dca7861b18d417dcd6049a12776e8d2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46057836"
---
# <a name="compiler-error-c2572"></a>Errore del compilatore C2572

'member': ridefinizione del parametro predefinito: parametro param

I parametri predefiniti non possono essere ridefiniti. Se è necessario un altro valore per il parametro, il parametro predefinito deve essere lasciato non definito.

L'esempio seguente genera l'errore C2572:

```
// C2572.cpp
// compile with: /c
void f(int i = 1);   // function declaration

// function definition
void f(int i = 1) {}   // C2572

// try the following line instead
// void f(int i) {}
```