---
title: Errore del compilatore C2588
ms.date: 11/04/2016
f1_keywords:
- C2588
helpviewer_keywords:
- C2588
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
ms.openlocfilehash: f1f73e2585606e7e86213607a96ef713345419c1
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755408"
---
# <a name="compiler-error-c2588"></a>Errore del compilatore C2588

':: ~ Identifier ': distruttore globale non valido

Il distruttore viene definito per un elemento diverso da una classe, una struttura o un'Unione. Ciò non è consentito.

Questo errore può essere causato da un nome di classe, struttura o unione mancante sul lato sinistro dell'operatore di risoluzione dell'ambito (`::`).

L'esempio seguente genera l'C2588:

```cpp
// C2588.cpp
~F();   // C2588
```
