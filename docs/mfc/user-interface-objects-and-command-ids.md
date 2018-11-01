---
title: Oggetti dell'interfaccia utente e ID comando
ms.date: 11/04/2016
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
ms.openlocfilehash: 508e7076797d48e0940b509afa3b94a7b766ebf3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50615358"
---
# <a name="user-interface-objects-and-command-ids"></a>Oggetti dell'interfaccia utente e ID comando

Voci di menu, pulsanti della barra degli strumenti e i tasti di scelta rapida sono "oggetti dell'interfaccia utente" in grado di generare comandi. Ognuno di questi oggetti dell'interfaccia utente con un ID. Si associa un oggetto dell'interfaccia utente con un comando assegnando lo stesso ID per l'oggetto e il comando. Come illustrato in [messaggi](../mfc/messages.md), i comandi vengono implementati come messaggi speciali. La figura "Comandi in Framework" riportato di seguito illustra il modo in cui il framework gestisce i comandi. Quando un oggetto dell'interfaccia utente genera un comando, ad esempio `ID_EDIT_CLEAR_ALL`, uno degli oggetti nell'applicazione gestisce il comando, nella figura seguente, l'oggetto documento `OnEditClearAll` funzione viene chiamata tramite mappa messaggi del documento.

![Comandi nel Framework](../mfc/media/vc385p1.gif "vc385p1") comandi nel Framework

La figura "Comando l'aggiornamento in Framework" riportato di seguito mostra MFC degli oggetti dell'interfaccia utente, ad esempio voci di menu e pulsanti della barra degli strumenti. Prima di un menu o durante il ciclo inattivo nel caso di pulsanti della barra degli strumenti, MFC indirizza un comando di aggiornamento. Nella figura seguente, l'oggetto documento chiama il gestore di comando di aggiornamento, `OnUpdateEditClearAll`, per abilitare o disabilitare l'oggetto di interfaccia utente.

![Comando di aggiornamento nel Framework](../mfc/media/vc385p2.png "vc385p2") aggiornamento comandi nel Framework

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

