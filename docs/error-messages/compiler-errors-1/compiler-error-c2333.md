---
title: Errore del compilatore C2333
ms.date: 11/04/2016
f1_keywords:
- C2333
helpviewer_keywords:
- C2333
ms.assetid: 2636fc1e-d3e7-4e68-8628-3c81a99ba813
ms.openlocfilehash: e9119a8375a276a59cbf3a6db9541f6ccaef5122
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50432633"
---
# <a name="compiler-error-c2333"></a>Errore del compilatore C2333

'function': errore nella dichiarazione di funzione. corpo della funzione verrà ignorato

Questo errore si verifica dopo un altro errore, per le funzioni membro definite all'interno della classe.

L'esempio seguente genera l'errore C2333:

```
// C2333.cpp
struct s1 {
   s1(s1) {}   // C2333
};
```