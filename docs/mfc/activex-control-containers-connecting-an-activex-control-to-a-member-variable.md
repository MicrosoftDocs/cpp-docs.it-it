---
title: 'Contenitori di controlli ActiveX: Connessione di un controllo ActiveX a una variabile membro'
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX control containers [MFC], accessing ActiveX controls
- ActiveX controls [MFC], member variables of project
- connecting ActiveX controls to container member variables
- ActiveX controls [MFC], accessing
- member variables [MFC], ActiveX controls in project
- ActiveX control containers [MFC], ActiveX controls as member variables
ms.assetid: 7898a336-440d-4a60-be43-cb062b807aee
ms.openlocfilehash: c6bc063875f2a31c582c9de32e24e7dfbc7826c9
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57279939"
---
# <a name="activex-control-containers-connecting-an-activex-control-to-a-member-variable"></a>Contenitori di controlli ActiveX: Connessione di un controllo ActiveX a una variabile membro

Il modo più semplice per un controllo ActiveX all'interno dell'applicazione contenitore di controllo di accesso consiste nell'associare il controllo ActiveX con una variabile membro della classe di finestra di dialogo che conterrà il controllo.

> [!NOTE]
>  Ciò non è l'unico modo per accedere a un controllo incorporato all'interno di una classe contenitore, ma ai fini di questo articolo è sufficiente.

### <a name="adding-a-member-variable-to-the-dialog-class"></a>Aggiunta di una variabile membro alla classe di finestra di dialogo

1. Dalla visualizzazione classi, fare doppio clic la classe di finestra di dialogo principale per aprire il menu di scelta rapida. Ad esempio `CContainerDlg`.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi **Aggiungi variabile**.

1. In aggiunta guidata variabile membro, fare clic su **variabile di controllo**.

1. Nel **ID del controllo** elenco a discesa, selezionare l'ID di controllo del controllo ActiveX incorporato. Ad esempio `IDC_CIRCCTRL1`.

1. Nel **nome della variabile** immettere un nome.

   Ad esempio, *m_circctl*.

1. Fare clic su **fine** per accettare le scelte effettuate e chiudere l'aggiunta guidata variabile membro.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
