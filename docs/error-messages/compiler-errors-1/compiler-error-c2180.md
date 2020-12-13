---
description: 'Altre informazioni su: errore del compilatore C2180'
title: Errore del compilatore C2180
ms.date: 11/04/2016
f1_keywords:
- C2180
helpviewer_keywords:
- C2180
ms.assetid: ea71b39e-b977-48a7-b7bd-af68ef5e263b
ms.openlocfilehash: 46ab20e3abfc35355543f90389677737e231257f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335181"
---
# <a name="compiler-error-c2180"></a>Errore del compilatore C2180

l'espressione di controllo ha tipo 'tipo'

L'espressione di controllo in **`if`** un' **`while`** istruzione,, **`for`** o **`do`** è un'espressione di cui viene eseguito il cast a **`void`** . Per risolvere questo problema, modificare l'espressione di controllo in una che produce un oggetto **`bool`** o un tipo che può essere convertito in **`bool`** .

L'esempio seguente genera l'errore C2180:

```c
// C2180.c

int main() {
   while ((void)1)   // C2180
      return 1;
   while (1)         // OK
      return 0;
}
```
