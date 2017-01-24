---
title: "Creazione del controllo Tab | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TCS_EX_REGISTERDROP"
  - "TCS_EX_FLATSEPARATORS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTabCtrl (classe), creazione"
  - "controlli delle schede, creazione"
  - "TCS_EX_FLATSEPARATORS (stile esteso)"
  - "TCS_EX_REGISTERDROP (stile esteso)"
ms.assetid: 3a9c2d64-f5f4-41ea-84ab-fceb73c3dbdc
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione del controllo Tab
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La creazione del tab control dipende dall'uso di un controllo una finestra di dialogo o dalla creazione di una finestra non di dialogo.  
  
### Per utilizzare CTabCtrl direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre, aggiungere un controllo Struttura a Schede alla risorsa del modello di finestra di dialogo.  Specificare l'id del controllo  
  
2.  Utilizzare [Aggiungere una procedura guidata alla variabile del membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CTabCtrl](../mfc/reference/ctabctrl-class.md) con la proprietà del controllo.  È possibile utilizzare questo membro per chiamare le funzioni membro di `CTabCtrl`.  
  
3.  Funzioni di gestione della mappa nella classe della finestra di dialogo per i messaggi di notifica del controllo scheda da gestire.  Per ulteriori informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
4.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md), impostare gli stili per `CTabCtrl`.  
  
### Per utilizzare CTabCtrl in una finestra del nondialog  
  
1.  Definire il controllo nella visualizzazione o la classe della finestra.  
  
2.  Chiamare la funzione membro [Crea](../Topic/CTabCtrl::Create.md) del controllo, eventualmente [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md), possibilmente fin dalla funzione di gestione [OnCreate](../Topic/CWnd::OnCreate.md) della finestra padre \(in caso di creazione di una sottoclasse del controllo\).  Impostare gli stili per il controllo.  
  
 Dopo che l'oggetto `CTabCtrl` è stato creato, è possibile impostare o cancellare i seguenti stili estesi:  
  
-   **TCS\_EX\_FLATSEPARATORS** Il controllo a schede estrarrà i separatori tra gli elementi della scheda.  Questo stile esteso influisce solo sui controlli del tab con gli stili di **TCS\_FLATBUTTONS** e di **TCS\_BUTTONS**.  Per impostazione predefinita, creando il controllo a schede nello stile di **TCS\_FLATBUTTONS** imposta tale stile esteso.  
  
-   **TCS\_EX\_REGISTERDROP** Il controllo a schede genera messaggi di notifica di **TCN\_GETOBJECT** per richiedere un oggetto di destinazione di rilascio quando un oggetto viene trascinato sugli elementi della scheda del controllo.  
  
    > [!NOTE]
    >  Per ricevere la notifica di **TCN\_GETOBJECT**, è necessario inizializzare le librerie OLE tramite una chiamata a [AfxOleInit](../Topic/AfxOleInit.md).  
  
 Questi stili possono essere recuperati e impostati, dopo che è stato creato il controllo, con le rispettive chiamate alle funzioni membro di [SetExtendedStyle](../Topic/CTabCtrl::SetExtendedStyle.md) e di [GetExtendedStyle](../Topic/CTabCtrl::GetExtendedStyle.md).  
  
 Ad esempio, impostare lo stile di **TCS\_EX\_FLATSEPARATORS** con le seguenti righe di codice:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#33](../mfc/codesnippet/CPP/creating-the-tab-control_1.cpp)]  
  
 Deselezionare lo stile di **TCS\_EX\_FLATSEPARATORS** da un oggetto di `CTabCtrl` con le seguenti righe di codice:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#34](../mfc/codesnippet/CPP/creating-the-tab-control_2.cpp)]  
  
 Verranno rimossi i separatori visualizzati tra i pulsanti dell'oggetto di `CTabCtrl`.  
  
## Vedere anche  
 [Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controlli](../mfc/controls-mfc.md)