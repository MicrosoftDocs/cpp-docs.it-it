---
title: Quando vengono chiamati i gestori aggiornamento
ms.date: 11/04/2016
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
ms.openlocfilehash: 4a52c147d1abf02b7c5e89abf868f87a07ab32cc
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64346067"
---
# <a name="when-update-handlers-are-called"></a>Quando vengono chiamati i gestori aggiornamento

Si supponga che l'utente fa clic con il mouse nel menu File, che genera un messaggio WM_INITMENUPOPUP. Meccanismo di aggiornamento del framework aggiorna tutte le voci del menu File collettivamente prima che il menu verso il basso in modo che l'utente può visualizzarlo.

A tale scopo, le route framework aggiornare i comandi per tutte le voci di menu nel menu a comparsa lungo il routing dei comandi standard. Destinazioni comandi sul ciclo di produzione hanno l'opportunità di aggiornare le voci del menu associando il comando update con una voce della mappa messaggi appropriate (nel formato `ON_UPDATE_COMMAND_UI`) e chiamare una funzione "gestore aggiornamento". Di conseguenza, per un menu con sei voci, sei comandi di aggiornamento vengono inviati. Se un gestore aggiornamento non esiste per l'ID di comando della voce di menu, viene chiamato per eseguire l'aggiornamento. In caso contrario, il framework controlla l'esistenza di un gestore per tale ID di comando e Abilita o disabilita la voce di menu come appropriato.

Se il framework non trova un' `ON_UPDATE_COMMAND_UI` voce durante il routing dei comandi, attiva automaticamente l'oggetto dell'interfaccia utente se è presente un `ON_COMMAND` voce in una posizione con lo stesso ID di comando. In caso contrario, viene disattivato l'oggetto dell'interfaccia utente. Pertanto, per garantire che un oggetto dell'interfaccia utente è abilitato, fornire un gestore per il comando generato dall'oggetto o specificare un gestore di aggiornamento. Vedere la figura dell'argomento [oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md).

È possibile disabilitare la disattivazione predefinita di oggetti dell'interfaccia utente. Per altre informazioni, vedere la [membro m_bAutoMenuEnable](../mfc/reference/cframewnd-class.md#m_bautomenuenable) membro della classe `CFrameWnd` nel *riferimenti alla libreria MFC*.

Inizializzazione di menu è automatica in framework, che si verifica quando l'applicazione riceve un messaggio WM_INITMENUPOPUP. Durante il ciclo inattivo, il framework cerca il routing dei comandi per i gestori aggiornamento pulsante in modo analogo a quanto accade per i menu.

## <a name="see-also"></a>Vedere anche

[Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)
