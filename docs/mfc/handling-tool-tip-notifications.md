---
title: Gestione delle notifiche delle descrizioni comandi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- TOOLTIPTEXT structure [MFC]
- CToolBarCtrl class [MFC], handling notifications
- notifications [MFC], tool tips
- tool tips [MFC], notifications
ms.assetid: ddb93b5f-2e4f-4537-8053-3453c86e2bbb
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2b7668420b849dc08215a4fc309edf86e9171462
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="handling-tool-tip-notifications"></a>Gestione delle notifiche delle descrizioni comandi
Quando si specifica il `TBSTYLE_TOOLTIPS` stile, la barra degli strumenti crea e gestisce un controllo descrizione comando. Una descrizione comandi è una piccola finestra popup che contiene una riga di testo che descrive un pulsante della barra degli strumenti. La descrizione comando è nascosto, viene visualizzato solo quando l'utente posiziona il cursore del mouse su un pulsante della barra degli strumenti e lascia in tale posizione per circa mezzo secondo. La descrizione comando viene visualizzata accanto al cursore.  
  
 Prima di visualizzata la descrizione comando, il **TTN_NEEDTEXT** messaggio di notifica viene inviata alla finestra proprietaria della barra degli strumenti per recuperare il testo descrittivo per il pulsante. Se finestra proprietaria della barra degli strumenti è un `CFrameWnd` finestra dello strumento suggerimenti vengono visualizzati senza ulteriori operazioni, perché `CFrameWnd` dispone di un gestore predefinito per il **TTN_NEEDTEXT** notifica. Se la finestra proprietaria della barra degli strumenti non è derivato da `CFrameWnd`, ad esempio una vista di casella o modulo finestra di dialogo, è necessario aggiungere una voce alla mappa messaggi della finestra proprietaria e fornire un gestore di notifica della mappa messaggi. La voce alla mappa messaggi della finestra proprietaria è come segue:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#40](../mfc/codesnippet/cpp/handling-tool-tip-notifications_1.cpp)]  
  
## <a name="remarks"></a>Note  
 `memberFxn`  
 La funzione membro da chiamare quando è necessario il testo del pulsante.  
  
 Si noti che l'id di una descrizione comandi è sempre 0.  
  
 Oltre al **TTN_NEEDTEXT** notifica, un controllo descrizione comando può inviare le notifiche seguenti a un controllo barra degli strumenti:  
  
|Notifica|Significato|  
|------------------|-------------|  
|**TTN_NEEDTEXTA**|Controllo descrizione comando richiede un testo ASCII (solo Windows 95)|  
|**NOTIFICHE TTN_NEEDTEXTW**|Controllo descrizione comandi richiede testo UNICODE (solo Windows NT)|  
|**TBN_HOTITEMCHANGE**|Indica che l'elemento (evidenziato) attivo è stato modificato.|  
|**NM_RCLICK**|Indica che l'utente ha complessiva di un pulsante.|  
|**TBN_DRAGOUT**|Indica l'utente ha fatto clic sul pulsante e trascinare il puntatore dal pulsante. Consente a un'applicazione implementare il trascinamento della selezione da un pulsante della barra degli strumenti. Quando si riceve questa notifica, l'applicazione verrà avviata l'operazione di trascinamento.|  
|**TBN_DROPDOWN**|Indica che l'utente ha fatto clic su un pulsante che utilizza il **TBSTYLE_DROPDOWN** stile.|  
|**TBN_GETOBJECT**|Indica che l'utente ha spostato il puntatore su un pulsante che utilizza il **TBSTYLE_DROPPABLE** stile.|  
  
 Per una funzione del gestore di esempio e altre informazioni sull'abilitazione di descrizioni comandi, vedere [descrizioni comandi](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

