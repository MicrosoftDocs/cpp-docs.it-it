---
title: Elaborazione dei messaggi di notifica nei controlli casella combinata estesi
ms.date: 11/04/2016
helpviewer_keywords:
- extended combo boxes [MFC], notifications
- notifications [MFC], extended combo box controls
ms.assetid: 4e442758-d054-4746-bb1a-6ff84accb127
ms.openlocfilehash: 1890267f26ef43fd1dbf8fdea28f02e3d882d475
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57280745"
---
# <a name="processing-notification-messages-in-extended-combo-box-controls"></a>Elaborazione dei messaggi di notifica nei controlli casella combinata estesi

Quando gli utenti interagiscono con la casella combinata estesa, il controllo (`CComboBoxEx`) invia i messaggi di notifica alla finestra padre, in genere un oggetto finestra di dialogo o visualizzazione. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo, viene inviata la notifica CBEN_BEGINEDIT.

Usare la finestra Proprietà per aggiungere la gestione della notifica alla classe padre per i messaggi da implementare.

L'elenco seguente descrive le diverse notifiche inviate dal controllo della casella combinata estesa.

- CBEN_BEGINEDIT inviato quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo.

- CBEN_DELETEITEM inviato quando un elemento è stato eliminato.

- CBEN_DRAGBEGIN inviato quando l'utente inizia a trascinare l'immagine dell'elemento visualizzato nella parte modificabile del controllo.

- CBEN_ENDEDIT inviato quando l'utente termina un'operazione all'interno della casella di modifica o seleziona un elemento dall'elenco a discesa del controllo.

- CBEN_GETDISPINFO inviata per recuperare le informazioni di visualizzazione relative a un elemento di callback.

- CBEN_INSERTITEM inviato quando un nuovo elemento è stato inserito nel controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CComboBoxEx](../mfc/using-ccomboboxex.md)<br/>
[Controlli](../mfc/controls-mfc.md)
