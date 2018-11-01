---
title: Errore del compilatore C3062
ms.date: 11/04/2016
f1_keywords:
- C3062
helpviewer_keywords:
- C3062
ms.assetid: 78632e6d-255f-42c3-b124-31a9194ff86d
ms.openlocfilehash: ac45847c94e7d2dc731eba71b0a38105eb915e53
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50590411"
---
# <a name="compiler-error-c3062"></a>Errore del compilatore C3062

'enum': enumeratore richiede un valore perché il tipo sottostante è 'type'

È possibile specificare un tipo sottostante per un'enumerazione. Alcuni tipi richiedono, tuttavia, è possibile assegnare valori a ogni enumeratore.

Per altre informazioni sulle enumerazioni, vedere [classe enum](../../windows/enum-class-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3062:

```
// C3062.cpp
// compile with: /clr

enum class MyEnum : bool { a };   // C3062
enum class MyEnum2 : bool { a = true};   // OK
```