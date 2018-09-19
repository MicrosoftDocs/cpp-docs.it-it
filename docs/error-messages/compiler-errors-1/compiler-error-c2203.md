---
title: Errore del compilatore C2203 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2203
dev_langs:
- C++
helpviewer_keywords:
- C2203
ms.assetid: 5497df43-86f6-43d5-b6cb-723c4c589b10
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6db497a7967e0cefc16ecb6e5a71874f86179b29
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053765"
---
# <a name="compiler-error-c2203"></a>Errore del compilatore C2203

Elimina operatore non è possibile specificare i limiti di matrice

Con il **/Za** opzione (ANSI), il `delete` operatore può eliminare un'intera matrice, ma non le parti o membri specifici della matrice.

L'esempio seguente genera l'errore C2203:

```
// C2203.cpp
// compile with: /Za
int main() {
   int *ar = new int[10];
   delete [4] ar;   // C2203
   // try the following line instead
   // delete [] ar;
}
```