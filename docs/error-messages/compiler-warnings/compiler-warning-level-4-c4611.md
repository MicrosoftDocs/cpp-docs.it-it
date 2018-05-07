---
title: Compilatore avviso (livello 4) C4611 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4611
dev_langs:
- C++
helpviewer_keywords:
- C4611
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5946c10b5e0e0e7e08f1ee37c77120896937adb1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4611"></a>Avviso del compilatore (livello 4) C4611
interazione tra 'function' e l'eliminazione degli oggetti C++ non è portabile  
  
 In alcune piattaforme, le funzioni che includono **catch** potrebbe non supportare la semantica di oggetti C++ di distruzione quando sono fuori ambito.  
  
 Per evitare un comportamento imprevisto, evitare di utilizzare **catch** in funzioni che dispongono di costruttori e distruttori.  
  
 Questo avviso viene generato solo una volta. vedere [avviso pragma](../../preprocessor/warning.md).