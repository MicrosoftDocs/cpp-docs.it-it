---
description: 'Altre informazioni su: errore del compilatore C2624'
title: Errore del compilatore C2624
ms.date: 11/04/2016
f1_keywords:
- C2624
helpviewer_keywords:
- C2624
ms.assetid: 32f2ec15-a7cd-4049-a64b-131746d3152b
ms.openlocfilehash: 4fa52e5192bd71c9fcdd3608b4161d1e5da57bdf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174676"
---
# <a name="compiler-error-c2624"></a>Errore del compilatore C2624

non è possibile usare le classi locali per dichiarare variabili ' extern '

Non è possibile usare una classe o una struttura locale per dichiarare **`extern`** variabili.

L'esempio seguente genera l'C2624:

```cpp
// C2624.cpp
int main() {
   struct C {};
   extern C ac;   // C2624
}
```
