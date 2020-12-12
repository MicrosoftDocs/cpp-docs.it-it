---
description: 'Altre informazioni su: errore del compilatore C2086'
title: Errore del compilatore C2086
ms.date: 11/04/2016
f1_keywords:
- C2086
helpviewer_keywords:
- C2086
ms.assetid: 4329bf72-90c8-444c-8524-4ef75e6b2139
ms.openlocfilehash: b98b4ed3896b11d8df434935c1b539f76640f24c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252077"
---
# <a name="compiler-error-c2086"></a>Errore del compilatore C2086

' Identifier ': ridefinizione

L'identificatore viene definito più di una volta o una dichiarazione successiva è diversa da quella precedente.

C2086 può anche essere il risultato della compilazione incrementale per un assembly C# a cui si fa riferimento. Ricompilare l'assembly C# per risolvere l'errore.

L'esempio seguente genera l'C2086:

```cpp
// C2086.cpp
main() {
  int a;
  int a;   // C2086 not an error in ANSI C
}
```
