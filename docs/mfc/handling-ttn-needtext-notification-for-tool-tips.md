---
title: "Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TTN_NEEDTEXT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "notifiche, descrizioni comandi"
  - "descrizioni comandi [C++], notifiche"
  - "TTN_NEEDTEXT (messaggio)"
ms.assetid: d0370a65-21ba-4676-bcc5-8cf851bbb15c
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come parte di [abilitare le descrizioni comandi](../mfc/enabling-tool-tips.md), gestire il messaggio di **TTN\_NEEDTEXT** aggiungendo la seguente voce alla mappa messaggi della finestra proprietaria:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#40](../mfc/codesnippet/CPP/handling-ttn-needtext-notification-for-tool-tips_1.cpp)]  
  
 `memberFxn`  
 La funzione membro da chiamare quando il testo è necessario per questo pulsante.  
  
 Si noti che l'id di descrizione comandi è sempre 0.  
  
 Dichiarare la funzione di gestione della definizione della classe come segue:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#53](../mfc/codesnippet/CPP/handling-ttn-needtext-notification-for-tool-tips_2.h)]  
  
 dove i parametri visualizzati in corsivo sono:  
  
 `id`  
 Identificatore del controllo che ha inviato le notifiche.  Non utilizzato.  L'id del controllo viene effettuata dalla struttura di **NMHDR**.  
  
 `pNMHDR`  
 Un puntatore a una struttura di [NMTTDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760258).  Questa struttura viene trattata ulteriormente in [La struttura di TOOLTIPTEXT](../mfc/tooltiptext-structure.md).  
  
 `pResult`  
 Un puntatore a verificarsi codice che è possibile impostare prima del completamento.  I gestori di**TTN\_NEEDTEXT** possono ignorare il parametro di `pResult`.  
  
 Come esempio di un gestore di notifica di visualizzazione form:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#54](../mfc/codesnippet/CPP/handling-ttn-needtext-notification-for-tool-tips_3.cpp)]  
  
 Chiamata `EnableToolTips` \(questo frammento ottenuto da `OnInitDialog`\):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#55](../mfc/codesnippet/CPP/handling-ttn-needtext-notification-for-tool-tips_4.cpp)]  
  
## Vedere anche  
 [Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)