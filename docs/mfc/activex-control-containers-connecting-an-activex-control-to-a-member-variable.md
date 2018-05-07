---
title: 'Contenitori di controlli ActiveX: Connessione di un controllo ActiveX a una variabile membro | Documenti Microsoft'
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
ms.openlocfilehash: 06a2b6a5ab17db7b512f1f44d2eda68169d71645
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="activex-control-containers-connecting-an-activex-control-to-a-member-variable"></a>Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro
Il modo più semplice per accedere a un controllo ActiveX all'interno dell'applicazione contenitore di controllo consiste nell'associare il controllo ActiveX a una variabile membro della classe di finestra di dialogo che conterrà il controllo.  
  
> [!NOTE]
>  Questo non è l'unico modo per accedere a un controllo incorporato dall'interno di una classe contenitore, ma ai fini di questo articolo è sufficiente.  
  
### <a name="adding-a-member-variable-to-the-dialog-class"></a>Aggiunta di una variabile membro alla classe di finestra di dialogo  
  
1.  Visualizzazione classi, fare clic sulla classe finestra di dialogo principale per aprire il menu di scelta rapida. Ad esempio `CContainerDlg`.  
  
2.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi **Aggiungi variabile**.  
  
3.  In aggiunta guidata variabile membro, fare clic su **la variabile di controllo**.  
  
4.  Nel **ID controllo** nella casella di riepilogo, selezionare l'ID di controllo del controllo ActiveX incorporato. Ad esempio `IDC_CIRCCTRL1`.  
  
5.  Nel **nome di variabile** , immettere un nome.  
  
     Ad esempio `m_circctl`.  
  
6.  Fare clic su **fine** per confermare le scelte effettuate e chiudere l'aggiunta guidata variabile membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

