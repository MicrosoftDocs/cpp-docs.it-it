---
title: Errore del compilatore C2612
ms.date: 11/04/2016
f1_keywords:
- C2612
helpviewer_keywords:
- C2612
ms.assetid: 6faacfd6-4455-41a2-808e-0f6799f84d6d
ms.openlocfilehash: b2d4888c1be39c4f48f0ca674426c7af612b9bb7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50612160"
---
# <a name="compiler-error-c2612"></a>Errore del compilatore C2612

finali 'char' non valido nell'elenco di inizializzatori di basi/membri

Un carattere viene visualizzato dopo l'ultima base o membro in un elenco di inizializzatori.

L'esempio seguente genera l'errore C2612:

```
// C2612.cpp
class A {
public:
   int i;
   A( int ia ) : i( ia ) + {};   // C2612
};
```