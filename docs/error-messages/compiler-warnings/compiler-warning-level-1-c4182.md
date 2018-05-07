---
title: Compilatore avviso (livello 1) C4182 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4182
dev_langs:
- C++
helpviewer_keywords:
- C4182
ms.assetid: 8970f3c6-e2dd-407e-b2ec-964360eb8b43
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 79e86076a9d8218d08bd7437e2a06878b6ee91ff
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4182"></a>Avviso del compilatore (livello 1) C4182
\#includere il livello di nidificazione è 'number' deep; possibile ricorsione infinita  
  
 Il compilatore ha esaurito lo spazio nell'heap a causa del numero di file di inclusione annidati. Un file di inclusione è annidato quando viene incluso da un altro file di inclusione.  
  
 Questo messaggio è puramente informativo e precede l'errore [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md).