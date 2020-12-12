---
description: 'Altre informazioni su: errore del compilatore C2389'
title: Errore del compilatore C2389
ms.date: 11/04/2016
f1_keywords:
- C2389
helpviewer_keywords:
- C2389
ms.assetid: 6122dc81-4ee3-49a5-a67d-d867808c9bac
ms.openlocfilehash: 1f9d34be47376564bf7c6fc221cf6f5b01e7850f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123968"
---
# <a name="compiler-error-c2389"></a>Errore del compilatore C2389

'operator': operando 'nullptr' non valido

**`nullptr`** non può essere un operando.

L'esempio seguente genera l'errore C2389:

```cpp
// C2389.cpp
// compile with: /clr
int main() {
   throw nullptr;   // C2389
}
```
