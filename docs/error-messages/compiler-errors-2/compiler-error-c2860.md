---
title: Errore del compilatore C2860
ms.date: 11/04/2016
f1_keywords:
- C2860
helpviewer_keywords:
- C2860
ms.assetid: ccc83553-90ed-4e94-b5e9-38b58ae38e31
ms.openlocfilehash: 6a6bb4bc12e791e36a31ffc4cf417e21cb71dbdd
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760967"
---
# <a name="compiler-error-c2860"></a>Errore del compilatore C2860

' void ' non può essere un tipo di argomento, ad eccezione di ' (void)'

Impossibile utilizzare il tipo `void` come tipo di argomento con altri argomenti.

L'esempio seguente genera l'C2860:

```cpp
// C2860.cpp
// compile with: /c
void profunc1(void, int i);   // C2860
void func10(void);   // OK
```
