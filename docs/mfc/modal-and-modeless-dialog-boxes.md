---
title: Finestre di dialogo modali e non modali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC dialog boxes [MFC], modeless
- modeless dialog boxes [MFC]
- MFC dialog boxes [MFC], modal
- modal dialog boxes [MFC]
ms.assetid: e83df336-5994-4b8f-8233-7942f997315b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6e355c3bcef9edb68e49903dafbf4719fe0aa925
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46417527"
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

