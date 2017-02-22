---
title: "Definizione di un gestore messaggi per un messaggio riprodotto | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.defining.msg.msghandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione dei messaggi, message riflessi"
  - "messaggi, riflessi"
ms.assetid: 5a403528-58c5-46e7-90d5-4a77f0ab9b9c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Definizione di un gestore messaggi per un messaggio riprodotto
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Dopo aver creato una nuova classe di controlli MFC, è possibile definirne i gestori messaggi.  I gestori di messaggi riprodotti consentono la gestione dei messaggi della classe di controlli prima che il messaggio venga ricevuto dal padre.  È possibile utilizzare la funzione [CWnd::SendMessage](../Topic/CWnd::SendMessage.md) MFC per inviare messaggi dal controllo a una finestra padre.  
  
 Con questa funzionalità, ad esempio, è possibile creare una casella di riepilogo in grado di ridisegnarsi invece di affidare tale operazione alla finestra padre.  Per ulteriori informazioni sui messaggi riprodotti, vedere [Gestione dei messaggi riprodotti](../../mfc/handling-reflected-messages.md).  
  
 Per creare un [controllo ActiveX](../../mfc/activex-controls-on-the-internet.md) con la stessa funzionalità, è necessario creare un progetto per il controllo ActiveX.  
  
> [!NOTE]
>  Non è possibile aggiungere un messaggio riprodotto \(OCM\_*Messaggio*\) per un controllo ActiveX mediante la finestra Proprietà, come descritto di seguito.  È necessario aggiungere questi messaggi manualmente.  
  
### Per definire un gestore messaggi per un messaggio riprodotto mediante la finestra Proprietà  
  
1.  Aggiungere al progetto MFC un controllo, quale un elenco, un controllo Rebar, una barra degli strumenti o un controllo struttura ad albero.  
  
2.  In Visualizzazione classi fare clic sul nome della classe di controlli.  
  
3.  Nella [finestra Proprietà](../Topic/Properties%20Window.md) la classe di controlli viene visualizzata nell'elenco **Nome classe**.  
  
4.  Fare clic sul pulsante **Messaggi** per visualizzare i messaggi di Windows che è possibile aggiungere al controllo.  
  
5.  Scorrere l'elenco dei messaggi nella finestra Proprietà finché non viene visualizzata l'intestazione **Riprodotti**.  In alternativa, fare clic sul pulsante **Categorie** e comprimere la visualizzazione per vedere l'intestazione **Riprodotti**.  
  
6.  Selezionare il messaggio riprodotto per il quale si desidera definire un gestore.  I messaggi riprodotti sono contrassegnati dal segno uguale \(\=\).  
  
7.  Fare clic sulla cella nella colonna destra della Finestra Proprietà per visualizzare il nome suggerito per il gestore come \<addHandlerName\>. Ad esempio, il gestore messaggi di **\=WM\_CTLCOLOR** suggerisce \<aggiunge\>**CtlColor**\).  
  
8.  Fare clic sul nome suggerito per accettarlo.  Il gestore verrà aggiunto al progetto.  
  
     I nomi dei gestori messaggi aggiunti verranno visualizzati nella colonna destra della finestra dei messaggi riprodotti.  
  
9. Per modificare o eliminare un gestore dei messaggi, ripetere i passaggi da 4 a 7.  Fare clic sulla cella contenente il nome del gestore per modificarlo o eliminarlo, quindi selezionare l'attività appropriata.  
  
## Vedere anche  
 [Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)