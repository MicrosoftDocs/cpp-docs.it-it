---
title: Errore del compilatore C2808
ms.date: 11/04/2016
f1_keywords:
- C2808
helpviewer_keywords:
- C2808
ms.assetid: 3d745102-d3b3-4735-a7d2-ad42d5bf3cfa
ms.openlocfilehash: 7b40a81748748a7566a8c1e6add84121f8925895
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50572014"
---
# <a name="compiler-error-c2808"></a>Errore del compilatore C2808

''operatore operatore unario ha troppi parametri formali

L'operatore unario con un elenco di parametri non void.

L'esempio seguente genera l'errore C2808:

```
// C2808.cpp
// compile with: /c
class X {
public:
   X operator! ( X );   // C2808 nonvoid parameter list
   X operator! ( void );   // OK
};

```