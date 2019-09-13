---
title: Definizione di un gestore messaggi per un messaggio riprodotto
ms.date: 09/07/2019
f1_keywords:
- vc.codewiz.defining.msg.msghandler
helpviewer_keywords:
- messages [MFC], reflected
- message handling [MFC], reflected messages
ms.assetid: 5a403528-58c5-46e7-90d5-4a77f0ab9b9c
ms.openlocfilehash: 1e38c63464cacf445688a1d431a65af21eac86f4
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907936"
---
# <a name="defining-a-message-handler-for-a-reflected-message"></a>Definizione di un gestore messaggi per un messaggio riprodotto

Dopo aver creato una nuova classe del controllo MFC, è possibile definire i gestori di messaggi. I gestori di messaggi riflessi consentono alla classe del controllo di gestire i propri messaggi prima che il messaggio venga ricevuto dall'elemento padre. È possibile utilizzare la funzione MFC [CWnd:: SendMessage](../../mfc/reference/cwnd-class.md#sendmessage) per inviare messaggi dal controllo a una finestra padre.

Con questa funzionalità è possibile, ad esempio, creare una casella di riepilogo che verrà ridisegnata autonomamente anziché basarsi sulla finestra padre (proprietario disegnato). Per ulteriori informazioni sui messaggi riflessi, vedere [gestione dei messaggi riflessi](../../mfc/handling-reflected-messages.md).

Per creare un [controllo ActiveX](../../mfc/activex-controls-on-the-internet.md) con la stessa funzionalità, è necessario creare un progetto per il controllo ActiveX.

> [!NOTE]
>  Non è possibile aggiungere un messaggio riflesso (*messaggio*OCM_) per un controllo ActiveX usando la creazione guidata classe, come descritto di seguito. Questi messaggi devono essere aggiunti manualmente.

### <a name="to-define-a-message-handler-for-a-reflected-message-from-the-class-wizard"></a>Per definire un gestore di messaggi per un messaggio riflesso dalla creazione guidata classe

1. Aggiungere un controllo, ad esempio un elenco, un controllo Rebar, una barra degli strumenti o un controllo albero, al progetto MFC.

1. In Visualizzazione classi fare clic sul nome della classe del controllo.

1. Nella [creazione guidata classe](mfc-class-wizard.md), il nome della classe del controllo viene visualizzato nell'elenco **nome classe** .

1. Fare clic sulla scheda **messaggi** per visualizzare i messaggi di Windows disponibili per l'aggiunta al controllo.

1. Selezionare il messaggio riflesso per il quale si desidera definire un gestore. I messaggi riflessi sono contrassegnati con un segno di uguale (=).

1. Fare clic sulla cella nella colonna destra della creazione guidata classe per visualizzare il nome suggerito del gestore come \<Aggiungi >*handlerName*. Ad esempio, il gestore di messaggi **= WM_CTLCOLOR** suggerisce \<di aggiungere >**CTLCOLOR**).

1. Fare clic sul nome suggerito per accettare. Il gestore viene aggiunto al progetto.

1. Per modificare o eliminare un gestore di messaggi, ripetere i passaggi da 4 a 7. Fare clic sulla cella contenente il nome del gestore da modificare o eliminare e fare clic sull'attività appropriata.

## <a name="see-also"></a>Vedere anche

[Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigate-code-cpp.md)
