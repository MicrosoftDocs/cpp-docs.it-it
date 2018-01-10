---
title: Classi di Routing di comandi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.classes.command
dev_langs: C++
helpviewer_keywords:
- MFC, command routing
- command routing [MFC], classes
ms.assetid: 4b50e689-2c54-4e6c-90f0-37333e22b2a1
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c7e49c92b909abb01f3daec9e16f0e08b2a31c89
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-routing-classes"></a>Classi di routing dei comandi
Mentre l'utente interagisce con l'applicazione scegliendo menu o pulsanti della barra di controllo con il mouse, l'applicazione invia messaggi a un oggetto destinazione comando appropriato dall'oggetto dell'interfaccia utente interessato. Destinazione comando classi derivate da `CCmdTarget` includono [CWinApp](../mfc/reference/cwinapp-class.md), [CWnd](../mfc/reference/cwnd-class.md), [CDocTemplate](../mfc/reference/cdoctemplate-class.md), [CDocument](../mfc/reference/cdocument-class.md), [CView](../mfc/reference/cview-class.md), e le classi derivate da essi. Il framework supporta il routing automatica dei comandi in modo che i comandi possono essere gestiti dall'oggetto più appropriato attualmente attivo nell'applicazione.  
  
 Un oggetto della classe `CCmdUI` viene passato al comando di aggiornamento delle destinazioni di comandi dell'interfaccia utente ([ON_UPDATE_COMMAND_UI](reference/message-map-macros-mfc.md#on_update_command_ui)) i gestori che consente di aggiornare lo stato dell'interfaccia utente per un particolare comando (ad esempio, di controllo o remove il controllo da voci di menu). Chiamare funzioni di membro di `CCmdUI` oggetto per aggiornare lo stato dell'oggetto dell'interfaccia utente. Questo processo è lo stesso se l'oggetto di interfaccia utente associata a un particolare comando è una voce di menu o un pulsante o entrambi.  
  
 [CCmdTarget](../mfc/reference/ccmdtarget-class.md)  
 Funge da classe base per tutte le classi di oggetti che possono ricevere e rispondere ai messaggi.  
  
 [CCmdUI](../mfc/reference/ccmdui-class.md)  
 Fornisce un'interfaccia programmatica per l'aggiornamento di oggetti dell'interfaccia utente, ad esempio voci di menu o pulsanti della barra di controllo. L'oggetto destinazione comando abilita, disabilita, verifica e/o Cancella l'oggetto dell'interfaccia utente con questo oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

