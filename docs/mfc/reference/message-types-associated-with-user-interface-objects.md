---
title: Associata a oggetti dell'interfaccia utente di tipi di messaggio | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.codewiz.uiobject.msgs
dev_langs:
- C++
helpviewer_keywords:
- message types and user interface objects [MFC]
ms.assetid: 681ee1a7-f6e6-4ea0-9fc6-1fb53a35516e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 14a2309556ca6c5204247ccbe916aebe472a1da1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33373424"
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
