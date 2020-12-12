---
description: 'Altre informazioni su: errore del compilatore C2879'
title: Errore del compilatore C2879
ms.date: 11/04/2016
f1_keywords:
- C2879
helpviewer_keywords:
- C2879
ms.assetid: ac92b645-2394-49de-8632-43d44e0553ed
ms.openlocfilehash: 6060678f71bf36d0af2e94e380a046ea7916ef05
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194371"
---
# <a name="compiler-error-c2879"></a>Errore del compilatore C2879

' symbol ': a uno spazio dei nomi esistente può essere assegnato un nome alternativo in base a una definizione di alias dello spazio dei nomi

Non è possibile creare un [alias dello spazio dei nomi](../../cpp/namespaces-cpp.md#namespace_aliases) a un simbolo diverso da uno spazio dei nomi.

L'esempio seguente genera l'C2879:

```cpp
// C2879.cpp
int main() {
   int i;
   namespace A = i;   // C2879 i is not a namespace
}
```
