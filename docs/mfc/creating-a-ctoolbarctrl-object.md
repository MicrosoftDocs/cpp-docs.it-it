---
title: Creazione di un oggetto CToolBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- toolbar controls [MFC], creating
- CToolBarCtrl class [MFC], creating toolbars
ms.assetid: a4f6bf0c-0195-4dbf-a09e-aee503e19dc3
ms.openlocfilehash: 2627f9aaceeab7760e15b23435233e124c5ea6f0
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618995"
---
# <a name="creating-a-ctoolbarctrl-object"></a>Creazione di un oggetto CToolBarCtrl

Gli oggetti [CToolBarCtrl](reference/ctoolbarctrl-class.md) contengono diverse strutture di dati interne, un elenco di bitmap per le immagini dei pulsanti, un elenco di stringhe di etichette dei pulsanti e un elenco di `TBBUTTON` strutture, che associano un'immagine e/o una stringa con la posizione, lo stile, lo stato e l'ID del comando del pulsante. Ogni elemento di queste strutture di dati viene definito da un indice in base zero. Prima di poter utilizzare un `CToolBarCtrl` oggetto, è necessario impostare queste strutture di dati. Per un elenco delle strutture di dati, vedere [controlli della barra degli strumenti](controls-mfc.md) nel Windows SDK. L'elenco di stringhe può essere utilizzato solo per le etichette dei pulsanti; non è possibile recuperare le stringhe dalla barra degli strumenti.

Per utilizzare un oggetto `CToolBarCtrl`, in genere vengono effettuate le seguenti operazioni:

### <a name="to-use-a-ctoolbarctrl-object"></a>Per usare un oggetto CToolBarCtrl

1. Costruire l'oggetto [CToolBarCtrl](reference/ctoolbarctrl-class.md) .

1. Chiamare [create](reference/ctoolbarctrl-class.md#create) per creare il controllo comune della barra degli strumenti di Windows e collegarlo all' `CToolBarCtrl` oggetto. Se si desiderano le immagini bitmap per i pulsanti, aggiungere le bitmap dei pulsanti alla barra degli strumenti chiamando [AddBitmap](reference/ctoolbarctrl-class.md#addbitmap). Se si desiderano le etichette di stringa per i pulsanti, aggiungere le stringhe alla barra degli strumenti chiamando [AddString](reference/ctoolbarctrl-class.md#addstring) e/o [AddStrings](reference/ctoolbarctrl-class.md#addstrings). Dopo aver chiamato `AddString` e/o `AddStrings` , è necessario chiamare [AutoSize](reference/ctoolbarctrl-class.md#autosize) per ottenere la stringa o le stringhe da visualizzare.

1. Aggiungere le strutture dei pulsanti alla barra degli strumenti chiamando [AddButtons](reference/ctoolbarctrl-class.md#addbuttons).

1. Se si desiderano le descrizioni comandi, gestire **TTN_NEEDTEXT** messaggi nella finestra proprietaria della barra degli strumenti, come descritto in [gestione delle notifiche delle descrizioni comandi](handling-tool-tip-notifications.md).

1. Se si desidera che l'utente sia in grado di personalizzare la barra degli strumenti, gestire i messaggi di notifica della personalizzazione nella finestra proprietaria come descritto in [gestione delle notifiche di personalizzazione](handling-customization-notifications.md).

## <a name="see-also"></a>Vedere anche

[Utilizzo di CToolBarCtrl](using-ctoolbarctrl.md)<br/>
[Controlli](controls-mfc.md)
