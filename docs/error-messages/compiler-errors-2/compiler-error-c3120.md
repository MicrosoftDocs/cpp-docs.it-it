---
title: Errore del compilatore C3120
ms.date: 11/04/2016
f1_keywords:
- C3120
helpviewer_keywords:
- C3120
ms.assetid: 9b6b210f-9948-4517-a4cc-b4aaadebde68
ms.openlocfilehash: 99d6280420111fde1a2e2187e3cbaeb529652d01
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50602670"
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