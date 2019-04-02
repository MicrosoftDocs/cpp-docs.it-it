---
title: Errore del compilatore C2728
ms.date: 11/04/2016
f1_keywords:
- C2728
helpviewer_keywords:
- C2728
ms.assetid: 65635f91-1cd1-46e4-9ad7-14726d0546af
ms.openlocfilehash: 1fbbc3d63386ebe98a447de8b7166a5263d2168f
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767418"
---
# <a name="compiler-error-c2728"></a>Errore del compilatore C2728

'type': una matrice nativa non può contenere questo tipo

La sintassi di creazione della matrice è stata usata per creare una matrice di oggetti gestiti o WinRT. Non è possibile creare una matrice di oggetti gestiti o WinRT usando la sintassi di matrice nativa.

Per altre informazioni, vedere [matrice](../../extensions/arrays-cpp-component-extensions.md).

L'esempio seguente genera l'errore C2728 e mostra come risolverlo:

```
// C2728.cpp
// compile with: /clr

int main() {
   int^ arr[5];   // C2728

   // try the following line instead
   array<int>^arr2;
}
```
