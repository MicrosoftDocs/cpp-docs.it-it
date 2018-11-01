---
title: Errore del compilatore C2588
ms.date: 11/04/2016
f1_keywords:
- C2588
helpviewer_keywords:
- C2588
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
ms.openlocfilehash: 15f9ba62751d9b3cb17ab56659310292dab41adf
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50596781"
---
# <a name="compiler-error-c2588"></a>Errore del compilatore C2588

':: ~ identifier': distruttore globale non valido

Il distruttore è definito per un elemento diverso da una classe, struttura o unione. ma questa operazione non è consentita.

Questo errore può essere causato da una classe mancante, struttura o unione nome sul lato sinistro della risoluzione dell'ambito (`::`) operatore.

L'esempio seguente genera l'errore C2588:

```
// C2588.cpp
~F();   // C2588
```