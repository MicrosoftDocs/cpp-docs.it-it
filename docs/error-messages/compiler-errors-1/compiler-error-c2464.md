---
title: Errore del compilatore C2464 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2464
dev_langs:
- C++
helpviewer_keywords:
- C2464
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ff74085364d6638772ab2376aace93fea741056b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46103143"
---
# <a name="compiler-error-c2464"></a>Errore del compilatore C2464

'identifier': Impossibile utilizzare 'new' per allocare un riferimento

Un identificatore di riferimento è stato allocato con il `new` operatore. I riferimenti non sono oggetti di memoria, pertanto `new` non può restituire un puntatore a essi. Usare la sintassi di dichiarazione di variabile standard per dichiarare un riferimento.

L'esempio seguente genera l'errore C2464:

```
// C2464.cpp
int main() {
   new ( int& ir );   // C2464
}
```