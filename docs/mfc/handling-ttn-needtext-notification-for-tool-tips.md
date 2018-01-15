---
title: Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: TTN_NEEDTEXT
dev_langs: C++
helpviewer_keywords:
- TTN_NEEDTEXT message [MFC]
- notifications [MFC], tool tips
- tool tips [MFC], notifications
ms.assetid: d0370a65-21ba-4676-bcc5-8cf851bbb15c
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 26a3b74ca0bc11b169e195599c5172b245cf0529
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="handling-ttnneedtext-notification-for-tool-tips"></a>Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi
Come parte di [abilitazione di descrizioni comandi](../mfc/enabling-tool-tips.md), gestire il **TTN_NEEDTEXT** messaggio aggiungendo la voce seguente alla mappa messaggi della finestra proprietaria:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#40](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_1.cpp)]  
  
 `memberFxn`  
 La funzione membro da chiamare quando è necessario il testo del pulsante.  
  
 Si noti che l'ID di una descrizione comandi è sempre 0.  
  
 Dichiarare la funzione del gestore nella definizione della classe come indicato di seguito:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#53](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_2.h)]  
  
 dove i parametri in corsivo sono:  
  
 `id`  
 Identificatore del controllo che ha inviato la notifica. Non usato. Da cui proviene l'id di controllo di **NMHDR** struttura.  
  
 `pNMHDR`  
 Un puntatore al [struttura NMTTDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760258) struttura. Questa struttura viene anche illustrata più avanti nel [struttura TOOLTIPTEXT](../mfc/tooltiptext-structure.md).  
  
 `pResult`  
 Un puntatore al codice del risultato è possibile impostare prima della restituzione. **TTN_NEEDTEXT** gestori possono ignorare il `pResult` parametro.  
  
 Un esempio di un gestore di notifica visualizzazione form.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#54](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_3.cpp)]  
  
 Chiamare `EnableToolTips` (questo frammento prelevato `OnInitDialog`):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#55](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)

