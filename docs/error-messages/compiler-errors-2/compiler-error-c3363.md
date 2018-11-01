---
title: Errore del compilatore C3363
ms.date: 11/04/2016
f1_keywords:
- C3363
helpviewer_keywords:
- C3363
ms.assetid: 41aa922f-608e-4f7a-ba66-451fc1161935
ms.openlocfilehash: 05a9a339a48ede37f83696e7c524858c3fb03b54
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50427990"
---
# <a name="compiler-error-c3363"></a>Errore del compilatore C3363

'type': 'typeid' può essere applicato solo a un tipo

L'operatore [typeid](../../windows/typeid-cpp-component-extensions.md) è stato usato in modo errato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3363.

```
// C3363.cpp
// compile with: /clr
int main() {
   System::typeid;   // C3363
}
```