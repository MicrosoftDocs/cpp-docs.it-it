---
title: Avviso del compilatore (livello 1) C4420
ms.date: 11/04/2016
f1_keywords:
- C4420
helpviewer_keywords:
- C4420
ms.assetid: 44a37754-7ddd-4764-a5f7-d33e05c20091
ms.openlocfilehash: a4a7e91e7845cc0fc25d5a6fad16ae7b7e327952
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662891"
---
# <a name="compiler-warning-level-1-c4420"></a>Avviso del compilatore (livello 1) C4420

'operator': operatore non è disponibile, utilizzare 'operator'; controllo della fase di esecuzione può essere compromesse.

Questo avviso viene generato quando si usa la [/RTCv](../../build/reference/rtc-run-time-error-checks.md) (new/delete vettoriale) e quando viene rilevata alcuna forma di vettore. In questo caso, viene usato il modulo non vettoriale.

Affinché /RTCv a funzionare correttamente, il compilatore deve chiamare sempre la forma di vettore del [nuove](../../cpp/new-operator-cpp.md)/[eliminare](../../cpp/delete-operator-cpp.md) se è stata utilizzata la sintassi del vettore.