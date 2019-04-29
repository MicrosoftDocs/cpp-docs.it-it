---
title: Errore del compilatore C2588
ms.date: 11/04/2016
f1_keywords:
- C2588
helpviewer_keywords:
- C2588
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
ms.openlocfilehash: 15f9ba62751d9b3cb17ab56659310292dab41adf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62350452"
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