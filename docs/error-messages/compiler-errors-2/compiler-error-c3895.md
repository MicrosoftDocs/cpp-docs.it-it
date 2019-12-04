---
title: Errore del compilatore C3895
ms.date: 11/04/2016
f1_keywords:
- C3895
helpviewer_keywords:
- C3895
ms.assetid: 771b9fe5-d6d4-4297-bf57-e2f857722155
ms.openlocfilehash: 633ffa86bce3579adb808dbba34127bb6f0665c9
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74749412"
---
# <a name="compiler-error-c3895"></a>Errore del compilatore C3895

' var ': i membri dati di tipo non possono essere ' volatile '

Alcuni tipi di membri dati, ad esempio [literal](../../extensions/literal-cpp-component-extensions.md) o [initonly](../../dotnet/initonly-cpp-cli.md), non possono essere [volatili](../../cpp/volatile-cpp.md).

L'esempio seguente genera l'C3895:

```cpp
// C3895.cpp
// compile with: /clr
ref struct Y1 {
   initonly
   volatile int data_var2;   // C3895
};
```
