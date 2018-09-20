---
title: Mapping di messaggi a funzioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.codewiz.mapping.msg.function
dev_langs:
- C++
helpviewer_keywords:
- Windows messages [MFC], adding message handlers
- message maps [MFC], mapping messages to functions
ms.assetid: a7727a62-f638-4b20-b7f5-131f47200d6a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bb37637cbfc2ec0af96ed339da6e71cf349797e2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46402876"
---
# <a name="mapping-messages-to-functions"></a>Mapping di messaggi a funzioni

La finestra proprietà consente di associare i gestori di messaggi (funzioni membro delle classi di interfaccia utente MFC) per i messaggi generati dalle risorse dell'applicazione. Usano [mappe messaggi MFC](../../mfc/messages-and-commands-in-the-framework.md) per creare l'associazione.

Quando si usa Visualizzazione classi per creare una nuova classe derivata da una delle classi di framework, viene automaticamente inserisce un completi e funzionali di intestazione (h) e implementazione (. cpp) i file di classi specificato.

> [!NOTE]
>  Per aggiungere una nuova classe che non gestisce i messaggi, creare la classe direttamente nell'editor di testo.

### <a name="to-define-or-remove-a-message-handler-using-the-properties-window"></a>Per definire o rimuovere un gestore di messaggi usando la finestra proprietà

1. In Visualizzazione classi fare clic sulla classe.

1. Nella finestra Proprietà scegliere il **messaggi** pulsante.

    > [!NOTE]
    >  Il **messaggi** pulsante è disponibile quando si seleziona il nome della classe in visualizzazione classi o quando si fa clic all'interno della finestra di origine.

     Se il progetto ha un gestore per un messaggio, il nome del gestore viene visualizzato nella colonna destra accanto al messaggio.

1. Se il messaggio non dispone di alcun gestore, quindi fare clic sulla cella nella colonna a destra nella finestra proprietà per visualizzare il nome del gestore come suggerito \<Aggiungi >*NomeGestore*. (Ad esempio, il gestore di messaggi WM_TIMER suggerisce \<Aggiungi >`OnTimer`).

1. Fare clic sul nome suggerito per aggiungere il codice stub per la funzione.

1. Per modificare un gestore di messaggi, fare doppio clic sul messaggio nella visualizzazione classi e modificare il codice nella finestra di origine.

Per rimuovere un gestore di messaggi, fare doppio clic il gestore nella colonna destra e selezionare \<Elimina >*NomeGestore*. Il codice della funzione viene impostato come commento.

## <a name="see-also"></a>Vedere anche

[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Una funzione Virtual in override](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Aggiunta di gestori eventi per i controlli della finestra di dialogo](../../windows/adding-event-handlers-for-dialog-box-controls.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)
