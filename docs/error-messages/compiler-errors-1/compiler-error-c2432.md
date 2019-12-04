---
title: Errore del compilatore C2432
ms.date: 11/04/2016
f1_keywords:
- C2432
helpviewer_keywords:
- C2432
ms.assetid: 0e3326e8-cab1-45a5-b48d-61edd33793e8
ms.openlocfilehash: d4234626bc246d6da87be68b03d44562dd5990ff
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744511"
---
# <a name="compiler-error-c2432"></a>Errore del compilatore C2432

riferimento non valido ai dati a 16 bit in ' Identifier '

Un registro a 16 bit viene utilizzato come indice o come registro di base. Il compilatore non supporta il riferimento a dati a 16 bit. i registri a 16 bit non possono essere usati come registri di indice o di base durante la compilazione per il codice a 32 bit.

L'esempio seguente genera l'C2432:

```cpp
// C2432.cpp
// processor: x86
int main() {
   _asm mov eax, DWORD PTR [bx]   // C2432
}
```
