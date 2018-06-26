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
ms.openlocfilehash: b3aa243ab8c0fb49e20e5b7485acdcd8bb808831
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930468"
---
# <a name="activex-control-containers-connecting-an-activex-control-to-a-member-variable"></a>Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro
Il modo più semplice per accedere a un controllo ActiveX all'interno dell'applicazione contenitore controllo consiste nell'associare il controllo ActiveX a una variabile membro della classe di finestra di dialogo che conterrà il controllo.  
  
> [!NOTE]
>  Ciò non è l'unico modo per accedere a un controllo incorporato all'interno di una classe contenitore, ma ai fini di questo articolo è sufficiente.  
  
### <a name="adding-a-member-variable-to-the-dialog-class"></a>Aggiunta di una variabile membro alla classe di finestra di dialogo  
  
1.  Dalla visualizzazione classi, fare clic sulla classe finestra di dialogo principale per aprire il menu di scelta rapida. Ad esempio `CContainerDlg`.  
  
2.  Dal menu di scelta rapida, fare clic su **Add** e quindi **Aggiungi variabile**.  
  
3.  In aggiunta guidata variabile membro, fare clic su **la variabile di controllo**.  
  
4.  Nel **ID controllo** casella di riepilogo, selezionare l'ID di controllo del controllo ActiveX incorporato. Ad esempio `IDC_CIRCCTRL1`.  
  
5.  Nel **nome della variabile** , immettere un nome.  
  
     Ad esempio *m_circctl*.  
  
6.  Fare clic su **fine** per confermare le scelte effettuate e chiudere l'aggiunta guidata variabile membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

