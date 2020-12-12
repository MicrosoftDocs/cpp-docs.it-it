---
description: 'Altre informazioni su: errore del compilatore C2267'
title: Errore del compilatore C2267
ms.date: 11/04/2016
f1_keywords:
- C2267
helpviewer_keywords:
- C2267
ms.assetid: ea63bebb-6208-4367-8440-39be07f9c360
ms.openlocfilehash: df69073cbb1956033cf7d028c56e13018e4bbcf4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328410"
---
# <a name="compiler-error-c2267"></a>Errore del compilatore C2267

' Function ': le funzioni statiche con ambito blocco non sono valide

Viene dichiarata una funzione locale **`static`** . Le funzioni statiche devono avere un ambito globale.

L'esempio seguente genera l'C2267:

```cpp
// C2267.cpp
static int func2();   // OK
int main() {
    static int func1();   // C2267
}
```
