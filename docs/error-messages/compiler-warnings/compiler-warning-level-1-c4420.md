---
title: Compilatore avviso (livello 1) C4420 | Documenti Microsoft
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
ms.openlocfilehash: 98336a30e7174b62df48e93a04ba9ee7ddcc919a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33279110"
---
# <a name="compiler-warning-level-1-c4420"></a>Avviso del compilatore (livello 1) C4420
'operator': operatore non è disponibile, usare 'operator'; controllo in fase di esecuzione potrebbe essere compromessa.  
  
 Questo avviso viene generato quando si utilizza il [/RTCv](../../build/reference/rtc-run-time-error-checks.md) (vettoriale new e delete) e quando non viene trovata alcuna forma vettoriale. In questo caso, viene utilizzato il vettore.  
  
 Affinché /RTCv funzioni correttamente, il compilatore deve chiamare sempre il vettore di [nuova](../../cpp/new-operator-cpp.md)/[eliminare](../../cpp/delete-operator-cpp.md) se è stata utilizzata la sintassi del vettore.