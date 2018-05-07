---
title: Strumenti del linker LNK1106 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1106
dev_langs:
- C++
helpviewer_keywords:
- LNK1106
ms.assetid: 528f7e65-04be-4966-b8af-9276837c7cda
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a3dedaa2bd500b11f06f9cfa98802fdd6ca84534
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1106"></a>Errore degli strumenti del linker LNK1106
file non valido o disco pieno: Impossibile raggiungere la posizione  
  
 Impossibile leggere o scrivere lo strumento `location` in un file mappato alla memoria.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Disco pieno.  
  
     Liberare spazio e il nuovo collegamento.  
  
2.  Tentativo di collegamento in rete.  
  
     Alcune reti non supportano completamente i file mappati alla memoria utilizzati dal linker. Effettuare il collegamento sul disco locale.  
  
3.  Blocco danneggiato sul disco.  
  
     Anche se il sistema operativo e hardware del disco deve avere rilevato un errore di questo tipo, si desidera eseguire un programma di controllo del disco.  
  
4.  Spazio dell'heap insufficiente.  
  
     Vedere [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) per ulteriori informazioni.