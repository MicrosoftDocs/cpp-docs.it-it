---
title: Errore del compilatore C2046
ms.date: 11/04/2016
f1_keywords:
- C2046
helpviewer_keywords:
- C2046
ms.assetid: f0c8f9dd-dbd7-4c4a-8838-fde54208ec71
ms.openlocfilehash: e83860e9f69bab864ad2cf02503d9af802e86d29
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74740364"
---
# <a name="compiler-error-c2046"></a>Errore del compilatore C2046

case non valido

La parola chiave `case` può trovarsi solo all'interno di un'istruzione `switch` .

L'esempio seguente genera l'errore C2046:

```cpp
// C2046.cpp
int main() {
   case 0:   // C2046
}
```

Possibile soluzione:

```cpp
// C2046b.cpp
int main() {
   int i = 0;

   switch(i) {
      case 0:
      break;

      default:
      break;
   }
}
```
