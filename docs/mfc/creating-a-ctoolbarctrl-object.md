---
title: Creazione di un oggetto CToolBarCtrl
ms.date: 11/04/2016
f1_keywords:
- CToolBarCtrl
helpviewer_keywords:
- toolbar controls [MFC], creating
- CToolBarCtrl class [MFC], creating toolbars
ms.assetid: a4f6bf0c-0195-4dbf-a09e-aee503e19dc3
ms.openlocfilehash: d0f41731e3a4db7b15d4f2a7ebaac94135d5350d
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265106"
---
# <a name="creating-a-ctoolbarctrl-object"></a>Creazione di un oggetto CToolBarCtrl

[CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetti contengono diverse strutture di dati interni, ovvero un elenco delle bitmap di pulsanti di immagine, un elenco di stringhe di etichetta pulsante e un elenco di `TBBUTTON` strutture, che associa un'immagine e/o della stringa con la posizione, lo stile, lo stato, e ID comando del pulsante. Ognuno degli elementi di queste strutture di dati viene definita con un indice in base zero. Prima di poter usare un `CToolBarCtrl` dell'oggetto, è necessario configurare queste strutture di dati. Per un elenco delle strutture di dati, vedere [controlli barra degli strumenti](controls-mfc.md) nel SDK di Windows. L'elenco di stringhe è utilizzabile solo per le etichette di pulsante; Nella barra degli strumenti non è possibile recuperare le stringhe.

Per utilizzare un oggetto `CToolBarCtrl`, in genere vengono effettuate le seguenti operazioni:

### <a name="to-use-a-ctoolbarctrl-object"></a>Usare un oggetto CToolBarCtrl

1. Costruire il [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto.

1. Chiamare [Create](../mfc/reference/ctoolbarctrl-class.md#create) per creare il controllo comune barra degli strumenti di Windows e associarlo al `CToolBarCtrl` oggetto. Se si desidera immagini bitmap per i pulsanti, aggiungere la bitmap di pulsanti alla barra degli strumenti mediante la chiamata [AddBitmap](../mfc/reference/ctoolbarctrl-class.md#addbitmap). Se si desiderano etichette di stringa per i pulsanti, aggiungere le stringhe alla barra degli strumenti mediante la chiamata [AddString](../mfc/reference/ctoolbarctrl-class.md#addstring) e/o [AddStrings](../mfc/reference/ctoolbarctrl-class.md#addstrings). Dopo avere chiamato `AddString` e/o `AddStrings`, è necessario chiamare [AutoSize](../mfc/reference/ctoolbarctrl-class.md#autosize) per ottenere la stringa o le stringhe da visualizzare.

1. Aggiungere le strutture di pulsanti alla barra degli strumenti mediante la chiamata [AddButtons](../mfc/reference/ctoolbarctrl-class.md#addbuttons).

1. Se si desidera visualizzare le descrizioni, di gestire **TTN_NEEDTEXT** i messaggi nella finestra proprietaria della barra degli strumenti, come descritto in [suggerimento dello strumento Gestione delle notifiche](../mfc/handling-tool-tip-notifications.md).

1. Se si desidera che l'utente sia in grado di personalizzare la barra degli strumenti, gestire i messaggi di notifica di personalizzazione nella finestra del proprietario come descritto in [gestione delle notifiche di personalizzazione](../mfc/handling-customization-notifications.md).

## <a name="see-also"></a>Vedere anche

[Uso di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
