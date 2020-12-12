---
description: 'Altre informazioni su: errore del compilatore C3062'
title: Errore del compilatore C3062
ms.date: 11/04/2016
f1_keywords:
- C3062
helpviewer_keywords:
- C3062
ms.assetid: 78632e6d-255f-42c3-b124-31a9194ff86d
ms.openlocfilehash: b57d03f3ef09e1d01741866d99dfff87aa5aa28d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281743"
---
# <a name="compiler-error-c3062"></a>Errore del compilatore C3062

' enum ': l'enumeratore richiede un valore perché il tipo sottostante è' type '

È possibile specificare un tipo sottostante per un'enumerazione. Tuttavia, per alcuni tipi è necessario assegnare valori a ogni enumeratore.

Per altre informazioni sulle enumerazioni, vedere [enum class](../../extensions/enum-class-cpp-component-extensions.md).

L'esempio seguente genera l'C3062:

```cpp
// C3062.cpp
// compile with: /clr

enum class MyEnum : bool { a };   // C3062
enum class MyEnum2 : bool { a = true};   // OK
```
