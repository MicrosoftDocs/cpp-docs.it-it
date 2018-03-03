---
title: Utilizzo di controlli Tree | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- CTreeCtrl class [MFC], using
- tree controls [MFC], about tree controls
ms.assetid: 4e92941a-e477-4fb1-b1ce-4abeafbef1c1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ea3b7e0348cb21aa4338293f7cc1119e380f92dc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-tree-controls"></a>Utilizzo di controlli Tree
L'utilizzo tipico di un controllo struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) segua il modello seguente:  
  
-   Viene creato il controllo. Se il controllo è specificato in un modello di finestra di dialogo o se si utilizza `CTreeView`, la creazione avviene automaticamente quando viene creata la finestra di dialogo o la vista. Se si desidera creare il controllo struttura ad albero come finestra figlio di un'altra finestra, utilizzare il [crea](../mfc/reference/ctreectrl-class.md#create) funzione membro.  
  
-   Se si desidera utilizzare le immagini il controllo struttura ad albero, impostare un elenco di immagini chiamando [SetImageList](../mfc/reference/ctreectrl-class.md#setimagelist). È inoltre possibile modificare il rientro chiamando [SetIndent](../mfc/reference/ctreectrl-class.md#setindent). È consigliabile eseguire questa operazione in [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (per i controlli nelle finestre di dialogo) o [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) (per le visualizzazioni).  
  
-   Inserire il controllo dati chiamando il `CTreeCtrl`del [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) funzione una sola volta per ogni elemento di dati. `InsertItem`Restituisce un handle per l'elemento che è possibile utilizzare per farvi riferimento in un secondo momento, ad esempio quando si aggiungono elementi figlio. È consigliabile inizializzare i dati in `OnInitDialog` (per i controlli nelle finestre di dialogo) o `OnInitialUpdate` (per le visualizzazioni).  
  
-   Mentre l'utente interagisce con il controllo, questo invierà vari messaggi di notifica. È possibile specificare una funzione per gestire i messaggi che si desidera gestire mediante l'aggiunta di un **ON_NOTIFY_REFLECT** macro nella mappa messaggi della finestra del controllo o aggiungendo un `ON_NOTIFY` macro alla mappa messaggi della finestra padre. Vedere [messaggi di notifica del controllo Tree](../mfc/tree-control-notification-messages.md) più avanti in questo argomento per un elenco delle notifiche possibili.  
  
-   Chiamare le varie funzioni membro Set per impostare i valori per il controllo. Le modifiche che è possibile apportare includono il rientro di impostazione e modifica di dati associati a un elemento, testo o immagine.  
  
-   Utilizzare le varie funzioni Get per esaminare il contenuto del controllo. È inoltre possibile scorrere il contenuto del controllo struttura ad albero con le funzioni che consentono di recuperare gli handle di padre, figlio e nodi di pari livello dell'elemento specificato. È anche possibile ordinare gli elementi figlio di un determinato nodo.  
  
-   Una volta terminato con il controllo, assicurarsi che venga eliminato correttamente. Se il controllo struttura ad albero nella finestra di dialogo o se è una vista, e `CTreeCtrl` oggetto verrà eliminato automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CTreeCtrl` vengono eliminati correttamente.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

