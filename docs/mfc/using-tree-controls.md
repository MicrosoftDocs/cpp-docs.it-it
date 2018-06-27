---
title: Utilizzo di controlli Tree | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CTreeCtrl class [MFC], using
- tree controls [MFC], about tree controls
ms.assetid: 4e92941a-e477-4fb1-b1ce-4abeafbef1c1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f9cb5c8892583adac01ca883034b8c0af18595c9
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954595"
---
# <a name="using-tree-controls"></a>Utilizzo di controlli Tree
L'utilizzo tipico di un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) segua il modello seguente:  
  
-   Viene creato il controllo. Se il controllo è specificato in un modello di finestra di dialogo o se si usa `CTreeView`, la creazione avviene automaticamente quando viene creata la finestra di dialogo o la vista. Se si desidera creare il controllo struttura ad albero come finestra figlio di un'altra finestra, utilizzare il [crea](../mfc/reference/ctreectrl-class.md#create) funzione membro.  
  
-   Se si desidera il controllo struttura ad albero per utilizzare le immagini, impostare un elenco di immagini chiamando [SetImageList](../mfc/reference/ctreectrl-class.md#setimagelist). È inoltre possibile modificare il rientro chiamando [SetIndent](../mfc/reference/ctreectrl-class.md#setindent). Il momento migliore per eseguire questa operazione è in [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (per i controlli nelle finestre di dialogo) o [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) (per le visualizzazioni).  
  
-   Inserire dati nel controllo chiamando il `CTreeCtrl`del [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) funzione una sola volta per ogni elemento di dati. `InsertItem` Restituisce un handle per l'elemento che è possibile utilizzare per farvi riferimento in un secondo momento, ad esempio quando si aggiungono elementi figlio. È il momento migliore per inizializzare i dati in `OnInitDialog` (per i controlli nelle finestre di dialogo) o `OnInitialUpdate` (per le visualizzazioni).  
  
-   Mentre l'utente interagisce con il controllo, questo invierà vari messaggi di notifica. È possibile specificare una funzione per gestire ogni messaggio che si desidera gestire mediante l'aggiunta di una macro ON_NOTIFY_REFLECT alla mappa messaggi della finestra del controllo o mediante l'aggiunta di una macro ON_NOTIFY alla mappa messaggi della finestra padre. Vedere [messaggi di notifica del controllo Tree](../mfc/tree-control-notification-messages.md) più avanti in questo argomento per un elenco delle notifiche possibili.  
  
-   Chiamare le varie funzioni membro Set per impostare i valori per il controllo. Le modifiche effettuabili includono l'impostazione del rientro e modifica del testo, immagine o dati associati a un elemento.  
  
-   Utilizzare le varie funzioni Get per esaminare il contenuto del controllo. È inoltre possibile scorrere il contenuto del controllo albero con le funzioni che consentono di recuperare gli handle di padre, figlio e nodi di pari livello dell'elemento specificato. È anche possibile ordinare gli elementi figlio di un determinato nodo.  
  
-   Una volta terminato con il controllo, assicurarsi che venga eliminato correttamente. Se il controllo struttura ad albero è in una finestra di dialogo o se è una vista, e il `CTreeCtrl` oggetto verrà eliminato automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CTreeCtrl` vengono eliminati correttamente.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

