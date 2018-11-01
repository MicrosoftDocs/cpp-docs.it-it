---
title: Finestre di dialogo modali e non modali
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], modeless
- modeless dialog boxes [MFC]
- MFC dialog boxes [MFC], modal
- modal dialog boxes [MFC]
ms.assetid: e83df336-5994-4b8f-8233-7942f997315b
ms.openlocfilehash: 7e1dc9c40f60dc46117ee0673a038d5a63df7680
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50528362"
---
# <a name="modal-and-modeless-dialog-boxes"></a>Finestre di dialogo modali e non modali

È possibile usare classi [CDialog](../mfc/reference/cdialog-class.md) per gestire due tipi di finestre di dialogo:

- *Finestre di dialogo modali*, che richiede l'utente deve rispondere prima di continuare a utilizzare il programma

- *Finestre di dialogo non modale*, che rimanere sullo schermo e sono disponibili per l'utilizzo in qualsiasi momento, ma consentire altre attività utente

La modifica delle risorse e le procedure per la creazione di un modello di finestra di dialogo sono gli stessi per le finestre di dialogo modali e non.

Creazione di una finestra di dialogo per il programma sono necessari i passaggi seguenti:

1. Usare la [editor finestre](../windows/dialog-editor.md) progettare la finestra di dialogo e creare la risorsa modello di finestra di dialogo.

1. Creare una classe di finestra di dialogo.

1. Connettere il [controlli della risorsa finestra di dialogo per i gestori di messaggi](../windows/adding-event-handlers-for-dialog-box-controls.md) nella classe di finestra di dialogo.

1. Aggiungere i membri dati associati con i controlli della finestra di dialogo e specificare [DDX](../mfc/dialog-data-exchange.md) e [convalida dei dati di finestra di dialogo](../mfc/dialog-data-validation.md) per i controlli.

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

