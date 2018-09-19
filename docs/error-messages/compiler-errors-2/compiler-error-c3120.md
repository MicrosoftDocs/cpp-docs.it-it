---
title: Errore del compilatore C3120 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3120
dev_langs:
- C++
helpviewer_keywords:
- C3120
ms.assetid: 9b6b210f-9948-4517-a4cc-b4aaadebde68
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ae515dcf7f6eae8af1a6356c58f38e69cb039441
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46136140"
---
# <a name="compiler-error-c3120"></a>Errore del compilatore C3120

'method_name': i metodi di interfaccia non possono accettare un elenco di argomenti variabili

Un metodo di interfaccia non può accettare un elenco di argomenti variabili. Ad esempio, la definizione dell'interfaccia seguente genera l'errore C3120:

```
// C3120.cpp
__interface A {
int X(int i, ...);    // C3120
};

int main(void) { return(0); }
```