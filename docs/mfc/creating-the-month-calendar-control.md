---
title: "Creazione del controllo calendario mensile | Microsoft Docs"
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
  - "CMonthCalCtrl (classe), creazione"
  - "controlli calendario mensile"
  - "controlli calendario mensile, creazione"
ms.assetid: 185cc642-85e9-4365-8a4c-d90b75b010f7
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione del controllo calendario mensile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La creazione del controllo calendario mensile dipende dall'uso di un controllo una finestra di dialogo o dalla creazione di una finestra non di dialogo.  
  
### Per utilizzare CMonthCalCtrl direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre, aggiungere un controllo calendario mensile alla risorsa del modello di finestra di dialogo.  Specificare l'id del controllo  
  
2.  Specificare tutti gli stili necessari, utilizzando la finestra di dialogo Proprietà del controllo calendario mensile.  
  
3.  Utilizzare [Aggiungere una procedura guidata alla variabile del membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md) con la proprietà del controllo.  È possibile utilizzare questo membro per chiamare le funzioni membro di `CMonthCalCtrl`.  
  
4.  Utilizzare la Finestra Proprietà per eseguire il mapping delle funzioni di gestione nella classe della finestra di dialogo per tutti i messaggi di notifica del controllo calendario mensile che è necessario gestire \(vedere [Eseguire il mapping dei messaggi alle funzioni](../mfc/reference/mapping-messages-to-functions.md)\).  
  
5.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md), impostare tutti gli stili aggiuntivi per l'oggetto `CMonthCalCtrl`.  
  
### Per utilizzare CMonthCalCtrl in una finestra non di dialogo  
  
1.  Definire il controllo nella visualizzazione o la classe della finestra.  
  
2.  Chiamare la funzione membro [Crea](../Topic/CMonthCalCtrl::Create.md) del controllo, eventualmente [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md), possibilmente fin dalla funzione di gestione [OnCreate](../Topic/CWnd::OnCreate.md) della finestra padre \(in caso di creazione di una sottoclasse del controllo\).  Impostare gli stili per il controllo.  
  
## Vedere anche  
 [Utilizzo di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)   
 [Controlli](../mfc/controls-mfc.md)