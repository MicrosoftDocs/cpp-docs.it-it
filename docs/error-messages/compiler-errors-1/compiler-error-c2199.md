---
title: Errore del compilatore C2199
ms.date: 11/04/2016
f1_keywords:
- C2199
helpviewer_keywords:
- C2199
ms.assetid: 6a92a1b7-7906-49e6-a31f-e8bffbc7706a
ms.openlocfilehash: e5892a537cbf337b23ff2356583cec4bf5925677
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62368487"
---
# <a name="compiler-error-c2199"></a>Errore del compilatore C2199

Errore di sintassi: trovato ' identifier (' in ambito globale (si desiderava creare una dichiarazione?)

Il contesto specificato ha causato un errore di sintassi. Potrebbe esserci una sintassi di dichiarazione non corretta.

L'esempio seguente genera l'errore C2199:

```
// C2199.cpp
// compile with: /c
int j = int(1) int(1);   // C2199
int j = 1;   // OK
```