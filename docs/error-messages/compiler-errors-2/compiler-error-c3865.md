---
title: Errore del compilatore C3865
ms.date: 11/04/2016
f1_keywords:
- C3865
helpviewer_keywords:
- C3865
ms.assetid: 9bc62bb0-4fb8-4856-a5cf-c7cb4029a596
ms.openlocfilehash: 960c795fe934433e4e3cf79e4c01c49d00205b9b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761491"
---
# <a name="compiler-error-c3865"></a>Errore del compilatore C3865

' calling_convention ': può essere usato solo su funzioni membro Native

È stata usata una convenzione di chiamata in una funzione che era una funzione globale o una funzione membro gestita. La convenzione di chiamata può essere utilizzata solo in una funzione membro nativa (non gestita).

Per ulteriori informazioni, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).

L'esempio seguente genera l'C3865:

```cpp
// C3865.cpp
// compile with: /clr
// processor: x86
void __thiscall Func(){}   // C3865

// OK
struct MyType {
   void __thiscall Func(){}
};
```
