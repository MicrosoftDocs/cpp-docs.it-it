---
title: Errore del compilatore C2432
ms.date: 11/04/2016
f1_keywords:
- C2432
helpviewer_keywords:
- C2432
ms.assetid: 0e3326e8-cab1-45a5-b48d-61edd33793e8
ms.openlocfilehash: e2983d966a6290ce19713c63feb502c8ffc74bf1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50631241"
---
# <a name="compiler-error-c2432"></a>Errore del compilatore C2432

riferimento non valido per i dati a 16 bit in 'identifier'

Un registro a 16 bit viene utilizzato come un indice o un registro base. Il compilatore non supporta che fanno riferimento a dati a 16 bit. non sono utilizzabile a 16 registri come registro base o di indice durante la compilazione di codice a 32 bit.

L'esempio seguente genera l'errore C2432:

```
// C2432.cpp
// processor: x86
int main() {
   _asm mov eax, DWORD PTR [bx]   // C2432
}
```