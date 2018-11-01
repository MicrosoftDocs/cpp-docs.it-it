---
title: Definizione di un gestore messaggi per un messaggio riprodotto
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.defining.msg.msghandler
helpviewer_keywords:
- messages [MFC], reflected
- message handling [MFC], reflected messages
ms.assetid: 5a403528-58c5-46e7-90d5-4a77f0ab9b9c
ms.openlocfilehash: 89cb1631be7b8588d02518eacbc93b466a275828
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50531876"
---
# <a name="defining-a-message-handler-for-a-reflected-message"></a>Definizione di un gestore messaggi per un messaggio riprodotto

Dopo aver creato una nuova classe di controlli MFC, è possibile definire i gestori di messaggi per tale. Gestori di messaggi riprodotti consentono che la classe di controllo gestire i propri messaggi prima che il messaggio viene ricevuto dall'elemento padre. È possibile utilizzare MFC [CWnd:: SendMessage](../../mfc/reference/cwnd-class.md#sendmessage) funzione per inviare messaggi dal controllo per la finestra padre.

Con questa funzionalità, ad esempio, è possibile creare una casella di riepilogo che verrà ridisegnata, anziché basarsi sulla finestra padre per eseguire operazioni in questo caso (proprietario). Per altre informazioni sui messaggi riprodotti, vedere [gestione dei messaggi riprodotti](../../mfc/handling-reflected-messages.md).

Per creare un [controllo ActiveX](../../mfc/activex-controls-on-the-internet.md) con la stessa funzionalità, è necessario creare un progetto per il controllo ActiveX.

> [!NOTE]
>  Non è possibile aggiungere un messaggio riprodotto (OCM _*messaggio*) per un ActiveX controllare utilizzando la finestra Proprietà, come descritto di seguito. È necessario aggiungere manualmente questi messaggi.

### <a name="to-define-a-message-handler-for-a-reflected-message-from-the-properties-window"></a>Per definire un gestore di messaggi per un messaggio riprodotto dalla finestra delle proprietà

1. Aggiungere un controllo, ad esempio un elenco, un controllo rebar, una barra degli strumenti o un controllo struttura ad albero, a un progetto MFC.

1. In visualizzazione classi, fare clic sul nome della classe del controllo.

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), il nome di classe di controllo viene visualizzato nei **nome della classe** elenco.

1. Scegliere il **messaggi** pulsante per visualizzare i messaggi di Windows disponibili per l'aggiunta al controllo.

1. Scorrere verso il basso l'elenco dei messaggi nella finestra Proprietà fino a quando non viene visualizzata l'intestazione **riflesso**. In alternativa, fare clic il **categorie** pulsante e comprimere la visualizzazione per visualizzare i **riflesso** intestazione.

1. Selezionare il messaggio riflesso per il quale si desidera definire un gestore. Messaggi riflessi sono contrassegnati con un segno di uguale (=).

1. Fare clic sulla cella nella colonna a destra nella finestra proprietà per visualizzare il nome del gestore come suggerito \<Aggiungi >*NomeGestore*. (Ad esempio, il **= WM_CTLCOLOR** gestore messaggio suggerisce \<aggiungere >**CtlColor**).

1. Fare clic sul nome suggerito per accettare. Il gestore di è aggiunto al progetto.

   I nomi dei gestori di messaggi che sono stati aggiunti vengono visualizzati nella colonna destra della finestra riflessi.

9. Per modificare o eliminare un gestore di messaggi, ripetere i passaggi da 4 a 7. Fare clic sulla cella contenente il nome del gestore da modificare o eliminare e fare clic sull'attività appropriata.

## <a name="see-also"></a>Vedere anche

[Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)
