---
description: 'Altre informazioni su: errore del compilatore C2017'
title: Errore del compilatore C2017
ms.date: 11/04/2016
f1_keywords:
- C2017
helpviewer_keywords:
- C2017
ms.assetid: 1083eed9-9906-4a97-883c-54e52d7e82cd
ms.openlocfilehash: c70bd39cb15a0eff5d209a6fc76e3dc44b990d8e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220903"
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
