---
title: "Elaborazione dei messaggi di notifica nei controlli casella combinata estesi | Microsoft Docs"
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
  - "caselle combinate estese, notifiche"
  - "notifiche, controlli della casella combinata estesa"
ms.assetid: 4e442758-d054-4746-bb1a-6ff84accb127
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elaborazione dei messaggi di notifica nei controlli casella combinata estesi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando gli utenti interagiscono con la casella combinata estesa, il controllo \(`CComboBoxEx`\) invia i messaggi di notifica alla finestra padre, in genere un oggetto finestra di dialogo o visualizzazione. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo, viene inviata la notifica **CBEN\_BEGINEDIT**.  
  
 Usare la finestra Proprietà per aggiungere la gestione della notifica alla classe padre per i messaggi da implementare.  
  
 L'elenco seguente descrive le diverse notifiche inviate dal controllo della casella combinata estesa.  
  
-   **CBEN\_BEGINEDIT** Inviata quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo.  
  
-   **CBEN\_DELETEITEM** Inviata quando viene eliminato un elemento.  
  
-   **CBEN\_DRAGBEGIN** Inviata quando l'utente inizia a trascinare l'immagine dell'elemento visualizzato nella parte modificabile del controllo.  
  
-   **CBEN\_ENDEDIT** Inviata quando l'utente termina un'operazione all'interno della casella di modifica o seleziona un elemento dall'elenco a discesa del controllo.  
  
-   **CBEN\_GETDISPINFO** Inviata per recuperare le informazioni di visualizzazione relative a un elemento di callback.  
  
-   **CBEN\_INSERTITEM** Inviata quando viene inserito un nuovo elemento nel controllo.  
  
## Vedere anche  
 [Utilizzo di CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controlli](../mfc/controls-mfc.md)