---
description: 'Altre informazioni su: gestione e mapping dei messaggi'
title: Gestione e mapping dei messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, messages
- message handling [MFC]
- message maps [MFC]
ms.assetid: 62fe2a1b-944c-449d-a0f0-63c11ee0a3cb
ms.openlocfilehash: 50a55f4718b47054690325e882177fa9acad2f46
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203198"
---
# <a name="message-handling-and-mapping"></a>Gestione e mapping dei messaggi

Questo articolo descrive il modo in cui i messaggi e i comandi vengono elaborati dal framework MFC e come vengono connessi alle funzioni di gestione.

Nei programmi tradizionali per Windows, i messaggi di Windows vengono gestiti in un'istruzione switch di grandi dimensioni in una procedura di finestra. MFC utilizza invece [mappe messaggi](message-categories.md) per eseguire il mapping di messaggi diretti a funzioni membro di classi distinte. Le mappe messaggi sono più efficienti delle funzioni virtuali a questo scopo e consentono ai messaggi di essere gestiti dall'oggetto C++ più appropriato, ovvero applicazione, documento, visualizzazione e così via. È possibile eseguire il mapping di un singolo messaggio o di un intervallo di messaggi, ID comando o ID controllo.

I messaggi di WM_COMMAND, generalmente generati da menu, pulsanti della barra degli strumenti o acceleratori, usano anche il meccanismo di mappa messaggi. MFC definisce un [routing](command-routing.md) standard dei messaggi di comando tra l'applicazione, la finestra cornice, la visualizzazione e i documenti attivi nel programma. Se necessario, è possibile eseguire l'override di questo routing.

Le mappe messaggi forniscono anche un modo per aggiornare gli oggetti dell'interfaccia utente, ad esempio i menu e i pulsanti della barra degli strumenti, per abilitarli o disabilitarli in base al contesto corrente.

Per informazioni generali sui messaggi e sulle code di messaggi in Windows, vedere [messaggi e code](/windows/win32/winmsg/messages-and-message-queues) di messaggi nell'Windows SDK.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Messaggi e comandi nel Framework](messages-and-commands-in-the-framework.md)

- [Come il Framework chiama un gestore di messaggi](how-the-framework-calls-a-handler.md)

- [Modalità di ricerca delle mappe messaggi nel Framework](how-the-framework-searches-message-maps.md)

- [Dichiarazione delle funzioni del gestore di messaggi](declaring-message-handler-functions.md)

- [Mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md)

- [Come visualizzare le informazioni sui comandi nella barra di stato](how-to-display-command-information-in-the-status-bar.md)

- [Aggiornamento dinamico degli oggetti dell'interfaccia utente](how-to-update-user-interface-objects.md)

- [Procedura: creare una mappa messaggi per una classe modello](how-to-create-a-message-map-for-a-template-class.md)

## <a name="see-also"></a>Vedi anche

[Concetti](mfc-concepts.md)<br/>
[Argomenti MFC generali](general-mfc-topics.md)<br/>
[Classe CWnd](reference/cwnd-class.md)<br/>
[CCmdTarget (classe)](reference/ccmdtarget-class.md)
