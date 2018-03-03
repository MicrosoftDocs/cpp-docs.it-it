---
title: Gestione dei menu, barre di controllo e tasti di scelta rapida | Documenti Microsoft
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 74b026f273eec0bc689cc6959890b07beb570893
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="managing-menus-control-bars-and-accelerators"></a>Gestione di menu, barre di controllo e tasti di scelta rapida
La finestra cornice gestisce l'aggiornamento oggetti dell'interfaccia utente, inclusi i menu, pulsanti della barra degli strumenti, la barra di stato e tasti di scelta rapida. Gestisce inoltre la barra dei menu nelle applicazioni MDI di condivisione.  
  
## <a name="managing-menus"></a>Gestione dei menu  
 Aggiornamento degli elementi dell'interfaccia utente utilizzando la finestra cornice fa parte di `ON_UPDATE_COMMAND_UI` meccanismo descritto in [come oggetti dell'interfaccia utente aggiornamento](../mfc/how-to-update-user-interface-objects.md). Pulsanti delle barre degli strumenti e altre barre di controllo vengono aggiornati durante il ciclo inattivo. Appena prima che il menu verso il basso, vengono aggiornati gli elementi di menu nel menu a discesa nella barra dei menu.  
  
 Per le applicazioni MDI, la finestra cornice MDI gestisce la barra dei menu e la didascalia. Una finestra cornice MDI possiede un menu predefinito che viene utilizzato come barra dei menu quando sono non presenti attive finestre figlio MDI. Quando sono presenti elementi figlio attivi, la barra dei menu della finestra cornice MDI viene preso in carico da menu per la finestra figlio MDI attiva. Se un'applicazione MDI supporta più tipi di documento, ad esempio i documenti grafico e foglio di lavoro, ogni tipo inserisce i proprio menu nella barra dei menu e cambia la didascalia della finestra cornice principale.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) fornisce le implementazioni predefinite per i comandi standard del menu finestra che viene visualizzato per le applicazioni MDI. In particolare, il comando nuova finestra (**ID_WINDOW_NEW**) viene implementato per creare una nuova finestra cornice e visualizzazione del documento corrente. È necessario eseguire l'override di queste implementazioni solo se è necessario Personalizzazione avanzata.  
  
 Più finestre figlio MDI dello stesso tipo di documento condividono le risorse di menu. Se più finestre figlio MDI vengono creati dal modello di documento stesso, viene utilizzato tutte la stessa risorsa di menu, salvare le risorse di sistema Windows.  
  
## <a name="managing-the-status-bar"></a>La barra di stato di gestione  
 La finestra cornice posiziona la barra di stato all'interno dell'area client e gestisce lo stato anche indicatori. La finestra cornice Cancella e aggiorna l'area dei messaggi nella barra di stato in base alle esigenze e visualizza le stringhe di richiesta come l'utente seleziona le voci di menu o pulsanti della barra degli strumenti, come descritto in [procedura per visualizzare informazioni di comando nella barra di stato](../mfc/how-to-display-command-information-in-the-status-bar.md).  
  
## <a name="managing-accelerators"></a>Gestione dei tasti di scelta rapida  
 Ogni finestra cornice gestisce una tabella di tasti di scelta rapida facoltativo traduzione della tastiera tasti di scelta rapida per l'utente automaticamente. Questo meccanismo rende più facile definire tasti di scelta rapida (detti anche tasti di scelta rapida) che richiamano i comandi di menu.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)

