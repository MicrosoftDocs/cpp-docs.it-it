---
title: Gestione delle notifiche delle descrizioni comandi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- TOOLTIPTEXT structure [MFC]
- CToolBarCtrl class [MFC], handling notifications
- notifications [MFC], tool tips
- tool tips [MFC], notifications
ms.assetid: ddb93b5f-2e4f-4537-8053-3453c86e2bbb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e18dc83bf57b449f71c3219cf7f67b6152c17394
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46016061"
---
# <a name="handling-tool-tip-notifications"></a>Gestione delle notifiche delle descrizioni comandi
Quando si specifica la **TBSTYLE_TOOLTIPS** stile, la barra degli strumenti crea e gestisce un controllo descrizione comandi. Una descrizione comandi è una piccola finestra popup che contiene una riga di testo che descrive un pulsante della barra degli strumenti. La descrizione comando è nascosto, visualizzata solo quando l'utente posiziona il cursore del mouse su un pulsante della barra degli strumenti e lascia in tale posizione per circa metà secondo. La descrizione comando viene visualizzata accanto al cursore.  
  
 Prima che venga visualizzata la descrizione comando, il **TTN_NEEDTEXT** messaggio di notifica viene inviato alla finestra proprietaria della barra degli strumenti per recuperare il testo descrittivo per il pulsante. Se finestra proprietaria della barra degli strumenti è una `CFrameWnd` finestra, lo strumento suggerimenti vengono visualizzati senza alcuna operazione aggiuntiva, perché `CFrameWnd` dispone di un gestore predefinito per il **TTN_NEEDTEXT** notifica. Se finestra proprietaria della barra degli strumenti non è derivato da `CFrameWnd`, ad esempio una visualizzazione di form o finestra di dialogo, è necessario aggiungere una voce alla mappa messaggi della finestra proprietaria e fornire un gestore delle notifiche nella mappa messaggi. La voce alla mappa messaggi della finestra proprietaria è come segue:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#40](../mfc/codesnippet/cpp/handling-tool-tip-notifications_1.cpp)]  
  
## <a name="remarks"></a>Note  
*memberFxn*<br/>
La funzione membro da chiamare quando è necessario il testo di questo pulsante.  
  
 Si noti che l'id di una descrizione comando è sempre 0.  
  
 Oltre al **TTN_NEEDTEXT** notifica, un controllo di descrizione comando può inviare le notifiche seguenti a un controllo barra degli strumenti:  
  
|Notifica|Significato|  
|------------------|-------------|  
|**TTN_NEEDTEXTA**|Controllo di descrizione comando richiede un testo ASCII (solo Windows 95)|  
|**NOTIFICHE TTN_NEEDTEXTW**|Controllo di descrizione comando richiede testo UNICODE (solo Windows NT)|  
|**TBN_HOTITEMCHANGE**|Indica che l'elemento attivo (evidenziato) è stato modificato.|  
|**NM_RCLICK**|Indica che l'utente ha complessiva di un pulsante.|  
|**TBN_DRAGOUT**|Indica l'utente ha fatto clic sul pulsante e trascinare il puntatore del mouse dal pulsante. Consente a un'applicazione implementare il trascinamento della selezione da un pulsante della barra degli strumenti. Quando si riceve questa notifica, l'applicazione di iniziare l'operazione di trascinamento e l'operazione di eliminazione.|  
|**TBN_DROPDOWN**|Indica l'utente ha fatto clic sul pulsante che usa il **TBSTYLE_DROPDOWN** stile.|  
|**TBN_GETOBJECT**|Indica l'utente ha spostato il puntatore su un pulsante che usa il **TBSTYLE_DROPPABLE** stile.|  
  
 Per una funzione di gestore di esempio e altre informazioni sull'abilitazione di descrizioni comandi, vedere [descrizioni](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

