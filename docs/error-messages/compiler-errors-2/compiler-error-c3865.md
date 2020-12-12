---
description: 'Altre informazioni su: errore del compilatore C3865'
title: Errore del compilatore C3865
ms.date: 11/04/2016
f1_keywords:
- C3865
helpviewer_keywords:
- C3865
ms.assetid: 9bc62bb0-4fb8-4856-a5cf-c7cb4029a596
ms.openlocfilehash: 956cbfeb5bac97cae7e9a9a411c29326062e15b2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222879"
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
