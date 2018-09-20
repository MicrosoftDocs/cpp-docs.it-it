---
title: L'invio e ricezione di messaggi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows messages [MFC], handling in MFC
- control-notification messages [MFC]
- messages [MFC], receiving
- messages [MFC], MFC
- MFC, messages
- messages [MFC], sending
ms.assetid: 9ce189cb-b259-4c3b-b6f2-9cfbed18b98b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e28f35fc87b78ac4e04df0f8147d76571c51320e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438821"
---
# <a name="message-sending-and-receiving"></a>Invio e ricezione di messaggi

Prendere in considerazione la parte di invio del processo e modalità di risposta del framework.

La maggior parte dei risultati i messaggi dall'interazione dell'utente con il programma. I comandi vengono generati tramite clic del mouse nelle voci di menu o i pulsanti della barra degli strumenti o tramite le sequenze di tasti di scelta rapida. L'utente genera anche i messaggi di Windows, ad esempio, sposta o si ridimensiona una finestra. Quando si verificano gli eventi, ad esempio l'avvio del programma o la chiusura, come windows ottenere o perde lo stato attivo e così via, vengono inviati altri messaggi di Windows. I messaggi di notifica del controllo vengono generati da clic del mouse o altre interazioni utente con un controllo, ad esempio un controllo pulsante o casella di riepilogo in una finestra di dialogo.

Il `Run` funzione membro di classe `CWinApp` recupera i messaggi e li invia alla finestra appropriata. La maggior parte dei messaggi di comando vengono inviati alla finestra cornice principale dell'applicazione. Il `WindowProc` predefiniti da classe libreria Ottiene i messaggi e li instrada in modo diverso, a seconda della categoria del messaggio ricevuto.

Si consideri ora la parte del processo di ricezione.

Il ricevitore iniziale di un messaggio deve essere un oggetto finestra. I messaggi di Windows sono in genere gestiti direttamente da tale oggetto finestra. I messaggi di comando, in genere che hanno origine nella finestra cornice principale dell'applicazione vengono instradati alla catena di destinazione comando descritto in [Routing dei comandi](../mfc/command-routing.md).

Ogni oggetto in grado di ricevere i messaggi o i comandi ha il proprio messaggio di eseguire il mapping che abbina un messaggio o un comando con il nome del relativo gestore.

Quando un oggetto destinazione comando riceve un messaggio o un comando, viene cercato propria mappa messaggi per trovare una corrispondenza. Se viene rilevato un gestore per il messaggio, chiama il gestore. Per altre informazioni sul modo in cui vengono eseguita la ricerca di mappe messaggi, vedere [modo in cui il Framework ricerca nelle mappe](../mfc/how-the-framework-searches-message-maps.md). Fare nuovamente riferimento alla figura [comandi nel Framework](../mfc/user-interface-objects-and-command-ids.md).

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

