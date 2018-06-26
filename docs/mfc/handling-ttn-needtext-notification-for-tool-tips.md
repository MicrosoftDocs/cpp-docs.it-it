---
title: Gestione della notifica TTN_NEEDTEXT per le descrizioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- TTN_NEEDTEXT
dev_langs:
- C++
helpviewer_keywords:
- TTN_NEEDTEXT message [MFC]
- notifications [MFC], tool tips
- tool tips [MFC], notifications
ms.assetid: d0370a65-21ba-4676-bcc5-8cf851bbb15c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5879082ddc23630e5ee497d8abf6b65873a2b6d4
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931964"
---
# <a name="handling-ttnneedtext-notification-for-tool-tips"></a>Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi
Come parte del [abilitazione di descrizioni](../mfc/enabling-tool-tips.md), gestire il **TTN_NEEDTEXT** messaggio aggiungendo la voce seguente alla mappa messaggi della finestra proprietaria:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#40](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_1.cpp)]  
  
 `memberFxn`  
 La funzione membro da chiamare quando è necessario il testo del pulsante.  
  
 Si noti che l'ID di una descrizione comando è sempre 0.  
  
 Dichiarare la funzione del gestore nella definizione della classe come indicato di seguito:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#53](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_2.h)]  
  
 in cui i parametri in corsivo sono:  
  
 `id`  
 Identificatore del controllo che ha inviato la notifica. Non usato. L'id di controllo è tratto dal **NMHDR** struttura.  
  
 `pNMHDR`  
 Un puntatore per il [struttura NMTTDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760258) struttura. Questa struttura viene anche illustrata più avanti nel [struttura TOOLTIPTEXT](../mfc/tooltiptext-structure.md).  
  
 `pResult`  
 Un puntatore al codice del risultato è possibile impostare prima della restituzione. **TTN_NEEDTEXT** gestori possono ignorare il *pResult* parametro.  
  
 Ecco un esempio di un gestore di notifica visualizzazione form.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#54](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_3.cpp)]  
  
 Chiamare `EnableToolTips` (questo frammento prelevato `OnInitDialog`):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#55](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)

