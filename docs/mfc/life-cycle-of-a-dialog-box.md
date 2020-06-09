---
title: Utilizzo delle finestre di dialogo in MFC
ms.date: 09/27/2019
helpviewer_keywords:
- dialog boxes [MFC], life cycle
- modal dialog boxes [MFC], life cycle
- modeless dialog boxes [MFC], life cycle
- MFC dialog boxes [MFC], life cycle
- life cycle of dialog boxes [MFC]
ms.assetid: e16fd78e-238d-4f31-8c9d-8564f3953bd9
ms.openlocfilehash: d365be21ef19a6779df649e9368fdc0cda4851df
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621439"
---
# <a name="working-with-dialog-boxes-in-mfc"></a>Utilizzo delle finestre di dialogo in MFC

Durante il ciclo di vita di una finestra di dialogo, l'utente richiama la finestra di dialogo, in genere all'interno di un gestore di comando che crea e Inizializza l'oggetto finestra di dialogo, l'utente interagisce con la finestra di dialogo, quindi la finestra di dialogo viene chiusa.

Per le finestre di dialogo modali, il gestore raccoglie tutti i dati immessi dall'utente una volta chiusa la finestra di dialogo. Poiché l'oggetto finestra di dialogo esiste dopo che la finestra di dialogo è stata chiusa, è possibile usare semplicemente le variabili membro della classe della finestra di dialogo per estrarre i dati.

Per le finestre di dialogo non modali, è spesso possibile estrarre dati dall'oggetto finestra di dialogo mentre la finestra di dialogo è ancora visibile. A un certo punto, l'oggetto finestra di dialogo viene eliminato definitivamente; Quando ciò accade, dipende dal codice.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione e visualizzazione di finestre di dialogo](creating-and-displaying-dialog-boxes.md)

- [Creazione di finestre di dialogo modali](creating-modal-dialog-boxes.md)

- [Creazione di finestre di dialogo non modali](creating-modeless-dialog-boxes.md)

- [Uso di un modello di finestra di dialogo in memoria](using-a-dialog-template-in-memory.md)

- [Impostazione del colore di sfondo della finestra di dialogo](setting-the-dialog-boxs-background-color.md)

- [Inizializzazione della finestra di dialogo](initializing-the-dialog-box.md)

- [Gestione dei messaggi di Windows nella finestra di dialogo](handling-windows-messages-in-your-dialog-box.md)

- [Recupero di dati dall'oggetto finestra di dialogo](retrieving-data-from-the-dialog-object.md)

- [Chiusura della finestra di dialogo](closing-the-dialog-box.md)

- [Eliminazione definitiva della finestra di dialogo](destroying-the-dialog-box.md)

- [DDX (Dialog Data Exchange) e convalida (DDV)](dialog-data-exchange-and-validation.md)

- [Finestre di dialogo della finestra delle proprietà](property-sheets-and-property-pages-mfc.md)

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](dialog-boxes.md)
