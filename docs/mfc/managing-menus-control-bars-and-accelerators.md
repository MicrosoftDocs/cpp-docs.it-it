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
ms.openlocfilehash: 9945dc68ffd46bbf5e114a79467299e4b67e3659
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621324"
---
# <a name="managing-menus-control-bars-and-accelerators"></a>Gestione di menu, barre di controllo e tasti di scelta rapida

La finestra cornice gestisce l'aggiornamento degli oggetti dell'interfaccia utente, inclusi i menu, i pulsanti della barra degli strumenti, la barra di stato e gli acceleratori. Gestisce inoltre la condivisione della barra dei menu nelle applicazioni MDI.

## <a name="managing-menus"></a>Gestione dei menu

La finestra cornice partecipa all'aggiornamento degli elementi dell'interfaccia utente usando il meccanismo di ON_UPDATE_COMMAND_UI descritto in [come aggiornare gli oggetti dell'interfaccia utente](how-to-update-user-interface-objects.md). I pulsanti sulle barre degli strumenti e altre barre di controllo vengono aggiornati durante il ciclo di inattività. Le voci di menu nei menu a discesa della barra dei menu vengono aggiornate immediatamente prima della disattivazione del menu.

Per le applicazioni MDI, la finestra cornice MDI gestisce la barra dei menu e la didascalia. Una finestra cornice MDI è proprietaria di un menu predefinito utilizzato come barra dei menu quando non sono presenti finestre figlio MDI attive. Quando sono presenti elementi figlio attivi, la barra dei menu della finestra cornice MDI viene rilevata dal menu per la finestra figlio MDI attiva. Se un'applicazione MDI supporta più tipi di documenti, ad esempio i documenti Chart e Worksheet, ogni tipo inserisce i propri menu sulla barra dei menu e modifica la didascalia della finestra cornice principale.

[CMDIFrameWnd](reference/cmdiframewnd-class.md) fornisce implementazioni predefinite per i comandi standard nel menu finestra visualizzato per le applicazioni MDI. In particolare, viene implementato il nuovo comando della finestra (ID_WINDOW_NEW) per creare una nuova finestra cornice e visualizzare il documento corrente. È necessario eseguire l'override di queste implementazioni solo se è necessaria una personalizzazione avanzata.

Più finestre figlio MDI dello stesso tipo di documento condividono le risorse di menu. Se più finestre figlio MDI vengono create dallo stesso modello di documento, possono usare la stessa risorsa di menu, salvando le risorse di sistema in Windows.

## <a name="managing-the-status-bar"></a>Gestione della barra di stato

La finestra cornice posiziona anche la barra di stato all'interno dell'area client e gestisce gli indicatori della barra di stato. La finestra cornice cancella e aggiorna l'area dei messaggi nella barra di stato in base alle esigenze e visualizza le stringhe di richiesta quando l'utente seleziona le voci di menu o i pulsanti della barra degli strumenti, come descritto in [come visualizzare le informazioni sui comandi nella barra di stato](how-to-display-command-information-in-the-status-bar.md).

## <a name="managing-accelerators"></a>Gestione degli acceleratori

Ogni finestra cornice gestisce automaticamente una tabella di tasti di scelta rapida che consente la conversione del tasto di scelta rapida. Questo meccanismo semplifica la definizione dei tasti di scelta rapida (detti anche tasti di scelta rapida) che richiamano i comandi di menu.

## <a name="see-also"></a>Vedere anche

[Utilizzo di finestre cornice](using-frame-windows.md)
