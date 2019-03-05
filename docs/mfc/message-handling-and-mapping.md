---
title: Gestione e mapping dei messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, messages
- message handling [MFC]
- message maps [MFC]
ms.assetid: 62fe2a1b-944c-449d-a0f0-63c11ee0a3cb
ms.openlocfilehash: 41f3432b3741019a787ee24b0f508fe8e65e0470
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57279666"
---
# <a name="message-handling-and-mapping"></a>Gestione e mapping dei messaggi

Questa serie di articoli descrive la modalità di elaborazione di messaggi e comandi nel framework MFC e come vengono collegati alle relative funzioni di gestione.

Nei programmi tradizionali per Windows, i messaggi di Windows vengono gestiti in un'istruzione switch di grandi dimensioni in una routine della finestra. MFC utilizza invece [mappe messaggi](../mfc/message-categories.md) eseguire il mapping diretto dei messaggi a funzioni membro delle classi distinte. Mappe messaggi sono più efficienti funzioni virtuali per questo scopo e consentono di messaggi da gestire con l'oggetto di C++ più appropriato, ovvero dell'applicazione, documenti, visualizzazione e così via. È possibile eseguire il mapping di un singolo messaggio o un intervallo di messaggi, ID di comando, o ID di controllo.

WM_COMMAND (messaggi), di solito generati per i menu, pulsanti della barra degli strumenti o gli acceleratori, ovvero anche utilizzare il meccanismo della mappa messaggi. MFC definisce uno standard [routing](../mfc/command-routing.md) dei messaggi di comando tra l'applicazione, frame di finestra, visualizzazione e i documenti attivi nel programma. È possibile eseguire l'override di questo ciclo, se è necessario.

Mappe messaggi inoltre forniscono un modo per aggiornare oggetti dell'interfaccia utente (ad esempio menu e pulsanti della barra degli strumenti), abilitando o disabilitando in modo da soddisfare il contesto corrente.

Per informazioni generali sui messaggi e le code di messaggi in Windows, vedere [i messaggi e le code di messaggi](/windows/desktop/winmsg/messages-and-message-queues) nel SDK di Windows.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

- [Modo in cui il framework chiama un gestore di messaggi](../mfc/how-the-framework-calls-a-handler.md)

- [Come vengono cercate le mappe messaggi nel framework](../mfc/how-the-framework-searches-message-maps.md)

- [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)

- [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)

- [Come visualizzare informazioni sui comandi nella barra di stato](../mfc/how-to-display-command-information-in-the-status-bar.md)

- [Aggiornamento dinamico di oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)

- [Procedura: Creare una mappa messaggi per una classe modello](../mfc/how-to-create-a-message-map-for-a-template-class.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[Classe CWnd](../mfc/reference/cwnd-class.md)<br/>
[Classe CCmdTarget](../mfc/reference/ccmdtarget-class.md)
