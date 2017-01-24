---
title: "Creazione del controllo List | Microsoft Docs"
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
  - "CListCtrl (classe), creazione di un controllo"
  - "controlli elenco"
ms.assetid: a4cb1729-31b6-4d2b-a44b-367474848a39
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione del controllo List
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come il controllo elenco \([CListCtrl](../mfc/reference/clistctrl-class.md)\) viene creato varia se si utilizza direttamente il controllo o si utilizza la classe [CListView](../mfc/reference/clistview-class.md) invece.  Se si utilizza `CListView`, il framework crea la visualizzazione come parte della sequenza di progettazione documento\/visualizzazione.  Creando una visualizzazione elenco crea il controllo elenco anche i due sono la stessa cosa\).  Il controllo viene creato nella funzione di gestione di [OnCreate](../Topic/CWnd::OnCreate.md) della visualizzazione.  In questo caso, il controllo è pronto per aggiungere elementi, tramite una chiamata a [GetListCtrl](../Topic/CListView::GetListCtrl.md).  
  
### Per utilizzare CListCtrl direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre, aggiungere un controllo elenco alla risorsa modello di finestra di dialogo.  Specificare l'id del controllo  
  
2.  Utilizzare [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo `CListCtrl` con la proprietà del controllo.  È possibile utilizzare questo membro per chiamare le funzioni membro di `CListCtrl`.  
  
3.  Utilizzare la Finestra Proprietà per eseguire il mapping delle funzioni di gestione nella classe della finestra di dialogo per tutti i messaggi di notifica nel controllo elenco è necessario gestire \(vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md)\).  
  
4.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md), impostare gli stili per `CListCtrl`.  Vedere [Modificare gli stili di controllo list](../mfc/changing-list-control-styles.md).  Questa impostazione determina il tipo di "visualizzazione" verrà visualizzato nel controllo, sebbene sia possibile modificare successivamente la visualizzazione.  
  
### Per utilizzare CListCtrl in una finestra del nondialog  
  
1.  Definire il controllo nella visualizzazione o la classe della finestra.  
  
2.  Chiamare la funzione membro di [Crea](../Topic/CListCtrl::Create.md) del controllo, eventualmente [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md), probabilmente fin dalla funzione di gestione di [OnCreate](../Topic/CWnd::OnCreate.md) della finestra padre \(in caso di creazione di una sottoclasse del controllo.  Impostare gli stili per il controllo.  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)