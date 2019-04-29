---
title: Avviso del compilatore (livello 1) C4566
ms.date: 11/04/2016
f1_keywords:
- C4566
helpviewer_keywords:
- C4566
ms.assetid: 65f40730-e86f-447c-b37b-16caadcfe311
ms.openlocfilehash: c864feb2478e9f99ad6e4c0087dcef72b55de601
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62397264"
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