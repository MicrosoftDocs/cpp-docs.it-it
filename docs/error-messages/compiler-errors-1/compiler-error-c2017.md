---
title: Errore del compilatore C2017
ms.date: 11/04/2016
f1_keywords:
- C2017
helpviewer_keywords:
- C2017
ms.assetid: 1083eed9-9906-4a97-883c-54e52d7e82cd
ms.openlocfilehash: 3911ef9af2eb0fab7d0f9296ddce8a0f9b32ae0d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74751053"
---
# <a name="compiler-error-c2017"></a>Errore del compilatore C2017

sequenza di escape non valida

Una sequenza di escape, ad esempio \t, viene visualizzata all'esterno di un carattere o di una costante di stringa.

L'esempio seguente genera l'C2017:

```cpp
// C2017.cpp
int main() {
   char test1='a'\n;   // C2017
   char test2='a\n';   // ok
}
```

C2017 può verificarsi quando l'operatore stringize viene usato con stringhe che includono sequenze di escape.

L'esempio seguente genera l'C2017:

```cpp
// C2017b.cpp
#define TestDfn(x) AfxMessageBox(#x)
TestDfn(CString("\\") + CString(".h\"\n\n"));   // C2017
```
