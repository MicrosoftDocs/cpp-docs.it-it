---
title: Strumenti del linker LNK1158 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1158
dev_langs:
- C++
helpviewer_keywords:
- LNK1158
ms.assetid: 45febf16-d9e1-42db-af91-532e2717fd6a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 71cee2a31d1a7b05104031fbf41e8e3addb82d7d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1158"></a>Errore degli strumenti del linker LNK1158
Impossibile eseguire 'nomefile'  
  
 Il file eseguibile dato chiamato da [collegamento](../../build/reference/linker-command-line-syntax.md) è anziché nella directory contenente collegamento né in una directory specificata nella variabile di ambiente PATH.  
  
 Ad esempio, si otterrà l'errore se si tenta di utilizzare il parametro PGOPTIMIZE per il [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) l'opzione del linker in un computer con sistema operativo a 32 bit.