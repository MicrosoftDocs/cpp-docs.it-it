---
title: Errore del compilatore C2760
ms.date: 11/04/2016
f1_keywords:
- C2760
helpviewer_keywords:
- C2760
ms.assetid: 585757fd-d519-43f3-94e5-50316ac8b90b
ms.openlocfilehash: 5680de2fe0364d7cdc5e7ef017bd298423ea4c21
ms.sourcegitcommit: fd0f8839da5c6a3663798a47c6b0bb6e63b518bd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2019
ms.locfileid: "70273664"
---
# <a name="compiler-error-c2760"></a>Errore del compilatore C2760

> errore di sintassi: previsto '*name1*' non '*name2*'

## <a name="remarks"></a>Note

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
