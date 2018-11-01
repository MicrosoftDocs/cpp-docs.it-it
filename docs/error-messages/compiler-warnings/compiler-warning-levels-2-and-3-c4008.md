---
title: Avviso del compilatore (livelli 2 e 3) C4008
ms.date: 11/04/2016
f1_keywords:
- C4008
helpviewer_keywords:
- C4008
ms.assetid: fb45e535-cb68-4743-80e9-a6e34cfffeca
ms.openlocfilehash: 99b78e1426cf1618e68ae74ae7e16dd0f08606ba
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50604087"
---
# <a name="compiler-warning-levels-2-and-3-c4008"></a>Avviso del compilatore (livelli 2 e 3) C4008

'identifier': attributo 'attribute' ignorato

Il compilatore ha ignorato l'attributo `__fastcall`, **static**o **inline** per una funzione (avviso di livello 3) o per i dati (avviso di livello 2).

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Attributo`__fastcall` con i dati.

1. Attributo**static** o **inline** con la funzione **main** .