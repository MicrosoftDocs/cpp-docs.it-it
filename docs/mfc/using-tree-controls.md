---
title: "Utilizzo di controlli Tree | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTreeCtrl (classe), utilizzo"
  - "struttura ad albero (controlli), informazioni sui controlli struttura ad albero"
ms.assetid: 4e92941a-e477-4fb1-b1ce-4abeafbef1c1
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di controlli Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utilizzo tipico di un controllo struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) segue il modello di seguito:  
  
-   Il controllo viene creato.  Se il controllo è specificato nel modello di finestra di dialogo o se si utilizza `CTreeView`, la creazione automatica è quando la finestra di dialogo o visualizzazione viene creata.  Se si desidera creare il controllo struttura ad albero come finestra figlio di un'altra finestra, utilizzare la funzione membro di [Crea](../Topic/CTreeCtrl::Create.md).  
  
-   Se si desidera che il controllo struttura ad albero per l'utilizzo di immagini, impostare un elenco immagini chiamando [SetImageList](../Topic/CTreeCtrl::SetImageList.md).  È inoltre possibile modificare il rientro chiamando [SetIndent](../Topic/CTreeCtrl::SetIndent.md).  Un buon ora eseguire questa operazione è in [OnInitDialog](../Topic/CDialog::OnInitDialog.md) \(per i controlli delle finestre di dialogo\) o in [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) \(per le visualizzazioni\).  
  
-   I dati inseriti nel controllo chiamando `CTreeCtrl`[InsertItem](../Topic/CTreeCtrl::InsertItem.md) vengono eseguite una volta per ogni elemento di dati.  `InsertItem` restituisce un handle all'elemento che è possibile utilizzare per farvi riferimento successivamente, ad esempio quando si aggiunge elementi figlio.  Un buon ora inizializzare i dati è in `OnInitDialog` \(per i controlli delle finestre di dialogo\) o in `OnInitialUpdate` \(per le visualizzazioni\).  
  
-   Poiché l'utente interagisce con il controllo, invierà diversi messaggi di notifica.  È possibile specificare una funzione per gestire ognuno dei messaggi che si desidera gestire l'aggiunta di una macro di **ON\_NOTIFY\_REFLECT** in mappa messaggi della finestra di controllo o aggiungendo una macro di `ON_NOTIFY` alla mappa messaggi della finestra padre.  Vedere più avanti [Messaggi di notifica del controllo struttura ad albero](../mfc/tree-control-notification-messages.md) in questo argomento per un elenco delle notifiche possibili.  
  
-   Chiamare le varie funzioni del membro del gruppo impostare i valori per il controllo.  Le modifiche che è possibile apportare includono impostare il rientro e modificare testo, immagini, o i dati associati a un elemento.  
  
-   Utilizzare i vari funzione Get per esaminare il contenuto del controllo.  È inoltre possibile scorrere il contenuto del controllo struttura ad albero con funzioni che consentono di recuperare l'handle a padre, gli elementi figlio e gli elementi di pari livello di un elemento specificato.  È inoltre possibile ordinare gli elementi figlio di un nodo specifico.  
  
-   Dopo aver utilizzato con il controllo, verificare che abbia avuto eliminato.  Se il controllo struttura ad albero è in una finestra di dialogo o se è una visualizzazione, e l'oggetto di `CTreeCtrl` si distruggeranno automaticamente.  In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto di `CTreeCtrl` correttamente vengono eliminati.  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)