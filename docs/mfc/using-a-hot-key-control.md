---
title: "Utilizzo di un controllo tasto di scelta | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHotKeyCtrl (classe), utilizzo"
  - "controlli tasto di scelta"
ms.assetid: cdd6524b-cc43-447f-b151-164273559685
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Utilizzo di un controllo tasto di scelta
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utilizzo tipico di un controllo del tasto di scelta segue il modello di seguito:  
  
-   Il controllo viene creato.  Se il controllo è specificato nel modello di finestra di dialogo, la creazione automatica è quando la finestra di dialogo viene creata. \(È necessario essere un membro di [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) nella classe della finestra di dialogo corrispondente al controllo dei tasti di scelta.\) In alternativa, è possibile utilizzare la funzione membro di [Crea](../Topic/CHotKeyCtrl::Create.md) per creare il controllo come finestra figlio di una finestra.  
  
-   Se si desidera impostare un valore predefinito per il controllo, chiamare la funzione membro di [SetHotKey](../Topic/CHotKeyCtrl::SetHotKey.md).  Se si desidera impedire uno stato sicuro di spostamento, chiamare [SetRules](../Topic/CHotKeyCtrl::SetRules.md).  Per i controlli in una finestra di dialogo, un buon ora tale scopo è la funzione di [OnInitDialog](../Topic/CDialog::OnInitDialog.md) la finestra di dialogo.  
  
-   L'utente interagisce con il controllo premendo una combinazione di tasti di scelta quando il controllo del tasto di scelta presenta lo stato attivo.  L'utente indica quindi piuttosto che questa attività è completa, ad esempio facendo clic su un pulsante nella finestra di dialogo.  
  
-   Quando il programma viene comunicato che l'utente ha selezionato un tasto di scelta, deve utilizzare la funzione membro [GetHotKey](../Topic/CHotKeyCtrl::GetHotKey.md) per recuperare i valori di stato virtuali di spostamento e principali dal controllo del tasto di scelta.  
  
-   Quando si conosce la chiave selezionare utente, è possibile impostare un tasto di scelta utilizzando uno dei metodi descritti in [Impostare un tasto di scelta](../mfc/setting-a-hot-key.md).  
  
-   Se il controllo del tasto di scelta corrisponde in una finestra di dialogo, e l'oggetto di `CHotKeyCtrl` si distruggeranno automaticamente.  In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto di `CHotKeyCtrl` correttamente vengono eliminati.  
  
## Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)