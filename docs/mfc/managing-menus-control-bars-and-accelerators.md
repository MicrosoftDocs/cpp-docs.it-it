---
title: Gestione di menu, barre di controllo e tasti di scelta rapida
ms.date: 11/04/2016
helpviewer_keywords:
- MDI [MFC], frame windows
- control bars [MFC], updating in frame windows
- menus [MFC], updating as context changes
- user interface objects [MFC], updating
- accelerator tables [MFC]
- sharing menus [MFC]
- updating user-interface objects [MFC]
- frame windows [MFC], updating
- status bars [MFC], updating
ms.assetid: 97ca1997-06df-4373-b023-4f7ecd81047b
ms.openlocfilehash: 905a015de6a675de80c49991750f72eccf06afaa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50559630"
---
# <a name="managing-menus-control-bars-and-accelerators"></a>Gestione di menu, barre di controllo e tasti di scelta rapida

La finestra cornice gestisce l'aggiornamento oggetti dell'interfaccia utente, inclusi i menu, pulsanti della barra degli strumenti, barra di stato e tasti di scelta rapida. Gestisce anche la barra dei menu nelle applicazioni MDI di condivisione.

## <a name="managing-menus"></a>Gestione dei menu

La finestra cornice fa parte di aggiornamento degli elementi dell'interfaccia utente utilizzando il meccanismo ON_UPDATE_COMMAND_UI descritto nella [come oggetti dell'interfaccia utente di aggiornamento](../mfc/how-to-update-user-interface-objects.md). Pulsanti di barre degli strumenti e altre barre di controllo vengono aggiornati durante il ciclo inattivo. Voci di menu nel menu a discesa nella barra dei menu vengono aggiornate solo prima che il menu a discesa.

Per le applicazioni MDI, la finestra cornice MDI gestisce la barra dei menu e la didascalia. Una finestra cornice MDI possiede un menu predefinito che viene usato come barra dei menu quando non sono presenti alcuna finestra figlio MDI attivo. Quando sono presenti elementi figlio attivi, barra dei menu della finestra cornice MDI viene preso in carico dal menu di scelta per la finestra figlio MDI attiva. Se un'applicazione MDI supporta più tipi di documento, ad esempio i documenti grafico e del foglio di lavoro, ogni tipo inserisce i proprio menu nella barra dei menu e Modifica didascalia della finestra cornice principale.

[CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) fornisce le implementazioni predefinite per i comandi standard del menu finestra visualizzata per le applicazioni MDI. In particolare, il comando nuova finestra (ID_WINDOW_NEW) viene implementato per creare una nuova finestra cornice e visualizzazione del documento corrente. È necessario eseguire l'override di queste implementazioni solo se si necessita di personalizzazione avanzate.

Più finestre figlio MDI dello stesso tipo di documento condividono le risorse del menu. Se più finestre figlio MDI vengono create dallo stesso modello di documento, esse potranno utilizzare la stessa risorsa di menu, risparmiando per le risorse di sistema in Windows.

## <a name="managing-the-status-bar"></a>La gestione della barra di stato

La finestra cornice posiziona la barra di stato all'interno della relativa area client e gestisce lo stato anche indicatori. La finestra cornice Cancella e aggiorna l'area dei messaggi nella barra di stato in base alle esigenze e consente di visualizzare le stringhe di richiesta quando l'utente seleziona voci di menu o i pulsanti della barra degli strumenti, come descritto in [come visualizzare informazioni sui comandi nella barra di stato](../mfc/how-to-display-command-information-in-the-status-bar.md).

## <a name="managing-accelerators"></a>Gestione dei tasti di scelta rapida

Ogni finestra cornice gestisce una tabella di tasti di scelta rapida facoltativo traduzione della tastiera tasti di scelta rapida per l'utente automaticamente. Questo meccanismo rende più facile definire tasti di scelta rapida (detti anche combinazioni di tasti) che richiamano comandi di menu.

## <a name="see-also"></a>Vedere anche

[Uso di finestre cornice](../mfc/using-frame-windows.md)

