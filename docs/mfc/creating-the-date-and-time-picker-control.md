---
title: "Creazione del controllo selezione data e ora | Microsoft Docs"
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
  - "CDateTimeCtrl (classe), creazione"
  - "DateTimePicker (controllo) [MFC], creazione"
ms.assetid: 764ec2fb-98cd-478b-a5f2-d63f0bb12279
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione del controllo selezione data e ora
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come il controllo di selezione data e ora viene creato varia se si utilizza il controllo in una finestra di dialogo o si creandolo in una finestra del nondialog.  
  
### Per utilizzare CDateTimeCtrl direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre, aggiungere un controllo di selezione data e ora alla risorsa modello di finestra di dialogo.  Specificare l'id del controllo  
  
2.  Specificare tutti gli stili necessari, utilizzando la finestra di dialogo proprietà del controllo di selezione data e ora.  
  
3.  Utilizzare [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md) con la proprietà del controllo.  È possibile utilizzare questo membro per chiamare le funzioni membro di `CDateTimeCtrl`.  
  
4.  Utilizzare la Finestra Proprietà per eseguire il mapping delle funzioni di gestione nella classe della finestra di dialogo per tutti i messaggi che relativi alla data di [notifica](../mfc/processing-notification-messages-in-date-and-time-picker-controls.md) del controllo selezione di tempo è necessario gestire \(vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md)\).  
  
5.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md), impostare tutti gli stili aggiuntivi per l'oggetto di `CDateTimeCtrl`.  
  
### Per utilizzare CDateTimeCtrl in una finestra del nondialog  
  
1.  Dichiarare il controllo nella visualizzazione o la classe della finestra.  
  
2.  Chiamare la funzione membro di [Crea](../Topic/CTabCtrl::Create.md) del controllo, eventualmente [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md), probabilmente fin dalla funzione di gestione di [OnCreate](../Topic/CWnd::OnCreate.md) della finestra padre \(in caso di creazione di una sottoclasse del controllo.  Impostare gli stili per il controllo.  
  
## Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)