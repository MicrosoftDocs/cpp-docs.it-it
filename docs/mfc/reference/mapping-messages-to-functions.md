---
title: Mapping di messaggi a funzioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.mapping.msg.function
dev_langs: C++
helpviewer_keywords:
- Windows messages [MFC], adding message handlers
- message maps [MFC], mapping messages to functions
ms.assetid: a7727a62-f638-4b20-b7f5-131f47200d6a
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ad36b249e601e15e25f32ef1ef7e6d5a28874cf1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mapping-messages-to-functions"></a>Mapping di messaggi a funzioni
La finestra proprietà consente di associare gestori di messaggi (funzioni membro delle classi di interfaccia utente MFC) per i messaggi generati dalle risorse dell'applicazione. Usano [mappe messaggi MFC](../../mfc/messages-and-commands-in-the-framework.md) per creare l'associazione.  
  
 Quando si utilizza Visualizzazione classi per creare una nuova classe derivata da una delle classi di framework, viene automaticamente posiziona un funzionali e completi file di classe nel file di intestazione (h) e implementazione (. cpp) specificato.  
  
> [!NOTE]
>  Per aggiungere una nuova classe che non gestisce messaggi, creare la classe direttamente nell'editor di testo.  
  
### <a name="to-define-or-remove-a-message-handler-using-the-properties-window"></a>Per definire o rimuovere un gestore di messaggi utilizzando la finestra proprietà  
  
1.  In visualizzazione classi, fare clic sulla classe.  
  
2.  Nella finestra Proprietà fare clic su di **messaggi** pulsante.  
  
    > [!NOTE]
    >  Il **messaggi** pulsante è disponibile quando si seleziona il nome della classe in visualizzazione classi o quando fa clic su all'interno della finestra di origine.  
  
     Se il progetto contiene un gestore per un messaggio, il nome del gestore viene visualizzato nella colonna destra accanto al messaggio.  
  
3.  Se il messaggio non dispone di alcun gestore, quindi fare clic sulla cella nella colonna a destra nella finestra proprietà per visualizzare il nome suggerito per il gestore come \<aggiungere >*HandlerName*. (Ad esempio, il `WM_TIMER` gestore messaggi \<aggiungere >`OnTimer`).  
  
4.  Fare clic sul nome suggerito per aggiungere il codice stub per la funzione.  
  
5.  Per modificare un gestore di messaggi, fare doppio clic sul messaggio in visualizzazione classi e modificare il codice nella finestra di origine.  
  
 Per rimuovere un gestore di messaggi, fare doppio clic sul gestore nella colonna destra e selezionare \<eliminare >*HandlerName*. Il codice della funzione è commentato.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Una funzione Virtual in override](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Aggiunta di gestori eventi per i controlli della finestra di dialogo](../../windows/adding-event-handlers-for-dialog-box-controls.md)   
 [Esplorazione della struttura di classe](../../ide/navigating-the-class-structure-visual-cpp.md)
