---
title: Errore del compilatore C2748
ms.date: 11/04/2016
f1_keywords:
- C2748
helpviewer_keywords:
- C2748
ms.assetid: b63ac78b-a200-499c-afea-15af1a1e819e
ms.openlocfilehash: 251492b736ba3325ed263a9a8754fc8fa480c664
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58771877"
---
# <a name="compiler-error-c2748"></a>Errore del compilatore C2748

per la creazione della matrice gestita o WinRT occorre specificare la dimensione della matrice o l'inizializzatore di matrice

Una matrice gestita o WinRT è in formato non valido. Per altre informazioni, vedere [matrice](../../extensions/arrays-cpp-component-extensions.md).

L'esempio seguente genera l'errore C2748 e mostra come risolverlo:

```
// C2748.cpp
// compile with: /clr
int main() {
   array<int> ^p1 = new array<int>();   // C2748
   // try the following line instead
   array<int> ^p2 = new array<int>(2);
}
```