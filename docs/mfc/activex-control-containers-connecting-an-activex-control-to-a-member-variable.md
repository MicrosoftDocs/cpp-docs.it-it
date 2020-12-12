---
description: 'Altre informazioni su: contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro'
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
ms.openlocfilehash: c3b890b5705624a18ec42583b143fbd33e4f0608
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97271902"
---
# <a name="activex-control-containers-connecting-an-activex-control-to-a-member-variable"></a>Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro

Il modo più semplice per accedere a un controllo ActiveX dall'interno dell'applicazione contenitore di controlli consiste nell'associare il controllo ActiveX a una variabile membro della classe della finestra di dialogo che conterrà il controllo.

> [!NOTE]
> Questo non è l'unico modo per accedere a un controllo incorporato dall'interno di una classe contenitore, ma ai fini di questo articolo è sufficiente.

### <a name="adding-a-member-variable-to-the-dialog-class"></a>Aggiunta di una variabile membro alla classe dialog

1. In Visualizzazione classi fare clic con il pulsante destro del mouse sulla classe della finestra di dialogo principale per aprire il menu di scelta rapida Ad esempio: `CContainerDlg`.

1. Dal menu di scelta rapida fare clic su **Aggiungi** e quindi su **Aggiungi variabile**.

1. Nella procedura guidata Aggiungi variabile membro fare clic su **variabile di controllo**.

1. Nella casella di riepilogo **ID** controllo selezionare l'ID del controllo ActiveX incorporato. Ad esempio: `IDC_CIRCCTRL1`.

1. Nella casella **nome variabile** immettere un nome.

   Ad esempio, *m_circctl*.

1. Fare clic su **fine** per accettare le scelte e uscire dalla procedura guidata Aggiungi variabile membro.

## <a name="see-also"></a>Vedi anche

[Contenitori di controlli ActiveX](activex-control-containers.md)
