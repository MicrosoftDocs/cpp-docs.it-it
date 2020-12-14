---
description: 'Altre informazioni su: tipi di messaggi associati a oggetti User-Interface'
title: Tipi di messaggi associati a oggetti dell'interfaccia utente
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.uiobject.msgs
helpviewer_keywords:
- message types and user interface objects [MFC]
ms.assetid: 681ee1a7-f6e6-4ea0-9fc6-1fb53a35516e
ms.openlocfilehash: 78ddb9e5290d17f92714d6b50a57ac097bbf104c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219278"
---
# <a name="message-types-associated-with-user-interface-objects"></a>Tipi di messaggi associati a oggetti dell'interfaccia utente

La tabella seguente illustra i tipi di oggetti con cui si lavora e i tipi di messaggi associati.

### <a name="user-interface-objects-and-associated-messages"></a>Oggetti dell'interfaccia utente e messaggi associati

|ID dell'oggetto.|Messaggi|
|---------------|--------------|
|Nome della classe che rappresenta la finestra che lo contiene|Messaggi di Windows appropriati a una classe derivata da [CWnd](../../mfc/reference/cwnd-class.md): una finestra di dialogo, una finestra, una finestra figlio, una finestra figlio MDI o una finestra cornice in primo piano.|
|Menu o identificatore dell'acceleratore|-Message COMMAND (esegue la funzione Program).<br />-UPDATE_COMMAND_UI messaggio (Aggiorna in modo dinamico la voce di menu).|
|Identificatore di controllo|Controllare i messaggi di notifica per il tipo di controllo selezionato.|

## <a name="see-also"></a>Vedi anche

[Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigate-code-cpp.md)
