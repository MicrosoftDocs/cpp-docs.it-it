---
title: "Tipi di messaggi associati a oggetti dell&#39;interfaccia utente | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.uiobject.msgs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di messaggi e oggetti interfaccia utente"
ms.assetid: 681ee1a7-f6e6-4ea0-9fc6-1fb53a35516e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Tipi di messaggi associati a oggetti dell&#39;interfaccia utente
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nella tabella che segue sono riportati i tipi di oggetti utilizzati e i tipi di messaggi associati ad essi.  
  
### Oggetti dell'interfaccia utente e messaggi associati  
  
|ID oggetto|Messaggi|  
|----------------|--------------|  
|Nome della classe, che rappresenta la finestra contenitore|I messaggi di Windows appropriati a una classe derivata da [CWnd](../../mfc/reference/cwnd-class.md): finestra di dialogo, finestra, finestra figlio, finestra figlio MDI o finestra cornice in primo piano.|  
|Identificatore di tasto di scelta rapida o menu|-   Messaggio **COMMAND** \(esegue la funzione del programma\).<br />-   Messaggio **UPDATE\_COMMAND\_UI** \(aggiorna dinamicamente la voce di menu\).|  
|Identificatore di controllo|Messaggi di notifica per il tipo di controllo selezionato.|  
  
## Vedere anche  
 [Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)