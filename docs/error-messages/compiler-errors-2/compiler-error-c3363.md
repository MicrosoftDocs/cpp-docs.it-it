---
title: Errore del compilatore C3363
ms.date: 11/04/2016
f1_keywords:
- C3363
helpviewer_keywords:
- C3363
ms.assetid: 41aa922f-608e-4f7a-ba66-451fc1161935
ms.openlocfilehash: eca598233dbe4cae4730e952b45945653ec8ffaa
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58775504"
---
# <a name="compiler-error-c3363"></a>Errore del compilatore C3363

'type': 'typeid' può essere applicato solo a un tipo

L'operatore [typeid](../../extensions/typeid-cpp-component-extensions.md) è stato usato in modo errato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3363.

```
// C3363.cpp
// compile with: /clr
int main() {
   System::typeid;   // C3363
}
```