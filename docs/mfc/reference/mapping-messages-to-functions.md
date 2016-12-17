---
title: "Mapping di messaggi a funzioni | Microsoft Docs"
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
  - "vc.codewiz.mapping.msg.function"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mappe messaggi [C++], mapping di messaggi a funzioni"
  - "messaggi Windows [C++], aggiunta di gestori messaggi"
ms.assetid: a7727a62-f638-4b20-b7f5-131f47200d6a
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Mapping di messaggi a funzioni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La finestra Proprietà consente di associare i gestori messaggi \(funzioni membro delle classi dell'interfaccia utente MFC\) ai messaggi generati dalle risorse dell'applicazione.  L'associazione viene creata sulla base delle [mappe messaggi MFC](../../mfc/messages-and-commands-in-the-framework.md).  
  
 Quando si utilizza Visualizzazione classi per creare una nuova classe derivata da una delle classi del framework, una classe completa e funzionale viene automaticamente posizionata nei file di intestazione \(H\) e di implementazione \(CPP\) specificati.  
  
> [!NOTE]
>  Per aggiungere una nuova classe che non gestisce messaggi, crearla direttamente nell'editor di testo.  
  
### Per definire o rimuovere un gestore messaggi mediante la finestra Proprietà  
  
1.  In Visualizzazione classi fare clic sulla classe.  
  
2.  Nella finestra Proprietà fare clic sul pulsante **Messaggi**.  
  
    > [!NOTE]
    >  Il pulsante **Messaggi** è disponile quando si seleziona il nome della classe in Visualizzazione classi o quando si fa clic all'interno della finestra del codice sorgente.  
  
     Se il progetto dispone di un gestore per un messaggio, il nome di tale gestore verrà visualizzato nella colonna destra accanto al messaggio.  
  
3.  Se il messaggio non ha gestori, quindi fare clic sulla cella nella colonna destra della Finestra Proprietà per visualizzare il nome suggerito per il gestore come \<addHandlerName\>. Ad esempio, il gestore messaggi di `WM_TIMER` suggerisce \<aggiunge\>`OnTimer`\).  
  
4.  Fare clic sul nome suggerito per aggiungere il codice stub per la funzione.  
  
5.  Per modificare un gestore messaggi, fare doppio clic sul messaggio in Visualizzazione classi e modificare il codice nella finestra di origine.  
  
 Per rimuovere un gestore messaggi, fare doppio clic sul gestore nella colonna destra e \<selezionare il\>deleteHandlerName.  Il codice della funzione verrà impostato come commento.  
  
## Vedere anche  
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Adding Event Handlers for Dialog Box Controls](../../mfc/adding-event-handlers-for-dialog-box-controls.md)   
 [Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)