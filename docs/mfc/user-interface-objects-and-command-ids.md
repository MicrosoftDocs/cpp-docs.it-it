---
description: 'Altre informazioni su: User-Interface gli oggetti e gli ID comando'
title: Oggetti dell'interfaccia utente e ID comando
ms.date: 11/19/2018
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
ms.openlocfilehash: 142b72956e0a1b9e60ef48c7db325cd0ac822444
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263621"
---
# <a name="user-interface-objects-and-command-ids"></a>Oggetti dell'interfaccia utente e ID comando

Le voci di menu, i pulsanti della barra degli strumenti e i tasti di scelta rapida sono "oggetti dell'interfaccia utente" in grado di generare comandi. Ogni oggetto dell'interfaccia utente ha un ID. Associare un oggetto dell'interfaccia utente a un comando assegnando lo stesso ID all'oggetto e al comando. Come illustrato nei [messaggi](../mfc/messages.md), i comandi vengono implementati come messaggi speciali. Nella figura "comandi nel Framework" riportato di seguito viene illustrato il modo in cui il Framework gestisce i comandi. Quando un oggetto dell'interfaccia utente genera un comando, ad esempio `ID_EDIT_CLEAR_ALL` , uno degli oggetti dell'applicazione gestisce il comando, nella figura seguente la funzione dell'oggetto Document `OnEditClearAll` viene chiamata tramite la mappa messaggi del documento.

![Comandi nel framework](../mfc/media/vc385p1.gif "Comandi nel framework") <br/>
Comandi nel framework

Nella figura riportata di seguito viene illustrato il modo in cui MFC aggiorna gli oggetti dell'interfaccia utente, ad esempio le voci di menu e i pulsanti della barra degli strumenti. Prima che un menu venga eliminato o durante il ciclo inattivo nel caso dei pulsanti della barra degli strumenti, MFC instrada un comando di aggiornamento. Nella figura seguente, l'oggetto documento chiama il relativo gestore dei comandi di aggiornamento, `OnUpdateEditClearAll` , per abilitare o disabilitare l'oggetto dell'interfaccia utente.

![Aggiornamento dei comandi nel Framework](../mfc/media/vc385p2.png "Aggiornamento comandi nel framework") <br/>
Aggiornamento dei comandi nel framework

## <a name="see-also"></a>Vedi anche

[Messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md)
