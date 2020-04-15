---
title: 'Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro'
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX control containers [MFC], accessing ActiveX controls
- ActiveX controls [MFC], member variables of project
- connecting ActiveX controls to container member variables
- ActiveX controls [MFC], accessing
- member variables [MFC], ActiveX controls in project
- ActiveX control containers [MFC], ActiveX controls as member variables
ms.assetid: 7898a336-440d-4a60-be43-cb062b807aee
ms.openlocfilehash: 620a9ec58b3a5a8fcdac63626b81fbc4620de399
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371612"
---
# <a name="activex-control-containers-connecting-an-activex-control-to-a-member-variable"></a>Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro

Il modo più semplice per accedere a un controllo ActiveX dall'interno dell'applicazione del contenitore di controlli consiste nell'associare il controllo ActiveX a una variabile membro della classe di finestre di dialogo che conterrà il controllo.

> [!NOTE]
> Questo non è l'unico modo per accedere a un controllo incorporato dall'interno di una classe contenitore, ma ai fini di questo articolo è sufficiente.

### <a name="adding-a-member-variable-to-the-dialog-class"></a>Aggiunta di una variabile membro alla classe di finestre di dialogoAdding a member variable to the dialog class

1. In Visualizzazione classi fare clic con il pulsante destro del mouse sulla classe della finestra di dialogo principale per aprire il menu di scelta rapida. Ad esempio: `CContainerDlg`.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi variabile**.

1. Nell'Aggiunta guidata variabile membro fare clic su **Variabile di controllo**.

1. Nella casella di riepilogo **ID controllo** selezionare l'ID del controllo ActiveX incorporato. Ad esempio: `IDC_CIRCCTRL1`.

1. Nella casella **Nome variabile** immettere un nome.

   Ad esempio, *m_circctl*.

1. Fare clic su **Fine** per accettare le scelte effettuate e uscire dall'Aggiunta guidata variabile membro.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
