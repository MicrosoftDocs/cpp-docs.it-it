---
title: Errore irreversibile C1305 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: error-reference
f1_keywords:
- C1305
dev_langs:
- C++
helpviewer_keywords:
- C1305
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b32f9e7555ce905323fd6074d35f1876cd999edd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1305"></a>Errore irreversibile C1305
il database di profilo 'pgd_file' è per un'architettura differente  
  
 Un file pgd è stato generato dall'operazione /LTCG: PGINSTRUMENT per un'altra piattaforma è stata passata a [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md) . [Le ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md) sono disponibili per x86 e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] piattaforme. Tuttavia, un file pgd generato con un'operazione di /LTCG: PGINSTRUMENT per una piattaforma non è valido come input per un /LTCG: PGOPTIMIZE per una piattaforma diversa.  
  
 Per correggere l'errore, passare solo un file PDG creato con /LTCG: PGINSTRUMENT in /LTCG: PGOPTIMIZE sulla stessa piattaforma.