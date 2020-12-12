---
description: 'Altre informazioni su: errore del compilatore C2432'
title: Errore del compilatore C2432
ms.date: 11/04/2016
f1_keywords:
- C2432
helpviewer_keywords:
- C2432
ms.assetid: 0e3326e8-cab1-45a5-b48d-61edd33793e8
ms.openlocfilehash: 392108e0fd16952bc8bcf43682dc163c664171ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190016"
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
