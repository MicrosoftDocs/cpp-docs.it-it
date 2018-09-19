---
title: Compilatore avviso (livello 1) C4566 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4566
dev_langs:
- C++
helpviewer_keywords:
- C4566
ms.assetid: 65f40730-e86f-447c-b37b-16caadcfe311
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c25ff9d2a4c915570a28752d11778983f2cf2fc3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46049176"
---
# <a name="compiler-warning-level-1-c4566"></a>Avviso del compilatore (livello 1) C4566

carattere rappresentato dal nome di carattere universale 'char' non può essere rappresentato nella tabella codici corrente (pagina)

Non tutti i caratteri Unicode possono essere rappresentati nella tabella codici ANSI corrente.

Stringhe a caratteri Narrow (caratteri a un byte) vengono convertite in caratteri multibyte, mentre non lo sono le stringhe wide (caratteri a due byte).

L'esempio seguente genera l'errore C4566:

```
// C4566.cpp
// compile with: /W1
int main() {
   char c1 = '\u03a0';   // C4566
   char c2 = '\u0642';   // C4566

   wchar_t c3 = L'\u03a0';   // OK
   wchar_t c4 = L'\u0642';   // OK
}
```