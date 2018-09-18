---
title: Errore del compilatore C2432 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2432
dev_langs:
- C++
helpviewer_keywords:
- C2432
ms.assetid: 0e3326e8-cab1-45a5-b48d-61edd33793e8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9ca8c2c62415b6ec3c29c820a23677a87a2695c5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46055910"
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