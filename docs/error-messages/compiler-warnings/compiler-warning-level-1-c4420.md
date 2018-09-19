---
title: Compilatore avviso (livello 1) C4420 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4420
dev_langs:
- C++
helpviewer_keywords:
- C4420
ms.assetid: 44a37754-7ddd-4764-a5f7-d33e05c20091
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e1ba4ef4c4fc006e1a5950d0d16dc530ccc06a1d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46049748"
---
# <a name="compiler-warning-level-1-c4420"></a>Avviso del compilatore (livello 1) C4420

'operator': operatore non è disponibile, utilizzare 'operator'; controllo della fase di esecuzione può essere compromesse.

Questo avviso viene generato quando si usa la [/RTCv](../../build/reference/rtc-run-time-error-checks.md) (new/delete vettoriale) e quando viene rilevata alcuna forma di vettore. In questo caso, viene usato il modulo non vettoriale.

Affinché /RTCv a funzionare correttamente, il compilatore deve chiamare sempre la forma di vettore del [nuove](../../cpp/new-operator-cpp.md)/[eliminare](../../cpp/delete-operator-cpp.md) se è stata utilizzata la sintassi del vettore.