---
title: Quando vengono chiamati i gestori aggiornamento | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c033d33dd6b1e6c0ccd5bbdb4b6af6939521f592
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956174"
---
# <a name="when-update-handlers-are-called"></a>Quando vengono chiamati i gestori aggiornamento
Si supponga che l'utente fa clic con il mouse nel menu File, che genera un messaggio WM_INITMENUPOPUP. Meccanismo di aggiornamento del framework aggiorna tutte le voci del menu File prima che il menu verso il basso in modo che l'utente può visualizzarla.  
  
 A tale scopo, le route framework aggiornare i comandi per tutte le voci di menu nel menu a comparsa lungo il routing dei comandi standard. Destinazioni comandi sul ciclo di produzione hanno l'opportunità di aggiornare le voci del menu associando il comando di aggiornamento con una voce della mappa messaggi appropriata (nel formato `ON_UPDATE_COMMAND_UI`) e la chiamata a una funzione "gestore di aggiornamento". Pertanto, per un menu con sei voci di menu, sei i comandi di aggiornamento vengono inviati. Se per l'ID di comando della voce di menu esiste un gestore di aggiornamento, viene chiamato per eseguire l'aggiornamento. In caso contrario, il framework verifica l'esistenza di un gestore per l'ID di comando e Abilita o disabilita la voce di menu come appropriato.  
  
 Se il framework non trova un `ON_UPDATE_COMMAND_UI` voce durante il routing dei comandi, verrà automaticamente attivato l'oggetto dell'interfaccia utente se è presente un `ON_COMMAND` voce in un punto con lo stesso ID di comando. In caso contrario, viene disattivato l'oggetto dell'interfaccia utente. Pertanto, per garantire che un oggetto dell'interfaccia utente è abilitato, fornire un gestore per il comando generato dall'oggetto o specificare un gestore di aggiornamento. Vedere la figura riportata nell'argomento [oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md).  
  
 È possibile disabilitare l'impostazione predefinita la disabilitazione degli oggetti dell'interfaccia utente. Per altre informazioni, vedere la [membro m_bAutoMenuEnable](../mfc/reference/cframewnd-class.md#m_bautomenuenable) membro della classe `CFrameWnd` nel *riferimenti alla libreria MFC*.  
  
 Inizializzazione di menu è automatica in framework, che si verificano durante l'applicazione riceve un messaggio WM_INITMENUPOPUP. Durante il ciclo inattivo, il framework esegue la ricerca del routing dei comandi per gestori dei pulsanti dell'aggiornamento in modo molto simile a quanto accade per i menu.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)

