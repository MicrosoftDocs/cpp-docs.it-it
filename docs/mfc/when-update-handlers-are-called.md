---
description: 'Altre informazioni su: quando vengono chiamati i gestori degli aggiornamenti'
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
ms.openlocfilehash: ee5d402eea4121c9ceb4bcbd48e752549c55b1c1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297174"
---
# <a name="when-update-handlers-are-called"></a>Quando vengono chiamati i gestori aggiornamento

Si supponga che l'utente faccia clic sul pulsante del mouse nel menu file, che genera un messaggio di WM_INITMENUPOPUP. Il meccanismo di aggiornamento del Framework aggiorna collettivamente tutti gli elementi del menu file prima che il menu venga visualizzato in modo che possa essere visualizzato dall'utente.

A tale scopo, il Framework instrada i comandi di aggiornamento per tutte le voci di menu nel menu a comparsa lungo il routing dei comandi standard. Le destinazioni dei comandi nel routing hanno la possibilità di aggiornare tutte le voci di menu tramite la corrispondenza del comando di aggiornamento con una voce della mappa messaggi appropriata (del modulo `ON_UPDATE_COMMAND_UI` ) e la chiamata di una funzione di "gestore di aggiornamento". Pertanto, per un menu con sei voci di menu, vengono inviati sei comandi Update. Se esiste un gestore di aggiornamento per l'ID comando della voce di menu, viene chiamato per eseguire l'aggiornamento. In caso contrario, il Framework verifica l'esistenza di un gestore per tale ID di comando e Abilita o Disabilita la voce di menu nel modo appropriato.

Se il Framework non trova una `ON_UPDATE_COMMAND_UI` voce durante il routing dei comandi, Abilita automaticamente l'oggetto dell'interfaccia utente se è presente una `ON_COMMAND` voce con lo stesso ID di comando. In caso contrario, Disabilita l'oggetto dell'interfaccia utente. Pertanto, per garantire che un oggetto dell'interfaccia utente sia abilitato, fornire un gestore per il comando che l'oggetto genera o fornisce un gestore di aggiornamento. Vedere la figura nell'argomento [oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md).

È possibile disabilitare la disabilitazione predefinita degli oggetti dell'interfaccia utente. Per ulteriori informazioni, vedere il membro [m_bAutoMenuEnable](../mfc/reference/cframewnd-class.md#m_bautomenuenable) della classe `CFrameWnd` nel *riferimento a MFC*.

L'inizializzazione del menu è automatica nel Framework, che si verifica quando l'applicazione riceve un messaggio di WM_INITMENUPOPUP. Durante il ciclo inattivo, il Framework cerca i gestori degli aggiornamenti dei pulsanti in modo analogo a quanto avviene per i menu.

## <a name="see-also"></a>Vedi anche

[Procedura: aggiornare oggetti User-Interface](../mfc/how-to-update-user-interface-objects.md)
