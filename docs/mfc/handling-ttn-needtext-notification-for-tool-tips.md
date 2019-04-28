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
ms.openlocfilehash: 97db98322cd7c0d14e46f54a055bbc646c90d785
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62240389"
---
# <a name="handling-ttnneedtext-notification-for-tool-tips"></a>Gestione della notifica TTN_NEEDTEXT per le descrizioni comandi

Come parte della [abilitazione di descrizioni](../mfc/enabling-tool-tips.md), gestiscono le **TTN_NEEDTEXT** messaggio aggiungendo la voce seguente alla mappa messaggi della finestra proprietaria:

[!code-cpp[NVC_MFCControlLadenDialog#40](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_1.cpp)]

*memberFxn*<br/>
La funzione membro da chiamare quando è necessario il testo di questo pulsante.

Si noti che l'ID di una descrizione comando è sempre 0.

Dichiarare la funzione del gestore nella definizione della classe come indicato di seguito:

[!code-cpp[NVC_MFCControlLadenDialog#53](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_2.h)]

in cui i parametri in corsivo sono:

*ID*<br/>
Identificatore del controllo che riceve la notifica. Non usato. L'id del controllo deriva dal **NMHDR** struttura.

*pNMHDR*<br/>
Un puntatore per il [struttura NMTTDISPINFO](/windows/desktop/api/commctrl/ns-commctrl-tagnmttdispinfoa) struttura. Questa struttura viene inoltre illustrata dettagliatamente nella [struttura TOOLTIPTEXT](../mfc/tooltiptext-structure.md).

*pResult*<br/>
Un puntatore al codice del risultato è possibile impostare prima di restituire. **TTN_NEEDTEXT** gestori possono ignorare la *pResult* parametro.

Ad esempio di un gestore di notifica-visualizzazione di form:

[!code-cpp[NVC_MFCControlLadenDialog#54](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_3.cpp)]

Chiamare `EnableToolTips` (questo frammento ricavato `OnInitDialog`):

[!code-cpp[NVC_MFCControlLadenDialog#55](../mfc/codesnippet/cpp/handling-ttn-needtext-notification-for-tool-tips_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)
