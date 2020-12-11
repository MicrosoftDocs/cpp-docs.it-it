---
description: 'Altre informazioni su: elaborazione dei messaggi di notifica nei controlli casella combinata estesa'
title: Elaborazione dei messaggi di notifica nei controlli casella combinata estesi
ms.date: 11/04/2016
helpviewer_keywords:
- extended combo boxes [MFC], notifications
- notifications [MFC], extended combo box controls
ms.assetid: 4e442758-d054-4746-bb1a-6ff84accb127
ms.openlocfilehash: ef004c3649ce78b24aa1c77aa90488ae6391dcca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154812"
---
# <a name="processing-notification-messages-in-extended-combo-box-controls"></a>Elaborazione dei messaggi di notifica nei controlli casella combinata estesi

Quando gli utenti interagiscono con la casella combinata estesa, il controllo (`CComboBoxEx`) invia i messaggi di notifica alla finestra padre, in genere un oggetto finestra di dialogo o visualizzazione. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo, viene inviata la notifica CBEN_BEGINEDIT.

Utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per aggiungere gestori di notifiche alla classe padre per i messaggi che si desidera implementare.

L'elenco seguente descrive le diverse notifiche inviate dal controllo della casella combinata estesa.

- CBEN_BEGINEDIT Inviata quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo.

- CBEN_DELETEITEM Inviata quando viene eliminato un elemento.

- CBEN_DRAGBEGIN Inviata quando l'utente inizia a trascinare l'immagine dell'elemento visualizzato nella parte modificabile del controllo.

- CBEN_ENDEDIT Inviata quando l'utente termina un'operazione all'interno della casella di modifica o seleziona un elemento dall'elenco a discesa del controllo.

- CBEN_GETDISPINFO Inviata per recuperare le informazioni di visualizzazione relative a un elemento di callback.

- CBEN_INSERTITEM Inviata quando viene inserito un nuovo elemento nel controllo.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CComboBoxEx](using-ccomboboxex.md)<br/>
[Controlli](controls-mfc.md)
