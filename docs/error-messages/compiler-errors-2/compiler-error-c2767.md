---
title: Errore del compilatore C2767 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2767
dev_langs:
- C++
helpviewer_keywords:
- C2767
ms.assetid: e8f84178-a160-4d71-a236-07e4fcc11e96
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d6301471b4797bf3a1cb6f3936e54ab8bfb536b6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051893"
---
# <a name="compiler-error-c2767"></a>Errore del compilatore C2767

gestita o mancata corrispondenza della dimensione WinRTarray: previsto di argomenti di N - forniti M

Una dichiarazione di matrice gestita o WinRT è in formato non valido. Per altre informazioni, vedere [matrice](../../windows/arrays-cpp-component-extensions.md).

L'esempio seguente genera l'errore C2767 e mostra come risolverlo:

```
// C2767.cpp
// compile with: /clr
int main() {
   array<int> ^p1 = new array<int>(2,3); // C2767
   array<int> ^p2 = new array<int>(2);   // OK
}
```