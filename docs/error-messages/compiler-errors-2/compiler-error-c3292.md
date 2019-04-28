---
title: Errore del compilatore C3292
ms.date: 11/04/2016
f1_keywords:
- C3292
helpviewer_keywords:
- C3292
ms.assetid: ead485cc-5471-4e10-b361-300589ff5b70
ms.openlocfilehash: a68d3e922532480063fe4c294e40f453885743e8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62222630"
---
# <a name="compiler-error-c3292"></a>Errore del compilatore C3292

impossibile riaprire lo spazio dei nomi cli

Lo spazio dei nomi cli non può essere dichiarato nel codice.  Per altre informazioni, vedere [Platform, default e cli gli spazi dei nomi](../../extensions/platform-default-and-cli-namespaces-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3292.

```
// C3292.cpp
// compile with: /clr /c
namespace cli {};   // C3292
```