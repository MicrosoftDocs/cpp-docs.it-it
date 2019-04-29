---
title: Errore del compilatore C2734
ms.date: 11/04/2016
f1_keywords:
- C2734
helpviewer_keywords:
- C2734
ms.assetid: e53a77b7-825c-42d1-a655-90e1c93b833e
ms.openlocfilehash: c20fcc7673c00ea7cfad32bdc3feae042f1f9086
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62350767"
---
# <a name="compiler-error-c2734"></a>Errore del compilatore C2734

'identifier': oggetto const deve inizializzare se non extern

L'identificatore è dichiarato `const` ma non inizializzato o `extern`.

L'esempio seguente genera l'errore C2734:

```
// C2734.cpp
const int j;   // C2734
extern const int i;   // OK, declared as extern
```