---
title: Gestione e Mapping dei messaggi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- MFC, messages
- message handling [MFC]
- message maps [MFC]
ms.assetid: 62fe2a1b-944c-449d-a0f0-63c11ee0a3cb
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1e6c13ed0bb19ef1ed2864378e151c6be8d98887
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="message-handling-and-mapping"></a>Gestione e mapping dei messaggi
La famiglia di questo articolo descrive la modalità di elaborazione di messaggi e comandi nel framework MFC e come vengono collegati alle relative funzioni di gestione.  
  
 Nei programmi tradizionali per Windows, i messaggi di Windows vengono gestiti in un'istruzione switch di grandi dimensioni in una routine della finestra. MFC utilizza invece [mappe messaggi](../mfc/message-categories.md) eseguire il mapping di messaggi diretti a funzioni membro della classe distinti. Mappe messaggi sono più efficienti di funzioni virtuali per questo scopo e consentire i messaggi devono essere gestiti da oggetto C++ più appropriato, applicazione, documenti, visualizzazione e così via. È possibile eseguire il mapping di un singolo messaggio o un intervallo di messaggi, ID di comando, o ID di controllo.  
  
 **WM_COMMAND** messaggi, di solito generati dal menu, pulsanti della barra degli strumenti o i tasti di scelta rapida, anche utilizzare il meccanismo della mappa messaggi. MFC definisce uno standard [routing](../mfc/command-routing.md) dei messaggi di comando tra l'applicazione, cornice finestra, visualizzazione e i documenti attivi nel programma. È possibile eseguire l'override di questo ciclo se è necessario.  
  
 Mappe messaggi inoltre forniscono un modo per aggiornare oggetti dell'interfaccia utente (ad esempio menu e pulsanti della barra degli strumenti), abilitazione o disabilitazione in modo da soddisfare il contesto corrente.  
  
 Per informazioni generali sui messaggi e le code di messaggi di Windows, vedere [messaggi e le code di messaggi](http://msdn.microsoft.com/library/windows/desktop/ms632590) in Windows SDK.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)  
  
-   [La modalità con cui il framework chiama un gestore di messaggi](../mfc/how-the-framework-calls-a-handler.md)  
  
-   [Come vengono cercate le mappe messaggi nel framework](../mfc/how-the-framework-searches-message-maps.md)  
  
-   [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)  
  
-   [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)  
  
-   [Come visualizzare informazioni sui comandi nella barra di stato](../mfc/how-to-display-command-information-in-the-status-bar.md)  
  
-   [Aggiornamento dinamico di oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)  
  
-   [Procedura: Creare una mappa messaggi per una classe modello](../mfc/how-to-create-a-message-map-for-a-template-class.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [CWnd (classe)](../mfc/reference/cwnd-class.md)   
 [Classe CCmdTarget](../mfc/reference/ccmdtarget-class.md)
