---
title: Definizione di un gestore messaggi per un messaggio riprodotto
ms.date: 09/07/2019
f1_keywords:
- vc.codewiz.defining.msg.msghandler
helpviewer_keywords:
- messages [MFC], reflected
- message handling [MFC], reflected messages
ms.assetid: 5a403528-58c5-46e7-90d5-4a77f0ab9b9c
ms.openlocfilehash: f7f90d3347ac61abcfcb48e77ef39aa2626ae5c8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365863"
---
# <a name="defining-a-message-handler-for-a-reflected-message"></a>Definizione di un gestore messaggi per un messaggio riprodotto

Dopo aver creato una nuova classe di controllo MFC, è possibile definire i gestori di messaggi per esso. I gestori di messaggi riflessi consentono alla classe del controllo di gestire i propri messaggi prima che il messaggio venga ricevuto dall'elemento padre. È possibile utilizzare la funzione [MFC CWnd::SendMessage](../../mfc/reference/cwnd-class.md#sendmessage) per inviare messaggi dal controllo a una finestra padre.

Con questa funzionalità è possibile, ad esempio, creare una casella di riepilogo che verrà ridisegnata automaticamente anziché basarsi sulla finestra padre per eseguire questa operazione (proprietario disegnato). Per ulteriori informazioni sui messaggi riflessi, vedere [Gestione dei messaggi riflesso](../../mfc/handling-reflected-messages.md).

Per creare un [controllo ActiveX](../../mfc/activex-controls-on-the-internet.md) con la stessa funzionalità, è necessario creare un progetto per il controllo ActiveX.

> [!NOTE]
> Non è possibile aggiungere un messaggio riflesso (OCM_*Message*) per un controllo ActiveX utilizzando la Creazione guidata classe, come descritto di seguito. È necessario aggiungere questi messaggi manualmente.

### <a name="to-define-a-message-handler-for-a-reflected-message-from-the-class-wizard"></a>Per definire un gestore messaggi per un messaggio riflesso dalla Creazione guidata classeTo define a message handler for a reflected message from the Class Wizard

1. Aggiungere un controllo, ad esempio un elenco, un controllo Rebar, una barra degli strumenti o un controllo struttura ad albero, al progetto MFC.

1. In Visualizzazione classi fare clic sul nome della classe del controllo.

1. Nella [Creazione guidata classe](mfc-class-wizard.md), il nome della classe del controllo viene visualizzato nell'elenco **Nome classe** .

1. Fare clic sulla scheda **Messaggi** per visualizzare i messaggi di Windows disponibili per l'aggiunta al controllo.

1. Selezionare il messaggio riflesso per il quale si desidera definire un gestore. I messaggi riflessi sono contrassegnati con un segno di uguale.

1. Fare clic sulla cella nella colonna destra della Creazione guidata classe \<per visualizzare il nome suggerito del gestore come aggiunta>*NomeGestore*. (Ad esempio, **il** gestore \<di WM_CTLCOLOR di messaggi suggerisce di aggiungere>**CtlColor**).

1. Fare clic sul nome suggerito per accettare. Il gestore viene aggiunto al progetto.

1. Per modificare o eliminare un gestore messaggi, ripetere i passaggi da 4 a 7.To edit or delete a message handler, repeat steps 4 through 7. Fare clic sulla cella contenente il nome del gestore da modificare o eliminare e fare clic sull'attività appropriata.

## <a name="see-also"></a>Vedere anche

[Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigate-code-cpp.md)
