---
description: 'Altre informazioni su: errore del compilatore C2728'
title: Errore del compilatore C2728
ms.date: 11/04/2016
f1_keywords:
- C2728
helpviewer_keywords:
- C2728
ms.assetid: 65635f91-1cd1-46e4-9ad7-14726d0546af
ms.openlocfilehash: 7ef24dd037f8d765c072a61320da64411248dbc1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245304"
---
# <a name="compiler-error-c2728"></a>Errore del compilatore C2728

'type': una matrice nativa non può contenere questo tipo

La sintassi di creazione della matrice è stata usata per creare una matrice di oggetti gestiti o WinRT. Non è possibile creare una matrice di oggetti gestiti o WinRT usando la sintassi di matrice nativa.

Per altre informazioni, vedere [matrice](../../extensions/arrays-cpp-component-extensions.md).

L'esempio seguente genera l'errore C2728 e mostra come risolverlo:

```cpp
// C2728.cpp
// compile with: /clr

int main() {
   int^ arr[5];   // C2728

   // try the following line instead
   array<int>^arr2;
}
```
