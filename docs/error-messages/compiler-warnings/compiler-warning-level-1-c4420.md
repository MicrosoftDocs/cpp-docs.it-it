---
title: Compilatore avviso (livello 1) C4420 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4420
dev_langs:
- C++
helpviewer_keywords:
- C4420
ms.assetid: 44a37754-7ddd-4764-a5f7-d33e05c20091
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9a57803cb584f5ee54ad5533366e6aadc85d1acf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4420"></a>Avviso del compilatore (livello 1) C4420
'operator': operatore non è disponibile, usare 'operator'; controllo in fase di esecuzione potrebbe essere compromessa.  
  
 Questo avviso viene generato quando si utilizza il [/RTCv](../../build/reference/rtc-run-time-error-checks.md) (vettoriale new e delete) e quando non viene trovata alcuna forma vettoriale. In questo caso, viene utilizzato il vettore.  
  
 Affinché /RTCv funzioni correttamente, il compilatore deve chiamare sempre il vettore di [nuova](../../cpp/new-operator-cpp.md)/[eliminare](../../cpp/delete-operator-cpp.md) se è stata utilizzata la sintassi del vettore.