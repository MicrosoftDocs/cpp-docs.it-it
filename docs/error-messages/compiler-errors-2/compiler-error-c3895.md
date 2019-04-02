---
title: Errore del compilatore C3895
ms.date: 11/04/2016
f1_keywords:
- C3895
helpviewer_keywords:
- C3895
ms.assetid: 771b9fe5-d6d4-4297-bf57-e2f857722155
ms.openlocfilehash: c4b1cad9ef48f1f16b411aab46e1bb9285d69ff3
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58768394"
---
# <a name="compiler-error-c3895"></a>Errore del compilatore C3895

'var': i membri dati di tipo non possono essere 'volatili'

Alcuni tipi di membri dati, ad esempio [letterale](../../extensions/literal-cpp-component-extensions.md) oppure [initonly](../../dotnet/initonly-cpp-cli.md), non può essere [volatile](../../cpp/volatile-cpp.md).

L'esempio seguente genera l'errore C3895:

```
// C3895.cpp
// compile with: /clr
ref struct Y1 {
   initonly
   volatile int data_var2;   // C3895
};
```