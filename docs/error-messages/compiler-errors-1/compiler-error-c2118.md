---
description: 'Altre informazioni su: errore del compilatore C2118'
title: Errore del compilatore C2118
ms.date: 11/04/2016
f1_keywords:
- C2118
helpviewer_keywords:
- C2118
ms.assetid: bf4315d0-f085-4323-b813-96ee61a13bde
ms.openlocfilehash: 89ddf355e233e4fb2d6f36a53369d85bf8ea019a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97170100"
---
# <a name="compiler-error-c2118"></a>Errore del compilatore C2118

indice negativo

Il valore che definisce la dimensione della matrice è maggiore della dimensione massima della matrice o minore di zero.

L'esempio seguente genera l'C2118:

```cpp
// C2118.cpp
int main() {
   int array1[-1];   // C2118
   int array2[3];   // OK
}
```
