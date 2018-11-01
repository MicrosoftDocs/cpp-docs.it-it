---
title: Utilizzo di controlli comuni in una finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- common controls [MFC], in dialog boxes
- dialog box controls [MFC], common controls
- Windows common controls [MFC], in dialog boxes
ms.assetid: 17713caf-09f8-484a-bf54-5f48bf09cce9
ms.openlocfilehash: a17dac622ce1527a11d02888d6c4ce7905fcf669
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50458651"
---
# <a name="using-common-controls-in-a-dialog-box"></a>Utilizzo di controlli comuni in una finestra di dialogo

I controlli comuni di Windows possono essere utilizzati [finestre di dialogo](../mfc/dialog-boxes.md), formano le visualizzazioni, visualizzazioni di record e un'altra finestra basata su un modello di finestra di dialogo. La procedura riportata di seguito sarà applicabile anche ai form, dopo alcune piccole modifiche.

## <a name="procedures"></a>Procedure

#### <a name="to-use-a-common-control-in-a-dialog-box"></a>Per utilizzare un controllo comune in una finestra di dialogo

1. Posizionare il controllo sul modello di finestra di dialogo [usando l'editor finestre](../mfc/using-the-dialog-editor-to-add-controls.md).

1. Aggiungere alla classe della finestra di dialogo una variabile membro che rappresenta il controllo. Nel **Aggiunta guidata variabile membro** della finestra di dialogo controllo **la variabile di controllo** e verificare che **controllo** sia selezionato per il **categoria**.

1. Se questo controllo comune fornisce input al programma, dichiarare le variabili membro aggiuntive nella classe della finestra di dialogo per gestire i valori di input.

    > [!NOTE]
    >  È possibile aggiungere tali variabili membro utilizzando il menu di scelta rapida in visualizzazione classi (vedere [aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)).

1. Nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) per la classe di finestra di dialogo, impostare i termini iniziali per il controllo comune. Utilizzando la variabile membro creata nel passaggio precedente, utilizzare le funzioni membro per impostare il valore iniziale e altre impostazioni. Per informazioni dettagliate sulle impostazioni, vedere le seguenti descrizioni dei comandi.

   È anche possibile usare [DDX](../mfc/dialog-data-exchange-and-validation.md) (DDX) per inizializzare i controlli in una finestra di dialogo.

1. Nei gestori per i controlli nella finestra di dialogo, utilizzare la variabile membro per modificare il controllo. Vedere le seguenti descrizioni dei comandi per informazioni dettagliate sui metodi.

    > [!NOTE]
    >  La variabile membro esiste solo finché la finestra di dialogo stessa esiste. Non sarà possibile eseguire una query sul controllo per i valori di input dopo che la finestra di dialogo è stata chiusa. Per utilizzare i valori di input da un controllo comune, eseguire l'override di `OnOK` nella classe della finestra di dialogo. Durante l'override eseguire una query sul controllo per i valori di input e archiviare i valori in variabili membro della classe della finestra di dialogo.

    > [!NOTE]
    >  È inoltre possibile utilizzare Dialog Data Exchange per impostare o recuperare i valori dai controlli in una finestra di dialogo.

## <a name="remarks"></a>Note

L'aggiunta di alcuni controlli comuni a una finestra di dialogo interromperà il funzionamento della finestra di dialogo. Fare riferimento a [aggiunta di controlli in una finestra di dialogo fa sì che la finestra di dialogo alla funzione che non sono più](../windows/adding-controls-to-a-dialog-causes-the-dialog-to-no-longer-function.md) per altre informazioni sulla gestione di questa situazione.

## <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire

- [Aggiungere controlli a una finestra di dialogo manualmente anziché tramite l'editor finestre](../mfc/adding-controls-by-hand.md)

- [Derivare il controllo da uno dei controlli comuni di Windows standard](../mfc/deriving-controls-from-a-standard-control.md)

- [Usare un controllo comune come finestra figlio](../mfc/using-a-common-control-as-a-child-window.md)

- [Ricevere messaggi di notifica da un controllo](../mfc/receiving-notification-from-common-controls.md)

- [Utilizzare dialog data exchange (DDX)](../mfc/dialog-data-exchange-and-validation.md)

## <a name="see-also"></a>Vedere anche

[Creazione e uso di controlli](../mfc/making-and-using-controls.md)<br/>
[Controlli](../mfc/controls-mfc.md)

