---
description: 'Altre informazioni su: errore del compilatore C3292'
title: Errore del compilatore C3292
ms.date: 11/04/2016
f1_keywords:
- C3292
helpviewer_keywords:
- C3292
ms.assetid: ead485cc-5471-4e10-b361-300589ff5b70
ms.openlocfilehash: 5c20ae5a03fd6eab442384c91c3357c2d9edb214
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144690"
---
# <a name="compiler-error-c3292"></a>Errore del compilatore C3292

impossibile riaprire lo spazio dei nomi cli

Lo spazio dei nomi cli non può essere dichiarato nel codice.  Per altre informazioni, vedere [Spazi dei nomi Platform, default e cli](../../extensions/platform-default-and-cli-namespaces-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3292.

```cpp
// C3292.cpp
// compile with: /clr /c
namespace cli {};   // C3292
```
