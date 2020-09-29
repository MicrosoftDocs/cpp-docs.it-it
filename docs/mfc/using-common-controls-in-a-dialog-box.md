---
title: Utilizzo di controlli comuni in una finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- common controls [MFC], in dialog boxes
- dialog box controls [MFC], common controls
- Windows common controls [MFC], in dialog boxes
ms.assetid: 17713caf-09f8-484a-bf54-5f48bf09cce9
ms.openlocfilehash: 1a3dcb7151952b52affcfeb838ced15f0d116fce
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91500341"
---
# <a name="using-common-controls-in-a-dialog-box"></a>Utilizzo di controlli comuni in una finestra di dialogo

I controlli comuni di Windows possono essere usati nelle [finestre di dialogo](../mfc/dialog-boxes.md), nelle visualizzazioni form, nelle visualizzazioni di record e in qualsiasi altra finestra basata su un modello di finestra di dialogo. La procedura riportata di seguito sarà applicabile anche ai form, dopo alcune piccole modifiche.

## <a name="procedures"></a>Procedure

#### <a name="to-use-a-common-control-in-a-dialog-box"></a>Per utilizzare un controllo comune in una finestra di dialogo

1. Posizionare il controllo nel modello di finestra di dialogo [utilizzando l'editor finestre](../mfc/using-the-dialog-editor-to-add-controls.md).

1. Aggiungere alla classe della finestra di dialogo una variabile membro che rappresenta il controllo. Nella finestra di dialogo **Aggiungi variabile membro** , controllare la **variabile di controllo** e verificare che il **controllo** sia selezionato per la **categoria**.

1. Se questo controllo comune fornisce input al programma, dichiarare le variabili membro aggiuntive nella classe della finestra di dialogo per gestire i valori di input.

    > [!NOTE]
    >  È possibile aggiungere queste variabili membro usando il menu di scelta rapida in Visualizzazione classi (vedere [aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)).

1. In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) per la classe della finestra di dialogo impostare le condizioni iniziali per il controllo comune. Utilizzando la variabile membro creata nel passaggio precedente, utilizzare le funzioni membro per impostare il valore iniziale e altre impostazioni. Per informazioni dettagliate sulle impostazioni, vedere le seguenti descrizioni dei comandi.

   È inoltre possibile utilizzare DDX ( [Dialog Data Exchange](../mfc/dialog-data-exchange-and-validation.md) ) per inizializzare i controlli in una finestra di dialogo.

1. Nei gestori per i controlli nella finestra di dialogo, utilizzare la variabile membro per modificare il controllo. Vedere le seguenti descrizioni dei comandi per informazioni dettagliate sui metodi.

    > [!NOTE]
    >  La variabile membro esiste solo finché la finestra di dialogo stessa esiste. Non sarà possibile eseguire una query sul controllo per i valori di input dopo che la finestra di dialogo è stata chiusa. Per utilizzare i valori di input da un controllo comune, eseguire l'override di `OnOK` nella classe della finestra di dialogo. Durante l'override eseguire una query sul controllo per i valori di input e archiviare i valori in variabili membro della classe della finestra di dialogo.

    > [!NOTE]
    >  È inoltre possibile utilizzare Dialog Data Exchange per impostare o recuperare i valori dai controlli in una finestra di dialogo.

## <a name="remarks"></a>Osservazioni

L'aggiunta di alcuni controlli comuni a una finestra di dialogo interromperà il funzionamento della finestra di dialogo. Per ulteriori informazioni sulla gestione di questa situazione, vedere l'articolo relativo all' [aggiunta di controlli a una finestra di dialogo](../windows/adding-editing-or-deleting-controls.md) .

## <a name="what-do-you-want-to-do"></a>Cosa si vuole fare

- [Aggiungere manualmente i controlli a una finestra di dialogo anziché tramite l'editor finestre](../mfc/adding-controls-by-hand.md)

- [Derivare il controllo da uno dei controlli comuni standard di Windows](../mfc/deriving-controls-from-a-standard-control.md)

- [Utilizzare un controllo comune come finestra figlio](../mfc/using-a-common-control-as-a-child-window.md)

- [Ricevere messaggi di notifica da un controllo](../mfc/receiving-notification-from-common-controls.md)

- [Utilizzare Dialog Data Exchange (DDX)](../mfc/dialog-data-exchange-and-validation.md)

## <a name="see-also"></a>Vedere anche

[Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)<br/>
[Controlli](../mfc/controls-mfc.md)
