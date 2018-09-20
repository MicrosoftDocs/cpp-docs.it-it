---
title: Elaborazione dei messaggi di notifica in esteso i controlli casella combinata | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- extended combo boxes [MFC], notifications
- notifications [MFC], extended combo box controls
ms.assetid: 4e442758-d054-4746-bb1a-6ff84accb127
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a2ea37fb8724a6427e287f1ebef23344662dcb34
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46382787"
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

