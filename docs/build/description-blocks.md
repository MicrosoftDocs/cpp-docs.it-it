---
title: Blocchi di descrizione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- description blocks
- NMAKE program, description blocks
- blocks, description
ms.assetid: 1321f228-d389-40ac-b0cd-4f6e9293602b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 37f095f5ae46e4b555f1d3f7996bd5f357e58ee2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="description-blocks"></a>Blocchi di descrizione
Un blocco di descrizione è una riga di dipendenze, seguita facoltativamente da un blocco di comandi:  
  
```  
targets... : dependents...  
    commands...  
```  
  
 Una riga di dipendenza specifica una o più destinazioni e zero o più dipendenti. Una destinazione deve essere all'inizio della riga. Le destinazioni separate dai dipendenti dai due punti (:), spazi o tabulazioni sono consentiti. Per dividere la riga, utilizzare una barra rovesciata (\) dopo una destinazione o di un dipendente. Se una destinazione non esiste, ha un timestamp precedente a quello di un dipendente, o è un [pseudo](../build/pseudotargets.md), NMAKE esegue i comandi. Se un dipendente è una destinazione altrove e non esiste o non aggiornato relativi dipendenti, NMAKE aggiornamenti dipendenti prima di aggiornare la dipendenza corrente.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Destinazioni](../build/targets.md)  
  
 [Dipendenti](../build/dependents.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)