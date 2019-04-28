---
title: Errore del compilatore C3865
ms.date: 11/04/2016
f1_keywords:
- C3865
helpviewer_keywords:
- C3865
ms.assetid: 9bc62bb0-4fb8-4856-a5cf-c7cb4029a596
ms.openlocfilehash: 846657d3598e268d78ff3c39f2bfc901756ad370
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62302020"
---
# <a name="compiler-error-c3865"></a>Errore del compilatore C3865

'convenzione_chiamata': può essere utilizzato solo per le funzioni membro native

Una convenzione di chiamata è stata usata in una funzione che era una funzione globale o in una funzione membro gestito. La convenzione di chiamata è utilizzabile solo in una funzione membro (non gestito) nativo.

Per altre informazioni, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).

L'esempio seguente genera l'errore C3865:

```
// C3865.cpp
// compile with: /clr
// processor: x86
void __thiscall Func(){}   // C3865

// OK
struct MyType {
   void __thiscall Func(){}
};
```