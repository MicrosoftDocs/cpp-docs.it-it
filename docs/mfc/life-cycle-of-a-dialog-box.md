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
ms.openlocfilehash: ad15250cf9a8dd663072cf9423263260bbb40a0e
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685731"
---
# <a name="working-with-dialog-boxes-in-mfc"></a>Utilizzo delle finestre di dialogo in MFC

Durante il ciclo di vita di una finestra di dialogo, l'utente richiama la finestra di dialogo, in genere all'interno di un gestore di comando che crea e Inizializza l'oggetto finestra di dialogo, l'utente interagisce con la finestra di dialogo, quindi la finestra di dialogo viene chiusa.

Per le finestre di dialogo modali, il gestore raccoglie tutti i dati immessi dall'utente una volta chiusa la finestra di dialogo. Poiché l'oggetto finestra di dialogo esiste dopo che la finestra di dialogo è stata chiusa, è possibile usare semplicemente le variabili membro della classe della finestra di dialogo per estrarre i dati.

Per le finestre di dialogo non modali, è spesso possibile estrarre dati dall'oggetto finestra di dialogo mentre la finestra di dialogo è ancora visibile. A un certo punto, l'oggetto finestra di dialogo viene eliminato definitivamente; Quando ciò accade, dipende dal codice.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione e visualizzazione di finestre di dialogo](../mfc/creating-and-displaying-dialog-boxes.md)

- [Creazione di finestre di dialogo modali](../mfc/creating-modal-dialog-boxes.md)

- [Creazione di finestre di dialogo non modali](../mfc/creating-modeless-dialog-boxes.md)

- [Uso di un modello di finestra di dialogo in memoria](../mfc/using-a-dialog-template-in-memory.md)

- [Impostazione del colore di sfondo della finestra di dialogo](../mfc/setting-the-dialog-boxs-background-color.md)

- [Inizializzazione della finestra di dialogo](../mfc/initializing-the-dialog-box.md)

- [Gestione dei messaggi di Windows nella finestra di dialogo](../mfc/handling-windows-messages-in-your-dialog-box.md)

- [Recupero di dati dall'oggetto finestra di dialogo](../mfc/retrieving-data-from-the-dialog-object.md)

- [Chiusura della finestra di dialogo](../mfc/closing-the-dialog-box.md)

- [Eliminazione definitiva della finestra di dialogo](../mfc/destroying-the-dialog-box.md)

- [DDX (Dialog Data Exchange) e convalida (DDV)](../mfc/dialog-data-exchange-and-validation.md)

- [Finestre di dialogo della finestra delle proprietà](../mfc/property-sheets-and-property-pages-mfc.md)

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)
