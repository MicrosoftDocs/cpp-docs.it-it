---
title: Quando vengono chiamati i gestori aggiornamento | Documenti Microsoft
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
- updating user interface objects [MFC]
- command routing [MFC], update commands
- toolbar buttons [MFC], enabling
- disabling toolbar buttons
- menus [MFC], initializing
- update handlers [MFC]
- disabling menu items
- toolbars [MFC], updating
- menus [MFC], updating as context changes
- toolbar controls [MFC], updated during OnIdle method [MFC]
- menu items, enabling
- command routing [MFC], update handlers
- update handlers, calling
ms.assetid: 7359f6b1-4669-477d-bd99-690affed08d9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: eaf2773a2d9e393c783a39e01c75f8efa62796df
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="when-update-handlers-are-called"></a>Quando vengono chiamati i gestori aggiornamento
Si supponga che l'utente fa clic del mouse nel menu File, che genera un `WM_INITMENUPOPUP` messaggio. Il meccanismo di aggiornamento del framework aggiorna tutte le voci del menu File prima che il menu verso il basso in modo che l'utente è possibile visualizzarla.  
  
 A tale scopo, le route framework aggiornare i comandi per tutte le voci di menu nel menu a comparsa lungo il routing dei comandi standard. Destinazioni comandi sul ciclo di produzione hanno l'opportunità di aggiornare le voci del menu associando il comando di aggiornamento con una voce della mappa messaggi appropriata (nel formato `ON_UPDATE_COMMAND_UI`) e la chiamata di funzione "gestore di aggiornamento". Di conseguenza, per un menu con sei voci di menu, sei i comandi di aggiornamento vengono inviati. Se è presente un gestore di aggiornamento per l'ID di comando della voce di menu, viene chiamato per eseguire l'aggiornamento. In caso contrario, il framework verifica l'esistenza di un gestore per l'ID di comando e Abilita o disabilita la voce di menu come appropriato.  
  
 Se il framework non trova un `ON_UPDATE_COMMAND_UI` voce durante il routing dei comandi, verrà automaticamente attivato l'oggetto dell'interfaccia utente se è presente un `ON_COMMAND` voce in un punto con lo stesso ID di comando. In caso contrario, disabilita l'oggetto dell'interfaccia utente. Pertanto, per garantire che un oggetto dell'interfaccia utente è abilitato, fornire un gestore per il comando generato dall'oggetto o specificare un gestore di aggiornamento. Vedere la figura nell'argomento [oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md).  
  
 È possibile disabilitare la disattivazione predefinita di oggetti dell'interfaccia utente. Per ulteriori informazioni, vedere il [membro m_bAutoMenuEnable](../mfc/reference/cframewnd-class.md#m_bautomenuenable) membro della classe `CFrameWnd` nel *riferimenti alla libreria MFC*.  
  
 Inizializzazione di menu è automatica in framework, che si verificano durante l'applicazione riceve un `WM_INITMENUPOPUP` messaggio. Durante il ciclo inattivo, il framework Cerca del routing dei comandi per i gestori aggiornamento pulsante in modo analogo a quanto accade per i menu.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)

