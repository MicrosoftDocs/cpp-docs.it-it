---
title: Ciclo di vita di una finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- dialog boxes [MFC], life cycle
- modal dialog boxes [MFC], life cycle
- modeless dialog boxes [MFC], life cycle
- MFC dialog boxes [MFC], life cycle
- life cycle of dialog boxes [MFC]
ms.assetid: e16fd78e-238d-4f31-8c9d-8564f3953bd9
ms.openlocfilehash: e92489499a3a5aaaf2fb97e8908cb30d5e168240
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50577619"
---
# <a name="life-cycle-of-a-dialog-box"></a>Ciclo di vita di una finestra di dialogo

Durante il ciclo di vita di una finestra di dialogo, l'utente richiama la finestra di dialogo, in genere all'interno di un gestore comando che crea e inizializza l'oggetto finestra di dialogo, l'utente interagisce con la finestra di dialogo e chiudere la finestra di dialogo.

Per le finestre di dialogo modale, il gestore raccoglie tutti i dati immessi dopo che la finestra di dialogo viene chiusa dall'utente. Poiché l'oggetto finestra di dialogo è presente dopo che la finestra di dialogo è chiusa, è possibile utilizzare semplicemente le variabili membro della classe della finestra per estrarre i dati.

Per le finestre di dialogo non modali, è possibile estrarre dati da un oggetto dialog mentre è ancora visibile la finestra di dialogo. A un certo punto, l'oggetto finestra di dialogo viene distrutto; Quando accade questo dipende dal codice.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Creazione e visualizzazione delle finestre di dialogo](../mfc/creating-and-displaying-dialog-boxes.md)

- [Creazione di finestre di dialogo modali](../mfc/creating-modal-dialog-boxes.md)

- [Creazione di finestre di dialogo non modali](../mfc/creating-modeless-dialog-boxes.md)

- [Usando un modello di finestra di dialogo in memoria](../mfc/using-a-dialog-template-in-memory.md)

- [L'impostazione colore di sfondo della finestra di dialogo](../mfc/setting-the-dialog-boxs-background-color.md)

- [La finestra di dialogo di inizializzazione](../mfc/initializing-the-dialog-box.md)

- [Gestione dei messaggi di Windows nella finestra di dialogo](../mfc/handling-windows-messages-in-your-dialog-box.md)

- [Il recupero dei dati da un oggetto dialog](../mfc/retrieving-data-from-the-dialog-object.md)

- [Chiudere la finestra di dialogo](../mfc/closing-the-dialog-box.md)

- [Eliminazione definitiva di finestra di dialogo](../mfc/destroying-the-dialog-box.md)

- [(DDV) di convalida e DDX (DDX)](../mfc/dialog-data-exchange-and-validation.md)

- [Finestre di dialogo Proprietà finestra](../mfc/property-sheets-and-property-pages-mfc.md)

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)

