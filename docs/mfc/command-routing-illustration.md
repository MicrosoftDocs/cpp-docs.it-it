---
title: Illustrazione del Routing di comandi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC, command routing
- command handling [MFC], routing commands
- command routing [MFC], OnCmdMsg handler
ms.assetid: 4b7b4741-565f-4878-b076-fd85c670f87f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 24ac591005d5df6b18102d296352b8b2528ba839
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-routing-illustration"></a>Illustrazione del routing dei comandi
Per illustrare, prendere in considerazione un messaggio di comando da una voce di menu Cancella tutto nel menu di modifica di un'applicazione MDI. Si supponga che la funzione del gestore per questo comando è una funzione membro di classe di documento dell'applicazione. Ecco come comando raggiunge il relativo gestore dopo che l'utente sceglie la voce di menu:  
  
1.  La finestra cornice principale riceve il messaggio di comando.  
  
2.  La finestra cornice MDI principale offre finestra figlio MDI attiva la possibilità di gestire il comando.  
  
3.  Il routing standard di una finestra cornice del figlio MDI consente la visualizzazione al prompt dei comandi prima di verificare la propria mappa messaggi.  
  
4.  La vista controlla innanzitutto la propria mappa messaggi e non trovare alcun gestore, indirizza il comando al documento associato.  
  
5.  Il documento controlla la mappa messaggi e trova un gestore. La funzione membro in questo documento viene chiamata e il routing si interrompe.  
  
 Se il documento non conteneva un gestore, avrebbe inoltrato il comando per il modello di documento. Restituisce quindi il comando per la visualizzazione e quindi la finestra cornice. Infine, la finestra cornice verrà archiviati propria mappa messaggi. Se tale controllo non è riuscito anche il comando verrà indirizzato alla finestra cornice MDI principale e quindi all'oggetto dell'applicazione, ovvero la destinazione finale dei comandi non gestiti.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

