---
title: Errore del compilatore C2879
ms.date: 11/04/2016
f1_keywords:
- C2879
helpviewer_keywords:
- C2879
ms.assetid: ac92b645-2394-49de-8632-43d44e0553ed
ms.openlocfilehash: 9ac8f5e5edb1a6ed7314c5b5d125fcc9bfbe67de
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677955"
---
# <a name="compiler-error-c2879"></a>Errore del compilatore C2879

'symbol': solo uno spazio dei nomi può essere attribuito un nome alternativo da una definizione di alias dello spazio dei nomi

Non è possibile creare un [alias dello spazio dei nomi](../../cpp/namespaces-cpp.md#namespace_aliases) a un simbolo diverso da uno spazio dei nomi.

L'esempio seguente genera l'errore C2879:

```
// C2879.cpp
int main() {
   int i;
   namespace A = i;   // C2879 i is not a namespace
}
```