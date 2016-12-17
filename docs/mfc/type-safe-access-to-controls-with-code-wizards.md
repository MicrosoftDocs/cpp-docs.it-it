---
title: "Accesso indipendente dai tipi a controlli con creazioni guidate codice | Microsoft Docs"
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
  - "creazioni guidate codice"
  - "DDX (Dialog Data Exchange), accesso ai controlli"
  - "controlli delle finestre di dialogo, accesso"
  - "finestre di dialogo, accesso ai controlli"
ms.assetid: b8874393-ee48-4124-8d78-e3648a7e29b9
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accesso indipendente dai tipi a controlli con creazioni guidate codice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si ha familiarità con le funzionalità DDX, è possibile utilizzare la proprietà del controllo in [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) per creare l'accesso indipendente dai tipi.  Questo approccio risulta più semplice rispetto alla creazione di controlli senza creazioni guidate codice.  
  
 Se si desidera semplicemente l'accesso al valore di un controllo, DDX lo sono.  Se si desidera rendere più il valore di un controllo, utilizzare la procedura guidata variabile membro aggiungi per aggiungere una variabile membro della classe appropriata alla classe della finestra di dialogo.  Associare questa variabile membro alla proprietà del controllo.  
  
 Le variabili membro possono includere una proprietà del controllo anziché una proprietà Value.  La proprietà Value si riferisce al tipo di dati restituiti dal controllo, come `CString` o `int`.  La proprietà del controllo abilita l'accesso diretto al controllo tramite un membro dati del cui tipo è una delle classi di controlli in MFC, come `CButton` o `CEdit`.  
  
> [!NOTE]
>  Per un determinato controllo, è possibile, se lo si desidera, è le variabili membro con la proprietà Value e al massimo una variabile membro con la proprietà del controllo.  È possibile eseguire solo un oggetto MFC esegue il mapping a un controllo in quanto più oggetti associati a un controllo, o qualsiasi altra finestra, condurrebbero a ambiguità nella mappa messaggi.  
  
 È possibile utilizzare questo oggetto per chiamare le funzioni membro per l'oggetto controllo.  Tali chiamate influiscono sul controllo nella finestra di dialogo.  Ad esempio, per un controllo casella di controllo rappresentato da `m_Checkbox`variabile, di tipo `CButton`, è possibile chiamare:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#52](../mfc/codesnippet/CPP/type-safe-access-to-controls-with-code-wizards_1.cpp)]  
  
 Qui la variabile membro `m_Checkbox` ha la stessa funzione da funzione membro `GetMyCheckbox` illustrato in [L'accesso indipendente dai tipi ai controlli privi creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md).  Se la casella di controllo non è una casella di controllo automatica, è ancora necessario un gestore nella classe della finestra di dialogo per il messaggio di notifica del controllo di **BN\_CLICKED** quando si fa clic sul pulsante.  
  
 Per ulteriori informazioni sui controlli, vedere [Controlli](../mfc/controls-mfc.md).  
  
## Vedere anche  
 [Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [Accesso indipendente dai tipi ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md)