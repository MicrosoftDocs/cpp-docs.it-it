---
title: Errore irreversibile C1305 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1305
dev_langs:
- C++
helpviewer_keywords:
- C1305
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3cb1cf19d0fc4152fbb458d684972bb5a4418f37
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1305"></a>Errore irreversibile C1305
il database di profilo 'pgd_file' è per un'architettura differente  
  
 Un file pgd è stato generato dall'operazione /LTCG: PGINSTRUMENT per un'altra piattaforma è stata passata a [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md) . [Le ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md) sono disponibili per x86 e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] piattaforme. Tuttavia, un file pgd generato con un'operazione di /LTCG: PGINSTRUMENT per una piattaforma non è valido come input per un /LTCG: PGOPTIMIZE per una piattaforma diversa.  
  
 Per correggere l'errore, passare solo un file PDG creato con /LTCG: PGINSTRUMENT in /LTCG: PGOPTIMIZE sulla stessa piattaforma.