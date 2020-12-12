---
description: 'Altre informazioni su: errore del compilatore C2745'
title: Errore del compilatore C2745
ms.date: 11/04/2016
f1_keywords:
- C2745
helpviewer_keywords:
- C2745
ms.assetid: a1c45f13-7667-4678-aa16-265304a449a1
ms.openlocfilehash: 3f80ce1c13e8f1beeaa241e0638dfc9de784c3fb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123032"
---
# <a name="compiler-error-c2745"></a>Errore del compilatore C2745

' token ': questo token non può essere convertito in un identificatore

Gli identificatori devono essere costituiti da caratteri validi.

L'esempio seguente genera l'C2745:

```cpp
// C2745.cpp
// compile with: /clr
int main() {
   int __identifier([));   // C2745
}
```
