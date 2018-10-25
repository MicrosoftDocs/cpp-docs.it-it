---
title: 'Contenitori di controlli ActiveX: Connessione di un controllo ActiveX a una variabile membro | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ActiveX control containers [MFC], accessing ActiveX controls
- ActiveX controls [MFC], member variables of project
- connecting ActiveX controls to container member variables
- ActiveX controls [MFC], accessing
- member variables [MFC], ActiveX controls in project
- ActiveX control containers [MFC], ActiveX controls as member variables
ms.assetid: 7898a336-440d-4a60-be43-cb062b807aee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1e6fed56e21f2b5d97b9b89596630cd63f544148
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50078687"
---
# <a name="activex-control-containers-connecting-an-activex-control-to-a-member-variable"></a>Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro

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

