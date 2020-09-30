---
title: Finestre di dialogo modali e non modali
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], modeless
- modeless dialog boxes [MFC]
- MFC dialog boxes [MFC], modal
- modal dialog boxes [MFC]
ms.assetid: e83df336-5994-4b8f-8233-7942f997315b
ms.openlocfilehash: d3497a19ab14dcc9f14dc0419eb65ea033135b6e
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91508854"
---
# <a name="modal-and-modeless-dialog-boxes"></a>Finestre di dialogo modali e non modali

È possibile utilizzare la classe [CDialog](reference/cdialog-class.md) per gestire due tipi di finestre di dialogo:

- *Finestre di dialogo modali*, che richiedono all'utente di rispondere prima di continuare il programma

- *Finestre di dialogo non modali*, che rimaneno sullo schermo e disponibili per l'uso in qualsiasi momento, ma che consentono altre attività utente

La modifica delle risorse e le procedure per la creazione di un modello di finestra di dialogo sono le stesse per le finestre di dialogo modali e non modali.

Per creare una finestra di dialogo per il programma, è necessario eseguire le operazioni seguenti:

1. Utilizzare l' [editor finestre](../windows/dialog-editor.md) per progettare la finestra di dialogo e creare la relativa risorsa del modello di finestra di dialogo.

1. Creare una classe di finestre di dialogo.

1. Connettere i [controlli della risorsa della finestra di dialogo ai gestori di messaggi](../windows/adding-editing-or-deleting-controls.md) nella classe della finestra di dialogo.

1. Aggiungere i membri dati associati ai controlli della finestra di dialogo e specificare le [convalide dei](dialog-data-validation.md) dati della finestra di dialogo e dello [scambio di dati](dialog-data-exchange.md) per i controlli.

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](dialog-boxes.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
