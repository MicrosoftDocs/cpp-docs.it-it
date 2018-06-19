---
title: Oggetti dell'interfaccia utente e ID comando | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- keyboard shortcuts, associating with IDs
- MFC, command routing
- toolbar controls [MFC], command ID
- menu items, associating with IDs
- user interface objects [MFC], associating with IDs
- command IDs, user interface objects
- command routing [MFC], MFC
- command handling [MFC], user-interface objects
ms.assetid: 4ea19e9b-ed1e-452e-bd33-7f509107a45b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6b56babf0e42dde521a6bda3a7d9713db519182c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385599"
---
# <a name="user-interface-objects-and-command-ids"></a>Oggetti dell'interfaccia utente e ID comando
Voci di menu, pulsanti della barra degli strumenti e i tasti di scelta rapida sono "oggetti dell'interfaccia utente" in grado di supportare la generazione di comandi. Ognuno di questi oggetti dell'interfaccia utente con un ID. Associare un oggetto dell'interfaccia utente con un comando assegnando lo stesso ID di oggetto e il comando. Come spiegato in [messaggi](../mfc/messages.md), i comandi vengono implementati come messaggi speciali. Nella figura "Comandi del Framework" riportata di seguito viene illustrato il modo in cui il framework gestisce i comandi. Quando un oggetto dell'interfaccia utente genera un comando, ad esempio `ID_EDIT_CLEAR_ALL`, uno degli oggetti dell'applicazione gestisce il comando, nella figura seguente, l'oggetto documento `OnEditClearAll` funzione viene chiamata tramite una mappa messaggi del documento.  
  
 ![Comandi nel Framework](../mfc/media/vc385p1.gif "vc385p1")  
Comandi nel framework  
  
 La figura "Comando aggiornamento in Framework" riportata di seguito mostra MFC degli oggetti dell'interfaccia utente, ad esempio voci di menu e pulsanti della barra degli strumenti. Prima di un menu a discesa o durante il ciclo inattivo nel caso di pulsanti della barra degli strumenti, MFC invia un comando di aggiornamento. Nella figura seguente, l'oggetto documento chiama il gestore del comando update, `OnUpdateEditClearAll`, per abilitare o disabilitare l'oggetto dell'interfaccia utente.  
  
 ![Comando di aggiornamento nel Framework](../mfc/media/vc385p2.png "vc385p2")  
Aggiornamento dei comandi nel framework  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

