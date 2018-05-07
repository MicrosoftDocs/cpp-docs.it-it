---
title: Strumenti del linker LNK4022 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4022
dev_langs:
- C++
helpviewer_keywords:
- LNK4022
ms.assetid: 890f487e-db98-45dd-a226-c7ccead82b1e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cffb9c4c67bc3003b8dcdda0ad3a2e8d55abe932
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4022"></a>Avviso degli strumenti del linker LNK4022
Impossibile trovare una corrispondenza univoca per il simbolo 'symbol'  
  
 COLLEGAMENTO o LIB trovato più corrispondente per il simbolo non decorato specificato e non è stato possibile risolvere l'ambiguità. Viene prodotto alcun file di output (.exe, DLL, EXP o lib). Questo avviso è seguito da un avviso [LNK4002](../../error-messages/tool-errors/linker-tools-warning-lnk4002.md) per ogni simbolo di duplicare e infine è seguito dall'errore irreversibile [LNK1152](../../error-messages/tool-errors/linker-tools-error-lnk1152.md).  
  
 Per evitare questo avviso, specificare il simbolo nel formato decorato. Eseguire [DUMPBIN](../../build/reference/dumpbin-options.md) sull'oggetto per visualizzare i nomi decorati.