---
title: Errore del compilatore C2624
ms.date: 11/04/2016
f1_keywords:
- C2624
helpviewer_keywords:
- C2624
ms.assetid: 32f2ec15-a7cd-4049-a64b-131746d3152b
ms.openlocfilehash: 407629ad2eecd0d3ca6081fefa59ddd60702f913
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456719"
---
# <a name="compiler-error-c2624"></a>Errore del compilatore C2624

le classi locali non possono essere usate per dichiarare le variabili 'extern'

Una classe locale o una struttura non può essere usato per dichiarare `extern` variabili.

L'esempio seguente genera l'errore C2624:

```
// C2624.cpp
int main() {
   struct C {};
   extern C ac;   // C2624
}
```