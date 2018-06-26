---
title: Gestione dei menu, barre di controllo e tasti di scelta rapida | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1e19cda1869938a854ff03ea83cdda747e8120a0
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929530"
---
# <a name="managing-menus-control-bars-and-accelerators"></a>Gestione di menu, barre di controllo e tasti di scelta rapida
La finestra cornice gestisce aggiornamento oggetti dell'interfaccia utente, inclusi i menu, pulsanti della barra degli strumenti, la barra di stato e tasti di scelta rapida. Gestisce inoltre la barra dei menu nelle applicazioni MDI di condivisione.  
  
## <a name="managing-menus"></a>Gestione dei menu  
 La finestra cornice fa parte di aggiornamento degli elementi dell'interfaccia utente utilizzando il meccanismo ON_UPDATE_COMMAND_UI descritto nel [come oggetti dell'interfaccia utente aggiornamento](../mfc/how-to-update-user-interface-objects.md). I pulsanti in barre degli strumenti e altre barre di controllo vengono aggiornati durante il ciclo inattivo. Voci di menu nel menu a discesa nella barra dei menu vengono aggiornate appena prima che il menu verso il basso.  
  
 Per le applicazioni MDI, la finestra cornice MDI gestisce la barra dei menu e la didascalia. Una finestra cornice MDI possiede un menu predefinito che viene utilizzato come barra dei menu quando non sono presenti alcuna finestra figlio MDI attivo. Quando sono presenti elementi figlio attivi, barra dei menu della finestra cornice MDI viene preso in carico da menu per la finestra figlio MDI attiva. Se un'applicazione MDI supporta più tipi di documento, ad esempio i documenti grafico e foglio di lavoro, ogni tipo inserisce i proprio menu nella barra dei menu e cambia la didascalia della finestra cornice principale.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) fornisce le implementazioni predefinite per i comandi standard del menu finestra che viene visualizzata per le applicazioni MDI. In particolare, il comando nuova finestra (ID_WINDOW_NEW) viene implementato per creare una nuova finestra cornice e visualizzazione il documento corrente. È necessario eseguire l'override di queste implementazioni solo se è necessario Personalizzazione avanzata.  
  
 Più finestre figlio MDI dello stesso tipo di documento condividono le risorse del menu. Se diverse finestre figlio MDI vengono creati dal modello di documento stesso, viene utilizzato tutte la stessa risorsa di menu, il salvataggio le risorse di sistema Windows.  
  
## <a name="managing-the-status-bar"></a>La gestione sulla barra di stato  
 La finestra cornice posiziona la barra di stato all'interno dell'area client anche e gestisce lo stato di indicatori. La finestra cornice Cancella e aggiorna l'area dei messaggi nella barra di stato in base alle esigenze e visualizza le stringhe di richiesta come l'utente seleziona voci di menu o i pulsanti della barra degli strumenti, come descritto in [come visualizzare informazioni sui comandi nella barra di stato](../mfc/how-to-display-command-information-in-the-status-bar.md).  
  
## <a name="managing-accelerators"></a>Gestione dei tasti di scelta rapida  
 Ogni finestra cornice gestisce una tabella di tasti di scelta rapida facoltativo traduzione della tastiera tasti di scelta rapida per l'utente automaticamente. Questo meccanismo rende facile definire tasti di scelta rapida (detti anche tasti di scelta rapida) che richiamano i comandi di menu.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)

