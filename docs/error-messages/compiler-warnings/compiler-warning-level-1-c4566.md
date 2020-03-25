---
title: Avviso del compilatore (livello 1) C4566
ms.date: 11/04/2016
f1_keywords:
- C4566
helpviewer_keywords:
- C4566
ms.assetid: 65f40730-e86f-447c-b37b-16caadcfe311
ms.openlocfilehash: 87d610980ffe9d9e5087ddaec0ecb91d813a4d60
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80162258"
---
# <a name="compiler-warning-level-1-c4566"></a>Avviso del compilatore (livello 1) C4566

il carattere rappresentato dal nome di caratteri universali ' Char ' non può essere rappresentato nella tabella codici corrente (pagina)

Non tutti i caratteri Unicode possono essere rappresentati nella tabella codici ANSI corrente.

Le stringhe strette (caratteri a un byte) vengono convertite in caratteri multibyte, mentre le stringhe wide (caratteri a due byte) non lo sono.

L'esempio seguente genera l'C4566:

```cpp
// C4566.cpp
// compile with: /W1
int main() {
   char c1 = '\u03a0';   // C4566
   char c2 = '\u0642';   // C4566

   wchar_t c3 = L'\u03a0';   // OK
   wchar_t c4 = L'\u0642';   // OK
}
```
