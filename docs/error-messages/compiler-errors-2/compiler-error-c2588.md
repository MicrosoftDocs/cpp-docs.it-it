---
title: Errore del compilatore C2588 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2588
dev_langs:
- C++
helpviewer_keywords:
- C2588
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d656dbde06d6052fd10611675f2cff8818cdb6e5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46108573"
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