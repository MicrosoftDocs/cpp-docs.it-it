---
title: Strumenti del linker LNK4022 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4022
dev_langs:
- C++
helpviewer_keywords:
- LNK4022
ms.assetid: 890f487e-db98-45dd-a226-c7ccead82b1e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9e35974a72de349f94f2189f676b6dc955c48fab
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4022"></a>Avviso degli strumenti del linker LNK4022
Impossibile trovare una corrispondenza univoca per il simbolo 'symbol'  
  
 COLLEGAMENTO o LIB trovato più corrispondente per il simbolo non decorato specificato e non è stato possibile risolvere l'ambiguità. Viene prodotto alcun file di output (.exe, DLL, EXP o lib). Questo avviso è seguito da un avviso [LNK4002](../../error-messages/tool-errors/linker-tools-warning-lnk4002.md) per ogni simbolo di duplicare e infine è seguito dall'errore irreversibile [LNK1152](../../error-messages/tool-errors/linker-tools-error-lnk1152.md).  
  
 Per evitare questo avviso, specificare il simbolo nel formato decorato. Eseguire [DUMPBIN](../../build/reference/dumpbin-options.md) sull'oggetto per visualizzare i nomi decorati.