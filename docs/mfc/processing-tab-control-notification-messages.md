---
title: "Elaborazione dei messaggi di notifica dei controlli Tab | Microsoft Docs"
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
  - "CTabCtrl (classe), elaborazione delle notifiche"
  - "notifiche, elaborazione in CTabCtrl"
  - "notifiche, controlli delle schede"
  - "elaborazione delle notifiche"
  - "controlli delle schede, elaborazione delle notifiche"
ms.assetid: 758ccb7a-9e73-48f8-9073-23f7cb09918c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Elaborazione dei messaggi di notifica dei controlli Tab
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando gli utenti fanno clic sulle schede o pulsanti, il controllo Struttura a schede \([CTabCtrl](../mfc/reference/ctabctrl-class.md)\) invia i messaggi di notifica alla finestra padre.  Gestire questi messaggi se si desidera eseguire un'operazione nella risposta.  Ad esempio, quando l'utente fa clic su una scheda, è consigliabile preimpostare i dati del controllo nella pagina prima della visualizzazione.  
  
 Elaborano i messaggi di **WM\_NOTIFY** dal controllo Struttura a schede nella visualizzazione o classe della finestra di dialogo.  Utilizzare la Finestra Proprietà per creare una funzione di gestione di [OnChildNotify](../Topic/CWnd::OnChildNotify.md) con un'istruzione switch basata sul messaggio di notifica viene gestito.  Per un elenco delle notifiche che un controllo Struttura a schede può inviare alla finestra padre, vedere la sezione di **Notifiche** di [Riferimento del controllo Struttura a schede](http://msdn.microsoft.com/library/windows/desktop/bb760548) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controlli](../mfc/controls-mfc.md)