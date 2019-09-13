---
title: Elaborazione dei messaggi di notifica nei controlli casella combinata estesi
ms.date: 11/04/2016
helpviewer_keywords:
- extended combo boxes [MFC], notifications
- notifications [MFC], extended combo box controls
ms.assetid: 4e442758-d054-4746-bb1a-6ff84accb127
ms.openlocfilehash: 044cef644f746f7cb70944805882bd8e2f2806b4
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70908101"
---
# <a name="processing-notification-messages-in-extended-combo-box-controls"></a>Elaborazione dei messaggi di notifica nei controlli casella combinata estesi

Quando gli utenti interagiscono con la casella combinata estesa, il controllo (`CComboBoxEx`) invia i messaggi di notifica alla finestra padre, in genere un oggetto finestra di dialogo o visualizzazione. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo, viene inviata la notifica CBEN_BEGINEDIT.

Utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per aggiungere gestori di notifiche alla classe padre per i messaggi che si desidera implementare.

L'elenco seguente descrive le diverse notifiche inviate dal controllo della casella combinata estesa.

- CBEN_BEGINEDIT inviato quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo.

- CBEN_DELETEITEM inviato quando un elemento è stato eliminato.

- CBEN_DRAGBEGIN inviato quando l'utente inizia a trascinare l'immagine dell'elemento visualizzato nella parte di modifica del controllo.

- CBEN_ENDEDIT inviato quando l'utente ha concluso un'operazione all'interno della casella di modifica o ha selezionato un elemento dall'elenco a discesa del controllo.

- CBEN_GETDISPINFO inviato per recuperare le informazioni di visualizzazione relative a un elemento di callback.

- CBEN_INSERTITEM inviato quando un nuovo elemento è stato inserito nel controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CComboBoxEx](../mfc/using-ccomboboxex.md)<br/>
[Controlli](../mfc/controls-mfc.md)
