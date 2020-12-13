---
description: 'Altre informazioni su: errore del compilatore C2760'
title: Errore del compilatore C2760
ms.date: 11/04/2016
f1_keywords:
- C2760
helpviewer_keywords:
- C2760
ms.assetid: 585757fd-d519-43f3-94e5-50316ac8b90b
ms.openlocfilehash: bba26b68a2e4c98cf478098b2e44e82962afd9f0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336157"
---
# <a name="compiler-error-c2760"></a>Errore del compilatore C2760

> errore di sintassi: previsto '*name1*' non '*name2*'

## <a name="remarks"></a>Commenti

Esistono diversi modi per generare questo errore. In genere, è causata da una sequenza di token che il compilatore non può avere senso.

## <a name="example"></a>Esempio

In questo esempio viene usato un operatore di cast con un operatore non valido.

```cpp
// C2760.cpp
class B {};
class D : public B {};

void f(B* pb) {
    D* pd1 = static_cast<D*>(pb);
    D* pd2 = static_cast<D*>=(pb);  // C2760
    D* pd3 = static_cast<D*=(pb);   // C2760
}
```
