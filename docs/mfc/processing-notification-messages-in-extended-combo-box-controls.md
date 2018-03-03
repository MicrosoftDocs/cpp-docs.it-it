---
title: Elaborazione dei messaggi di notifica in estesi controlli casella combinata | Documenti Microsoft
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
- extended combo boxes [MFC], notifications
- notifications [MFC], extended combo box controls
ms.assetid: 4e442758-d054-4746-bb1a-6ff84accb127
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a78e7b9fd8f9c67f14a4bb51088866785d372cca
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="processing-notification-messages-in-extended-combo-box-controls"></a>Elaborazione dei messaggi di notifica nei controlli casella combinata estesi
Quando gli utenti interagiscono con la casella combinata estesa, il controllo (`CComboBoxEx`) invia i messaggi di notifica alla finestra padre, in genere un oggetto finestra di dialogo o visualizzazione. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo, viene inviata la notifica **CBEN_BEGINEDIT** .  
  
 Usare la finestra Proprietà per aggiungere la gestione della notifica alla classe padre per i messaggi da implementare.  
  
 L'elenco seguente descrive le diverse notifiche inviate dal controllo della casella combinata estesa.  
  
-   **CBEN_BEGINEDIT** Inviata quando l'utente attiva l'elenco a discesa o fa clic nella casella di modifica del controllo.  
  
-   **CBEN_DELETEITEM** Inviata quando viene eliminato un elemento.  
  
-   **CBEN_DRAGBEGIN** Inviata quando l'utente inizia a trascinare l'immagine dell'elemento visualizzato nella parte modificabile del controllo.  
  
-   **CBEN_ENDEDIT** Inviata quando l'utente termina un'operazione all'interno della casella di modifica o seleziona un elemento dall'elenco a discesa del controllo.  
  
-   **CBEN_GETDISPINFO** Inviata per recuperare le informazioni di visualizzazione relative a un elemento di callback.  
  
-   **CBEN_INSERTITEM** Inviata quando viene inserito un nuovo elemento nel controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controlli](../mfc/controls-mfc.md)

