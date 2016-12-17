---
title: "Creazione di un controllo casella combinata estesa | Microsoft Docs"
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
  - "CComboBoxEx (classe), creazione di controlli casella combinata estesa"
  - "caselle combinate estese"
  - "caselle combinate estese, creazione"
ms.assetid: a964267e-97b6-4e77-9f89-55bb5c68913f
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di un controllo casella combinata estesa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come il controllo casella combinata estesa viene creato varia se si utilizza il controllo in una finestra di dialogo o si creandolo in una finestra del nondialog.  
  
### Per utilizzare CComboBoxEx direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre, aggiungere un controllo casella combinata estesa alla risorsa modello di finestra di dialogo.  Specificare l'id del controllo  
  
2.  Specificare tutti gli stili necessari, utilizzando la finestra di dialogo proprietà del controllo casella combinata estesa.  
  
3.  Utilizzare [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CComboBoxEx](../mfc/reference/ccomboboxex-class.md) con la proprietà del controllo.  È possibile utilizzare questo membro per chiamare le funzioni membro di `CComboBoxEx`.  
  
4.  Utilizzare la Finestra Proprietà per eseguire il mapping delle funzioni di gestione nella classe della finestra di dialogo per tutti i messaggi di notifica che estesi del controllo casella combinata è necessario gestire \(vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md)\).  
  
5.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md), impostare tutti gli stili aggiuntivi per l'oggetto di `CComboBoxEx`.  
  
### Per utilizzare CComboBoxEx in una finestra del nondialog  
  
1.  Definire il controllo nella visualizzazione o la classe della finestra.  
  
2.  Chiamare la funzione membro di [Crea](../Topic/CTabCtrl::Create.md) del controllo, eventualmente [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md), probabilmente fin dalla funzione di gestione di [OnCreate](../Topic/CWnd::OnCreate.md) della finestra padre.  Impostare gli stili per il controllo.  
  
## Vedere anche  
 [Utilizzo di CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controlli](../mfc/controls-mfc.md)