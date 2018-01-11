---
title: La definizione di un gestore di messaggi per un messaggio riprodotto | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.defining.msg.msghandler
dev_langs: C++
helpviewer_keywords:
- messages [MFC], reflected
- message handling [MFC], reflected messages
ms.assetid: 5a403528-58c5-46e7-90d5-4a77f0ab9b9c
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d9f5e1c472cdbca177b91851f9b8104094c41047
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="defining-a-message-handler-for-a-reflected-message"></a>Definizione di un gestore messaggi per un messaggio riprodotto
Dopo aver creato una nuova classe di controlli MFC, è possibile definire i gestori di messaggi per tale. Gestori di messaggi riprodotti consentono la classe di controllo gestire i propri messaggi prima che il messaggio venga ricevuto dall'elemento padre. È possibile utilizzare MFC [CWnd:: SendMessage](../../mfc/reference/cwnd-class.md#sendmessage) funzione per inviare messaggi dal controllo di una finestra padre.  
  
 Con questa funzionalità, ad esempio, è possibile creare una casella di riepilogo che verrà ridisegnata, anziché utilizzare la finestra padre per eseguire in questo caso (proprietario). Per ulteriori informazioni sui messaggi riprodotti, vedere [gestione dei messaggi riprodotti](../../mfc/handling-reflected-messages.md).  
  
 Per creare un [controllo ActiveX](../../mfc/activex-controls-on-the-internet.md) con la stessa funzionalità, è necessario creare un progetto per il controllo ActiveX.  
  
> [!NOTE]
>  Non è possibile aggiungere un messaggio riprodotto (OCM _*messaggio*) per un ActiveX controllo utilizzando la finestra Proprietà, come descritto di seguito. È necessario aggiungere manualmente questi messaggi.  
  
### <a name="to-define-a-message-handler-for-a-reflected-message-from-the-properties-window"></a>Per definire un gestore messaggi per un messaggio dalla finestra delle proprietà  
  
1.  Aggiungere un controllo, ad esempio un elenco, un controllo rebar, una barra degli strumenti o un controllo struttura ad albero, a un progetto MFC.  
  
2.  In visualizzazione classi, fare clic sul nome della classe di controlli.  
  
3.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), viene visualizzato il nome della classe controllo nel **nome classe** elenco.  
  
4.  Fare clic su di **messaggi** pulsante per visualizzare i messaggi di Windows disponibili per l'aggiunta al controllo.  
  
5.  Scorrere verso il basso l'elenco dei messaggi nella finestra Proprietà fino a quando non viene visualizzata l'intestazione **riprodotti**. In alternativa, fare clic su di **categorie** pulsante e comprimere la visualizzazione per visualizzare il **riprodotti** intestazione.  
  
6.  Selezionare il messaggio riflesso per il quale si desidera definire un gestore. Message riflessi sono contrassegnati con un segno di uguale (=).  
  
7.  Fare clic sulla cella nella colonna a destra nella finestra proprietà per visualizzare il nome suggerito per il gestore come \<aggiungere >*HandlerName*. (Ad esempio, il **= WM_CTLCOLOR** gestore messaggi \<aggiungere >**CtlColor**).  
  
8.  Fare clic sul nome suggerito per accettare. Il gestore viene aggiunto al progetto.  
  
     I nomi dei gestori di messaggi che sono stati aggiunti vengono visualizzati nella colonna destra della finestra riflessi.  
  
9. Per modificare o eliminare un gestore di messaggi, ripetere i passaggi da 4 a 7. Fare clic sulla cella contenente il nome del gestore per modificare o eliminare e fare clic sull'attività appropriata.  
  
## <a name="see-also"></a>Vedere anche  
 [Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Una funzione Virtual in override](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura di classe](../../ide/navigating-the-class-structure-visual-cpp.md)
