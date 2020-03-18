---
title: Creazione di un oggetto CToolBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- toolbar controls [MFC], creating
- CToolBarCtrl class [MFC], creating toolbars
ms.assetid: a4f6bf0c-0195-4dbf-a09e-aee503e19dc3
ms.openlocfilehash: cf1d2eeb9efd2f8a1e7b433c0e18dd868a8b9aca
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79445889"
---
# <a name="creating-a-ctoolbarctrl-object"></a>Creazione di un oggetto CToolBarCtrl

Gli oggetti [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) contengono diverse strutture di dati interne, un elenco di bitmap per le immagini dei pulsanti, un elenco di stringhe di etichette dei pulsanti e un elenco di strutture di `TBBUTTON`, che associano un'immagine e/o una stringa con la posizione, lo stile, lo stato e l'ID del comando del pulsante. Ogni elemento di queste strutture di dati viene definito da un indice in base zero. Prima di poter usare un oggetto `CToolBarCtrl`, è necessario impostare queste strutture di dati. Per un elenco delle strutture di dati, vedere [controlli della barra degli strumenti](controls-mfc.md) nel Windows SDK. L'elenco di stringhe può essere utilizzato solo per le etichette dei pulsanti; non è possibile recuperare le stringhe dalla barra degli strumenti.

Per utilizzare un oggetto `CToolBarCtrl`, in genere vengono effettuate le seguenti operazioni:

### <a name="to-use-a-ctoolbarctrl-object"></a>Per usare un oggetto CToolBarCtrl

1. Costruire l'oggetto [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) .

1. Chiamare [create](../mfc/reference/ctoolbarctrl-class.md#create) per creare il controllo comune della barra degli strumenti di Windows e collegarlo all'oggetto `CToolBarCtrl`. Se si desiderano le immagini bitmap per i pulsanti, aggiungere le bitmap dei pulsanti alla barra degli strumenti chiamando [AddBitmap](../mfc/reference/ctoolbarctrl-class.md#addbitmap). Se si desiderano le etichette di stringa per i pulsanti, aggiungere le stringhe alla barra degli strumenti chiamando [AddString](../mfc/reference/ctoolbarctrl-class.md#addstring) e/o [AddStrings](../mfc/reference/ctoolbarctrl-class.md#addstrings). Dopo aver chiamato `AddString` e/o `AddStrings`, è necessario chiamare [AutoSize](../mfc/reference/ctoolbarctrl-class.md#autosize) per ottenere la stringa o le stringhe da visualizzare.

1. Aggiungere le strutture dei pulsanti alla barra degli strumenti chiamando [AddButtons](../mfc/reference/ctoolbarctrl-class.md#addbuttons).

1. Se si desiderano le descrizioni comandi, gestire **TTN_NEEDTEXT** messaggi nella finestra proprietaria della barra degli strumenti, come descritto in [gestione delle notifiche delle descrizioni comandi](../mfc/handling-tool-tip-notifications.md).

1. Se si desidera che l'utente sia in grado di personalizzare la barra degli strumenti, gestire i messaggi di notifica della personalizzazione nella finestra proprietaria come descritto in [gestione delle notifiche di personalizzazione](../mfc/handling-customization-notifications.md).

## <a name="see-also"></a>Vedere anche

[Uso di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
