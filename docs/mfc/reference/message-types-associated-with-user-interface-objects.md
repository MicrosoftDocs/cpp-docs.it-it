---
title: Associata a oggetti dell'interfaccia utente di tipi di messaggio | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.uiobject.msgs
dev_langs: C++
helpviewer_keywords: message types and user interface objects [MFC]
ms.assetid: 681ee1a7-f6e6-4ea0-9fc6-1fb53a35516e
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4ff4c7aac0c73406503df2f2384249279d3d7f97
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="message-types-associated-with-user-interface-objects"></a>Tipi di messaggi associati a oggetti dell'interfaccia utente
La tabella seguente illustra i tipi di oggetti con cui si lavora e i tipi di messaggi associati.  
  
### <a name="user-interface-objects-and-associated-messages"></a>Oggetti dell'interfaccia utente e i messaggi associati  
  
|ID oggetto|Messages|  
|---------------|--------------|  
|Nome della classe, che rappresenta la finestra che lo contiene|Messaggi di Windows appropriati per un [CWnd](../../mfc/reference/cwnd-class.md)-classe derivata: una finestra di dialogo, finestra, finestra figlio, finestra figlio MDI o una finestra cornice in primo piano.|  
|Identificatore del menu o i tasti di scelta rapida|-   **COMANDO** messaggio (viene eseguita la funzione del programma).<br />-   **UPDATE_COMMAND_UI** messaggio (aggiorna dinamicamente la voce di menu).|  
|Identificatore del controllo|Controllare i messaggi di notifica per il tipo di controllo selezionato.|  
  
## <a name="see-also"></a>Vedere anche  
 [Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Una funzione Virtual in override](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura di classe](../../ide/navigating-the-class-structure-visual-cpp.md)
