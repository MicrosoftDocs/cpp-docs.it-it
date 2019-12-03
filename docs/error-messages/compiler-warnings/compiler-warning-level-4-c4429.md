---
title: Avviso del compilatore (livello 4) C4429
ms.date: 11/04/2016
f1_keywords:
- C4429
helpviewer_keywords:
- C4429
ms.assetid: a3e4cf1f-a869-4e47-834a-850c21eb5297
ms.openlocfilehash: e814867278701be11b0158789f6373453aea75b8
ms.sourcegitcommit: d0504e2337bb671e78ec6dd1c7b05d89e7adf6a7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/02/2019
ms.locfileid: "74683244"
---
# <a name="compiler-warning-level-4-c4429"></a>Avviso del compilatore (livello 4) C4429

possibile nome di caratteri universali incompleto o non corretto

Il compilatore ha rilevato una sequenza di caratteri che può essere un nome di carattere universale non formattato correttamente. Un nome di carattere universale è `\u` seguito da quattro cifre esadecimali oppure `\U` seguito da otto cifre esadecimali.

L'esempio seguente genera l'C4429:

```cpp
// C4429.cpp
// compile with: /W4 /WX
int \ug0e4 = 0;   // C4429
// Try the following line instead:
// int \u00e4 = 0;   // OK, a well-formed universal character name.
```