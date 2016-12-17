---
title: "Contenitori di controlli ActiveX: utilizzo di controlli in un contenitore diverso da una finestra di dialogo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori dei controlli ActiveX [C++], inserimento di controlli"
  - "contenitori dei controlli ActiveX [C++], contenitori diversi da finestre di dialogo"
  - "ActiveX (controlli) [C++], creazione"
  - "Create (metodo) [C++], controlli ActiveX"
  - "CreateControl (metodo)"
ms.assetid: 46f195b0-b8ca-4409-8cca-fbfaf2c9ab9f
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori di controlli ActiveX: utilizzo di controlli in un contenitore diverso da una finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In alcune applicazioni, ad esempio un'applicazione SDI o un'applicazione MDI, sarà necessario importare un controllo in una finestra dell'applicazione.  La funzione membro di **Crea** della classe wrapper, immessa da Visual C\+\+, può creare in modo dinamico un'istanza del controllo, senza la necessità di una finestra di dialogo.  
  
 La funzione membro di **Crea** dispone dei seguenti parametri:  
  
 `lpszWindowName`  
 Un puntatore al testo da visualizzare nella proprietà text o barra del titolo del controllo \(se presenti\).  
  
 `dwStyle`  
 Stili di windows.  Per un elenco completo, vedere [CWnd::CreateControl](../Topic/CWnd::CreateControl.md).  
  
 `rect`  
 Specifica la dimensione e la posizione del controllo.  
  
 `pParentWnd`  
 Specifica la finestra padre del controllo, generalmente `CDialog`.  Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'id del controllo e può essere utilizzato da contenitore per fare riferimento al controllo.  
  
 Un esempio di utilizzo di questa funzione per creare dinamicamente un controllo ActiveX formano una visualizzazione form di un'applicazione SDI.  È quindi possibile creare un'istanza del controllo nel gestore di `WM_CREATE` dell'applicazione.  
  
 Per questo esempio, `CMyView` è la classe di visualizzazione principale, `CCirc` è la classe wrapper e CIRC.H è l'intestazione \(. H\) file di classe wrapper.  
  
 Implementare questa funzionalità è un processo a quattro passaggio.  
  
### Per creare dinamicamente un controllo ActiveX in una finestra non finestra di dialogo  
  
1.  Inserire CIRC.H in CMYVIEW.H, subito prima della definizione della classe di `CMyView` :  
  
     [!code-cpp[NVC_MFC_AxCont#12](../mfc/codesnippet/CPP/activex-control-containers-using-controls-in-a-non-dialog-container_1.h)]  
  
2.  Aggiungere una variabile membro \(di tipo `CCirc`\) alla sezione protected della definizione della classe di `CMyView` trova in CMYVIEW.H:  
  
     [!code-cpp[NVC_MFC_AxCont#13](../mfc/codesnippet/CPP/activex-control-containers-using-controls-in-a-non-dialog-container_2.h)]  
    [!code-cpp[NVC_MFC_AxCont#14](../mfc/codesnippet/CPP/activex-control-containers-using-controls-in-a-non-dialog-container_3.h)]  
  
3.  Aggiungere un gestore messaggi di `WM_CREATE` class `CMyView`.  
  
4.  Nella funzione di gestione, `CMyView::OnCreate`, effettua una chiamata alla funzione di `Create` di controllo utilizzando il puntatore di **questo** ad esempio la finestra padre:  
  
     [!code-cpp[NVC_MFC_AxCont#15](../mfc/codesnippet/CPP/activex-control-containers-using-controls-in-a-non-dialog-container_4.cpp)]  
  
5.  Ricompilare il progetto.  Un controllo di Circ verrà creato dinamicamente quando la visualizzazione dell'applicazione viene creata.  
  
## Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)