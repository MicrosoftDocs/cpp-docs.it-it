---
title: 'Contenitori di controlli ActiveX: Utilizzo di controlli in un contenitore Non è una finestra di dialogo | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Create method [MFC], ActiveX controls
- CreateControl method [MFC]
- ActiveX controls [MFC], creating
- ActiveX control containers [MFC], non-dialog containers
- ActiveX control containers [MFC], inserting controls
ms.assetid: 46f195b0-b8ca-4409-8cca-fbfaf2c9ab9f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 16264e9b072d27349d4375bd7c04d5bbac1be597
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33324902"
---
# <a name="activex-control-containers-using-controls-in-a-non-dialog-container"></a>Contenitori di controlli ActiveX: utilizzo di controlli in un contenitore diverso da una finestra di dialogo
In alcune applicazioni, ad esempio un SDI o MDI, si desidererà incorporare un controllo in una finestra dell'applicazione. Il **crea** funzione membro della classe wrapper, inserita da Visual C++, può creare un'istanza del controllo in modo dinamico, senza la necessità di una finestra di dialogo.  
  
 Il **crea** funzione membro ha i seguenti parametri:  
  
 `lpszWindowName`  
 Un puntatore per il testo da visualizzare nella proprietà del controllo di testo o didascalia (se presente).  
  
 `dwStyle`  
 Stili di Windows. Per un elenco completo, vedere [CWnd:: CreateControl](../mfc/reference/cwnd-class.md#createcontrol).  
  
 `rect`  
 Specifica dimensioni e la posizione del controllo.  
  
 `pParentWnd`  
 Specifica la finestra del controllo padre, in genere un `CDialog`. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID di controllo e può essere utilizzato dal contenitore per fare riferimento al controllo.  
  
 Un esempio di utilizzo di questa funzione per creare dinamicamente un controllo ActiveX sarebbe in una visualizzazione di form di un'applicazione SDI. È quindi possibile creare un'istanza del controllo nel `WM_CREATE` gestore dell'applicazione.  
  
 Per questo esempio, `CMyView` è la classe di visualizzazione principale, `CCirc` è la classe wrapper e CIRC. H è l'intestazione (. H) file della classe wrapper.  
  
 Implementazione di questa funzionalità è un processo in quattro passaggi.  
  
### <a name="to-dynamically-create-an-activex-control-in-a-non-dialog-window"></a>Per creare dinamicamente un controllo ActiveX in una finestra non è una finestra di dialogo  
  
1.  Inserire CIRC. H in CMYVIEW. H, appena prima di `CMyView` definizione di classe:  
  
     [!code-cpp[NVC_MFC_AxCont#12](../mfc/codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_1.h)]  
  
2.  Aggiungere una variabile membro (di tipo `CCirc`) alla sezione protetta del `CMyView` situata in CMYVIEW definizione di classe. H:  
  
     [!code-cpp[NVC_MFC_AxCont#13](../mfc/codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_2.h)]  
    [!code-cpp[NVC_MFC_AxCont#14](../mfc/codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_3.h)]  
  
3.  Aggiungere un `WM_CREATE` gestore messaggi a classe `CMyView`.  
  
4.  Nella funzione del gestore, `CMyView::OnCreate`, effettuare una chiamata per il controllo `Create` funzione usando il **questo** puntatore come finestra padre:  
  
     [!code-cpp[NVC_MFC_AxCont#15](../mfc/codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_4.cpp)]  
  
5.  Ricompilare il progetto. Verrà creato un controllo Circ dinamicamente ogni volta che viene creata la visualizzazione dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

