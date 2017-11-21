---
title: Strumenti del linker LNK1106 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1106
dev_langs: C++
helpviewer_keywords: LNK1106
ms.assetid: 528f7e65-04be-4966-b8af-9276837c7cda
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 8b97196ebed51c21e40fa74ab1b80d23f3c49eec
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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