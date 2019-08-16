---
title: Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi
ms.date: 11/04/2016
f1_keywords:
- TTN_NEEDTEXT
helpviewer_keywords:
- TTN_NEEDTEXT message [MFC]
- notifications [MFC], tool tips
- tool tips [MFC], notifications
ms.assetid: d0370a65-21ba-4676-bcc5-8cf851bbb15c
ms.openlocfilehash: a63154f3da539676f31709899568b6486dc6017e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508524"
---
# <a name="handling-ttn_needtext-notification-for-tool-tips"></a>Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi

Come parte dell' [Abilitazione delle descrizioni comandi](../mfc/enabling-tool-tips.md), è possibile gestire il messaggio **TTN_NEEDTEXT** aggiungendo la voce seguente alla mappa messaggi della finestra proprietaria:

[!code-cpp[NVC_MFCControlLadenDialog#40](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_1.cpp)]

*memberFxn*<br/>
Funzione membro da chiamare quando è necessario il testo per questo pulsante.

Si noti che l'ID di una descrizione comando è sempre 0.

Dichiarare la funzione del gestore nella definizione della classe come indicato di seguito:

[!code-cpp[NVC_MFCControlLadenDialog#53](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_2.h)]

dove si trovano i parametri in corsivo:

*id*<br/>
Identificatore del controllo che ha inviato la notifica. Non usato. L'ID del controllo viene tratto dalla struttura **NMHDR** .

*pNMHDR*<br/>
Puntatore alla struttura [NMTTDISPINFO](/windows/win32/api/commctrl/ns-commctrl-nmttdispinfow) . Questa struttura viene inoltre discussa ulteriormente nella [struttura ToolTipText](../mfc/tooltiptext-structure.md).

*pResult*<br/>
Puntatore al codice risultato che è possibile impostare prima di restituire. I gestori **TTN_NEEDTEXT** possono ignorare il parametro *pResult* .

Come esempio di gestore notifiche visualizzazione form:

[!code-cpp[NVC_MFCControlLadenDialog#54](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_3.cpp)]

Call `EnableToolTips` (questo frammento tratto `OnInitDialog`da):

[!code-cpp[NVC_MFCControlLadenDialog#55](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)
