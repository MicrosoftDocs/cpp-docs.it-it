---
title: Errore del compilatore C2086
ms.date: 11/04/2016
f1_keywords:
- C2086
helpviewer_keywords:
- C2086
ms.assetid: 4329bf72-90c8-444c-8524-4ef75e6b2139
ms.openlocfilehash: 094a794627b886abc7db5ba4d74c6fe97ff82461
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62216126"
---
# <a name="compiler-error-c2086"></a>Errore del compilatore C2086

'identifier': ridefinizione

L'identificatore è definito più volte o una dichiarazione successivi è diverso da una precedente.

C2086 può inoltre essere il risultato della compilazione incrementale per un assembly di riferimento c#. Ricompilare l'assembly c# per correggere l'errore.

L'esempio seguente genera l'errore C2086:

```
// C2086.cpp
main() {
  int a;
  int a;   // C2086 not an error in ANSI C
}
```