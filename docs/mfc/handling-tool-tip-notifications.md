---
description: 'Altre informazioni su: gestione delle notifiche delle descrizioni comandi'
title: Gestione delle notifiche delle descrizioni comandi
ms.date: 11/04/2016
helpviewer_keywords:
- TOOLTIPTEXT structure [MFC]
- CToolBarCtrl class [MFC], handling notifications
- notifications [MFC], tool tips
- tool tips [MFC], notifications
ms.assetid: ddb93b5f-2e4f-4537-8053-3453c86e2bbb
ms.openlocfilehash: 02bb1fb0760cf91c76e3c3be75fe097d5d57b71e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254859"
---
# <a name="handling-tool-tip-notifications"></a>Gestione delle notifiche delle descrizioni comandi

Quando si specifica lo stile **TBSTYLE_TOOLTIPS** , la barra degli strumenti crea e gestisce un controllo descrizione comando. Una descrizione comando è una piccola finestra popup contenente una riga di testo che descrive un pulsante della barra degli strumenti. La descrizione comando è nascosta e viene visualizzata solo quando l'utente inserisce il cursore su un pulsante della barra degli strumenti e lo lascia per circa un secondo. La descrizione comando viene visualizzata accanto al cursore.

Prima che venga visualizzata la descrizione comando, viene inviato il messaggio di notifica **TTN_NEEDTEXT** alla finestra proprietaria della barra degli strumenti per recuperare il testo descrittivo per il pulsante. Se la finestra proprietaria della barra degli strumenti è una `CFrameWnd` finestra, le descrizioni comandi vengono visualizzate senza sforzi aggiuntivi, perché `CFrameWnd` dispone di un gestore predefinito per la notifica **TTN_NEEDTEXT** . Se la finestra proprietaria della barra degli strumenti non è derivata da `CFrameWnd` , ad esempio una finestra di dialogo o una visualizzazione form, è necessario aggiungere una voce alla mappa messaggi della finestra proprietaria e fornire un gestore notifiche nella mappa messaggi. La voce relativa alla mappa messaggi della finestra proprietaria è la seguente:

[!code-cpp[NVC_MFCControlLadenDialog#40](codesnippet/cpp/handling-tool-tip-notifications_1.cpp)]

## <a name="remarks"></a>Commenti

*memberFxn*<br/>
Funzione membro da chiamare quando è necessario il testo per questo pulsante.

Si noti che l'ID di una descrizione comando è sempre 0.

Oltre alla notifica **TTN_NEEDTEXT** , un controllo descrizione comando può inviare le notifiche seguenti a un controllo Toolbar:

|Notifica|Significato|
|------------------|-------------|
|**TTN_NEEDTEXTA**|Il controllo descrizione comando richiede testo ASCII (solo Windows 95)|
|**TTN_NEEDTEXTW**|Il controllo descrizione comando richiede testo UNICODE (solo Windows NT)|
|**TBN_HOTITEMCHANGE**|Indica che l'elemento attivo (evidenziato) è stato modificato.|
|**NM_RCLICK**|Indica che l'utente ha fatto clic con il pulsante destro del mouse su un pulsante.|
|**TBN_DRAGOUT**|Indica che l'utente ha fatto clic sul pulsante e ha trascinato il puntatore del mouse sul pulsante. Consente a un'applicazione di implementare il trascinamento della selezione da un pulsante della barra degli strumenti. Quando si riceve questa notifica, l'applicazione inizia l'operazione di trascinamento della selezione.|
|**TBN_DROPDOWN**|Indica che l'utente ha fatto clic su un pulsante che usa lo stile del **TBSTYLE_DROPDOWN** .|
|**TBN_GETOBJECT**|Indica che l'utente ha spostato il puntatore su un pulsante che usa lo stile del **TBSTYLE_DROPPABLE** .|

Per una funzione di gestione di esempio e altre informazioni sull'abilitazione delle descrizioni comandi, vedere le descrizioni [comandi](tool-tips-in-windows-not-derived-from-cframewnd.md).

## <a name="see-also"></a>Vedi anche

[Utilizzo di CToolBarCtrl](using-ctoolbarctrl.md)<br/>
[Controlli](controls-mfc.md)
