---
title: "Disattivazione dell&#39;opzione Attivo quando visibile | Microsoft Docs"
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
  - "Controlli ActiveX MFC [C++], opzioni di attivazione"
  - "Attivo quando visibile (opzione)"
ms.assetid: 8f7ddc5a-a7a6-4da8-bcb9-1b569f0ecb48
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Disattivazione dell&#39;opzione Attivo quando visibile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo presenta due stati di base: attivo e inattivo.  In genere, questi stati venivano distinti se il controllo aveva una finestra.  Un controllo attivo aveva una finestra; un controllo inattivo invece no.  Con l'introduzione dell'attivazione senza finestra, questa differenza non è più universale, ma si applica ancora a più controlli.  
  
 Rispetto al resto dell'inizializzazione in genere eseguita da un controllo ActiveX, la creazione di una finestra è un'operazione estremamente complessa.  In teoria, un controllo rinvierebbe creare la finestra fino a quando è assolutamente necessario.  
  
 Molti controlli siano attivi al tempo che sono visibili in un contenitore.  Spesso, un controllo può rimanere nello stato attivo finché l'utente non eseguire un'operazione che lo richiedono di diventare attivo \(ad esempio, fare clic con il mouse o la pressione del tasto TAB.  Per generare un controllo rimanga inattivo fino al contenitore è necessario attivarlo, e il flag di **OLEMISC\_ACTIVATEWHENVISIBLE** da vari flag del controllo:  
  
 [!code-cpp[NVC_MFC_AxOpt#9](../mfc/codesnippet/CPP/turning-off-the-activate-when-visible-option_1.cpp)]  
  
 Il flag di **OLEMISC\_ACTIVATEWHENVISIBLE** automaticamente viene omesso se si disabilita l'opzione **Attiva quando visibile** nella pagina di [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) di Creazione guidata controllo ActiveX MFC la creazione del controllo.  
  
## Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)